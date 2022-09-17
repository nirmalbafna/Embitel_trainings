#include <iostream>
using namespace std;
class beta; //needed for frifunc declaration
class alpha
{
private:
int data;
public:
alpha(int x);{
data=x;
}//no-arg constructor
friend int frifunc(alpha, beta); //friend function
};
class beta
{
private:
int data;
public:
beta(int x){
data=x;
} //no-arg constructor
friend int frifunc(alpha, beta); //friend function
};
int frifunc(alpha a, beta b) //function definition
{
return( a.data + b.data );
}
int main()
{
alpha a(3);
beta b(7);
cout << frifunc(aa, bb) << endl; //call the function
return 0;
}
