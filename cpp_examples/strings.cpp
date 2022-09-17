
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int main() {
 ifstream in("fillstr.cpp");
 string s, line;
 while(getline(in, line))
 s += line + "\n";
 cout << s;
  // Find first occurrence of "namespace"
  string  st1="namespace";
    size_t found = s.find(st1);
    if (found != string::npos)        
cout << "First occurrence is " << found << endl;
} 

