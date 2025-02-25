// sum by pointer.
#include<stdio.h>
int main (){
    int a,b,sum=0;
    int* ap;
    int* bp;
    printf("enter two numbers a and b : \n");
    scanf("%d%d",&a,&b);
    ap=&a;
    bp=&b;
    sum = (*ap)+(*bp);
    printf("sum : %d",sum);
    return 0;
}