#include<stdio.h>
//print the numbers from 0 to n, if n in given by user.
int main (){
    int n,i=0;
    printf("enter n : ");
    scanf("%d",&n);
    
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}