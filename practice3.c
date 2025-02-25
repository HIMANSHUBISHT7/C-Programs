#include<stdio.h>
int main (){
    float g,t,n;
    printf("enter gross salary : ");
    scanf("%f",& g);
    t = 0.14 * g;
    n = g - t;
    printf("taxes withheld : %f",t);
    printf("net salary : %f",n);
    return 0;
}