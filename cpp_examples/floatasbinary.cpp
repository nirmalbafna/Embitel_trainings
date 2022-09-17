#include <cstdlib>
#include <iostream>
using namespace std;
void printBinary(const unsigned char val) {
 for(int i = 7; i >= 0; i--)
 if(val & (1 << i))
 std::cout << "1";
 else
 std::cout << "0";
} ///:~
int main(int argc, char* argv[]) {
 if(argc != 2) {
 cout << "Must provide a number" << endl;
 exit(1);
 }
 double d = atof(argv[1]);
 unsigned char* cp =
 reinterpret_cast<unsigned char*>(&d);
 for(int i = sizeof(double); i > 0 ; i -= 2) {
 printBinary(cp[i-1]);
 printBinary(cp[i]);
 }
 }
