#include<stdio.h>
// use of conditional operator.
int main (){
    int n ;
    printf("enter number : ");
    scanf("%d",& n);
    if (n>0)
    {
        printf("positive integer");
    }
    else{
        printf("negative integer");
    }
    return 0;
}