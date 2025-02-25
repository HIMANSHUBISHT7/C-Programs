#include<stdio.h>
int main (){
    int sum=0;
    printf("first 10 natural numbers are : \n");
    for (int i=1;i<=10;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("and their sum : %d",sum);
    return 0;
}