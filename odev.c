#include<stdio.h>
// odd : even
int main(){
    int n;

    printf("Enter number : ");
    scanf("%d",&n);

    if (n%2==0)
    {
    printf("the number is even");
    }
    else
    {
        printf("the number is odd ");
    }
    return 0;
}