// print reverse of the table for a number 'n'.
#include<stdio.h>
int main ()
{
    int n;
    int multiply=1;
    printf("enter number (n): ");
    scanf("%d",&n);

    for(int i=10;i>=1;i--)
    {
        multiply=n*i;
        printf("%d\n",multiply);
    }
    return 0;
} 