// write a program for palindrome number.
#include<stdio.h>
int main (){
    int n,p;
    printf("Enter n : ");
    scanf("%d",&n);
    int h=0;
    int a=n;
    while(n>0)
    {
        p=n%10;
        h=(h*10)+p;
        n=n/10;
    }
    printf("Reverse of number : %d\n",h);

    if (a==h)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
return 0;
}