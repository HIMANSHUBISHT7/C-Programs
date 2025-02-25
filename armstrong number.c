// write a program to check if a given number is armstrong number or not.
#include<stdio.h>
int main (){
    int n,p,a;
    printf("Enter number : ");
    scanf("%d",&n);
    a=n;
    int sum=0;
    while (n>0)
    {
        p=n%10;
        sum=sum+(p*p*p);
        n=n/10;
    }
    printf("Cubic sum of each number : %d\n",sum);
    if (sum == a)
    {
        printf("armstrong number");
    }
    else 
    {
        printf("not armstrong number");
    }
    return 0;
} 