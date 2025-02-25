// write a program for magic number.
#include<stdio.h>
int main (){
    int n,p;
    printf("enter number : ");
    scanf("%d",&n);
    int sum = 0;
    int multiply = 1;
    while (n>0)
    {
        p=n%10;
        sum = sum + p;
        multiply = multiply * p;
        n=n/10;
    }
    printf("sum : %d\n",sum);
    printf("multiply : %d\n",multiply);
    if (sum == multiply)
    {
        printf("magic number");
    }
    else 
    {
        printf("not a magic number");
    }
    return 0;
} 