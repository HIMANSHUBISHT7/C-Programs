#include<stdio.h>
// convert temperature from degree celsius to fahrenheit.
int main (){
    int C;
    float F;
    printf("enter temperature in celsius : ");
    scanf("%d",& C);

    printf("temperature in fahrenheit : %.2f", F = (C*9/5)+32);
    return 0;
}