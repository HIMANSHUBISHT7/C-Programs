#include<stdio.h>
// check the number is prime or not.
int main(){

    int i,n,count;

    printf("Enter n : ");
    scanf("%d",&n);

    for (i=2;i<=n/2;i=i+1)
    {
    if (n%i==0)
    {
       printf("The number is not prime");
       count = 1;
       break;
    }
    }
    if (count==0)
    {
        printf("The number is prime");
    }  
    return 0;
}