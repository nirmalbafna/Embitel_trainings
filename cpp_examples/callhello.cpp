// Call another program
#include <cstdlib> // Declare "system()"
#include<cstdio>
using namespace std;
int main(int argc, char *argv[]) 
{
	char buf[80];
	sprintf(buf,"%s%s%s%s%s", "ifconfig", " ", argv[1], " ", argv[2]);
	system(buf);
} ///:~
