// Public is just like C's struct
#include<iostream>
using namespace std;
class A {
	public:	void display();
 void func(int i,char ch, float f);
 private:
 int i;
 char j;
 float f;
 
};
void A::display(){
	cout<<i<<endl;
	cout<<j<<endl;
	cout<<f<<endl;
}
void A::func(int ip, char ch, float f) {
i=ip;
j=ch;
this->f=f;
}
class B { 
int i;
 char j;
 float f;
public:
 void func(int i, char ch,float f);
 void display();
};


void B::display(){
	cout<<i<<endl;
	cout<<j<<endl;
	cout<<f<<endl;
}
void B::func(int ip, char ch, float f){
i=ip;
j=ch;
this->f=f;
}
int main() {
 A a; B b;
#if 0
 b.i = 1;
 b.j = 'c';
 b.f = 3.14159;
#endif
 a.func(1,'c',3.2);
 b.func(11, 'f', 44.3);
 a.display();
 b.display();
} ///:~) 

