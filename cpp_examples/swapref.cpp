#include<iostream>
using namespace std;
void swap(int,int);

void swap(int &x,int &y){
	
	int temp=x;
	x=y;
	y=temp;
	cout<<x<<y<<endl;
}
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	swap(a,b);
	
}


