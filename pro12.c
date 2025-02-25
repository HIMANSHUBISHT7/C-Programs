#include<stdio.h>
// check wether the number is odd or even.
int main (){
    int n;
    printf("enter a number : ");
    scanf("%d", & n);
    if (n%2==0)
    {
        printf("even");
    }
    else {
        printf("odd");
    }
    return 0;
}