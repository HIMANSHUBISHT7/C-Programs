#include<stdio.h>
// print multiple or table of a number input by the user.  
int main (){
    int n,multiple;
    printf("enter number : ");
    scanf("%d",&n);
    for (int i=1;i<=10;i++)
    {
        multiple=n*i;
        printf("%d\n",multiple);
    }
    return 0;
}