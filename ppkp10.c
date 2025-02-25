#include<stdio.h>
int main (){
    int a[2]={1,2},b[2]={3,4},c[4],i,j;
    for (i=0;i<2;i++)
    {
        c[i]=a[i];
    }
    for (j=0,i=2;j<2 && i<4;j++,i++)
    {
        c[i]=b[j];
    }
    for (i=0;i<4;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}