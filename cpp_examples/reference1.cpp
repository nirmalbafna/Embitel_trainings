// Simple C++ references
#include<iostream>
using namespace std;
int* f(int* x) {
 (*x)++;
 return x; // Safe, x is outside this scope
}
int& g(int& x) {
 x++; // Same effect as in f()
 return x; // Safe, outside this scope
} 
int& h() {
 int q;
//! return q; // Error404
 static int x;
 return x; // Safe, x lives outside this scope
}
int main() {
 int a = 0;
 cout<<f(&a)<<endl; // Ugly (but explicit)
 cout<<g(a)<<endl; // Clean (but hidden)
 cout<<h()<<endl;
} ///:~
