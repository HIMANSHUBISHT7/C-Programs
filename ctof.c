#include<stdio.h>
// celcius to fahrenheit.
int main(){
    
    float temperature;
    printf("Enter temperature in (c) : ");
    scanf("%f",&temperature);

    printf("In Fahrenheit : %f",(temperature*9/5)+32);
    return 0;
}