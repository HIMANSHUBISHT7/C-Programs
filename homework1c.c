// write a program to check if the given number is a natural number.
#include<stdio.h>
int main (){
    int n ;
    printf("enter a number : ");
    scanf("%d",&n);

    if(n>0)
    {
        printf("the number in natural");
    }
    else 
    {
        printf("the number is not natural");
    }
    return 0;
}