// divisibility of 2.

//divisible means output is true (1).
//not divisible means output is false (0).

#include<stdio.h>
int main(){
    int b;
    
    printf("Enter b : ");
    scanf("%d",&b);
    
    printf("%d",b % 2==0);

    return 0;
}