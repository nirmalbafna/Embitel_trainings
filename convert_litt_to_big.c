#include<stdio.h>
int main(){
    int value = 0x11223344;
    int converted =0;
    printf("Value before converting = 0x%x \n",value);

    converted |= ((0x000000ff & value) << 24);
    converted |= ((0x0000ff00 & value) << 8);
    converted |= ((0x00ff0000 & value) >> 8);
    converted |= ((0xff000000 & value) >> 24);

    printf("Value After converting = 0x%x \n",converted);
    return 0;
}