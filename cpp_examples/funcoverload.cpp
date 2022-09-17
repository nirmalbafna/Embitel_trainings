#include<iostream>
using namespace std;

void display();
void display(char ch);
void display(char ch, int size);



void display(){
	cout<<"@";
	cout<<endl;
}
void display(char ch){
	for(int i=0;i<66;i++)
		cout<<ch;
	cout<<endl;
}
void display(char ch, int size){
	for(int i=0;i<size;i++)
		cout<<ch;
	cout<<endl;
}

int main(){
	display();
	display('$');
	display('*', 100);
}
