// program for fibonacci serier by recursion.
#include<stdio.h>
int fibonacci(int i);
int main (){
    int i,n;
    printf("enter the length of series : ");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        printf("%d\n",fibonacci(i));
    }
    return 0;
}
int fibonacci(int i){
        if (i==0)
        return 0;
        else if (i==1)
        return 1;
        else
        return fibonacci(i-1)+fibonacci(i-2);
    }