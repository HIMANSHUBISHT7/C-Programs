#include<stdio.h>
// fahrenheit to celcius.
int main(){

    float temperature;

    printf("Enter temperature in (f) : ");
    scanf("%f",&temperature);

    printf("In celcius : %.2f",(temperature-32)*5/9);
    return 0;
}