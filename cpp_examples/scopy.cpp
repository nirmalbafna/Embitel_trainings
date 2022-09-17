// Copy one file to another, a line at a time
#include <string>
#include <fstream>
using namespace std;
int main() {
 ifstream input("Scopy.cpp"); // Open for reading
 ofstream output("Scopy2.cpp"); // Open for writing
 string s;
 while(getline(input, s)) // Discards newline char
 output << s << "\n"; // ... must add it back
} 
