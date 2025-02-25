#include<stdio.h>
int main(){

    int number;

    printf("Enter number : ");
    scanf("%d",& number);

    number>0 ? printf("positive \n") : printf("negative \n");
    
    return 0;
}