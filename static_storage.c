#include <stdio.h>
// By using the static storage class initialize hardware once

void hardware_initialize(){
    printf("hardware initialized \n");
}
void read_data(){
    printf("reading data \n");
}
void data_acq_sensor(){
    static int flag=0;
    if(flag==0){
        hardware_initialize();
        read_data();
        ++flag;
    }
    else{
        read_data();
    }
}
int main(){
    int data_acq_sensor_value=10;
    while(data_acq_sensor_value){
        data_acq_sensor();
        -- data_acq_sensor_value;
    }    
}