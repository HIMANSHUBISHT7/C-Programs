#include<stdio.h>
int main (){
    int i,n,k;
    printf("enter the value of (n) : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    k=0;
    for (int j = 2;j<=i/2;j++)
    {
        if (i%j==0)
        k=k+1;
    }   
    if (k==0 && i!=1)
    printf("%d\n",i);
    }
    return 0;
}