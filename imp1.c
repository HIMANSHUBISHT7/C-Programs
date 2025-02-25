// program for fibonacci series.
#include<stdio.h>
int main (){
    int i,n,first=0,second=1,result;
    printf ("enter the length of series : ");
    scanf ("%d",&n);
    for (i=0 ; i<=n;i++)
    {
        if (i==0||i==1)
        result = i;
        else 
        {
        result = first + second;
        first = second;
        second = result;
        }
        printf("%d\t",result);
    }
    return 0;
}