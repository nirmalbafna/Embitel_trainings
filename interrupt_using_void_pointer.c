#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char int_name[32];
    int (*isr)();
}isr_t;

int keyboard_interrupt(){
    printf("Generating Keyboard Interrupt\n");
}

int mouse_interrupt(){
    printf("Generating mouse Interrupt\n");
}

int usb_interrupt(){
    printf("USB Interrupt\n");
}

int i2c_interrupt(){

    printf("i2c interrupt\n");
}

isr_t ivt[]={{"isr0",keyboard_interrupt},{"isr1",mouse_interrupt},{"isr2",usb_interrupt},{"isr3",i2c_interrupt}};

int main(){
    while(1){
        ivt[rand()%4].isr();
        sleep(1);
    }
}