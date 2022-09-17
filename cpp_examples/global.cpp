//{L} Global2
// Demonstration of global variables
#include <iostream>
using namespace std;
int globe=20;

int main() {
int globe=40;
cout<<"local  globe"<<globe<<endl;
cout<<"global"<<::globe<<endl;
} 
