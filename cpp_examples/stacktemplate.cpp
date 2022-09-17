#include <iostream>
#include<string>
using namespace std;
const int MAX = 2; //size of array
////////////////////////////////////////////////////////////////
template <class Type>
class Stack
{
private:
Type st[MAX]; //stack: array of any type
int top; //number of top of stack
public:
class Full{};
class Empty{};

Stack() //constructor
{ top = -1; }
void push(Type var) //put number on stack
{	if(top>=MAX-1)
	throw Full();
       	st[++top] = var; }
Type pop() //take number off stack
{ 
	if(top<0){
	throw Empty();
	}
	return st[top--]; }
};
int main()
{
try{
Stack<float> s1; //s1 is object of class Stack<float>
s1.push(1111.1F); //push 3 floats, pop 3 floats
s1.push(2222.2F);
s1.push(3333.3F);
cout << "1: " << s1.pop() << endl;
cout << "2: " << s1.pop() << endl;
cout << "3: " << s1.pop() << endl;
}
catch(Stack<int>::Full){
cout<<"Exception: Stack Full"<<endl;
}
catch(Stack<int>::Empty){
cout<<"Exception: Stack Empty"<<endl;
}
Stack<long> s2; //s2 is object of class Stack<long>
s2.push(123123123L); //push 3 longs, pop 3 longs
s2.push(234234234L);
s2.push(345345345L);
cout << "1: " << s2.pop() << endl;
cout << "2: " << s2.pop() << endl;
cout << "3: " << s2.pop() << endl;
Stack<string> s3; //s2 is object of class Stack<long>
s3.push("Leed"); //push 3 longs, pop 3 longs
s3.push("ieeen");
s3.push("djijfj");
cout << "1: " << s3.pop() << endl;
cout << "2: " << s3.pop() << endl;
cout << "3: " << s3.pop() << endl;
return 0;
}

