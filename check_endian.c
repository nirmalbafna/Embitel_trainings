#include <stdio.h>
// program to find the machine is big endian or little endian
int main()
{
int i = 0x12345678;
char *p= &i;
printf("%x",*p);
return 0;
}
