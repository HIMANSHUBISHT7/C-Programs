#include<stdio.h>
// print tribonacci series.
int main (){
    int n,t1=0,t2=0,t3=1,t4,i;
    printf("enter n : ");
    scanf("%d",&n);
    printf("%d\n%d",t1,t2,t3);
    for (i=0;i<n;i++)
    {
        t4 = t1+t2+t3;
        printf("\n%d",t4);
        t1=t2;
        t2=t3;
        t3=t4;
    }
    return 0;
}