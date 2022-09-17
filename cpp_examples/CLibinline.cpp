#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;
class CStash {
    int size; // Size of each space
     int quantity; // Number of storage spaces
     int next; // Next empty space
     // Dynamically allocated array of bytes:
     unsigned char* storage;
    void inflate(int increase);
	public:
    CStash(int sz):size(sz), quantity(0), next(0),storage(0){} // Constructor
 ~CStash(); // Destructor
    
//    void cleanup();
    int add(const void* element);
    void* fetch(int index);
    int count();
};


const int increment = 100;
#if 0
CStash::CStash(int sz) {
     size = sz;
     quantity = 0;
     storage = 0;
     next = 0;
}
#endif

int CStash::add(const void* element) {
     if(next >= quantity) //Enough space left?
         inflate(increment);
// Copy element into storage,
// starting at next empty space:
     int startBytes = next * size;
     unsigned char* e = (unsigned char*)element;
     for(int i = 0; i < size; i++)
         storage[startBytes + i] = e[i];
         next++;
     return(next - 1); // Index number
}


void* CStash::fetch(int index) {
// Check index boundaries:
     assert(0 <= index);
     if(index >= next)
         return 0; // To indicate the end
// Produce pointer to desired element:
     return &(storage[index * size]);
}



int CStash::count() {
     return next; // Elements in CStash
}



void CStash::inflate(int increase) {
     assert(increase > 0);
     int newQuantity = quantity + increase;
     int newBytes = newQuantity * size;
     int oldBytes = quantity * size;
     unsigned char* b = new unsigned char[newBytes];
     for(int i = 0; i < oldBytes; i++)
         b[i] = storage[i]; // Copy old to new
     delete [](storage); // Old storage
     storage = b; // Point to new memory
     quantity = newQuantity;
}



CStash::~CStash() {
     if(storage != 0) {
         cout << "freeing storage" << endl;
         delete []storage;
     }
}



int main() {
// Define variables at the beginning
// of the block, as in C:
     CStash intStash(sizeof(int));
     int i;
     char* cp;
     ifstream in;
     string line;
     const int bufsize = 80;
// Now remember to initialize the variables:
    // intStash.initialize(sizeof(int));
     for(i = 0; i < 100; i++)
         intStash.add(&i);

     for(i = 0; i < intStash.count(); i++)
         cout << "fetch(&intStash, " << i << ") = "
        << *(int*)intStash.fetch(i)
         << endl;
// Holds 80-character strings:
CStash stringStash(sizeof(char)*bufsize);
    // stringStash.initialize(sizeof(char)*bufsize);
     in.open("CLibTest2.cpp");
     assert(in);
     while(getline(in, line))
         stringStash.add(line.c_str());
         i = 0;
     while((cp = (char*)stringStash.fetch(i++))!=0)
         cout << "fetch(&stringStash, " << i << ") = "
         << cp << endl;
//     intStash.cleanup();
  //   stringStash.cleanup();
}
