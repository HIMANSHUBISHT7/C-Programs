#include<stdio.h>
// check wether the number is palindrome or not.
int main (){
    int n,p;
    printf("enter number : ");
    scanf("%d",& n);
    int h=0;
    int a = n;

    while(n!=0)
    {
        p=n%10;
        h=(h*10)+p;
        n=n/10;
    }
    printf("reverse of number : %d\n", h);

    if (a==h)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome number");
    }
    return 0;
}