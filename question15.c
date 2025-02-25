#include<stdio.h>
// print the sum of first n natural numbers.
int main () {
    int n, c;
    printf("enter condition : ");
    scanf("%d",&c);

    printf("enter number : ");
    scanf("%d",&n);

    int sum = 0;
    switch (c) {
    case 1 :  
    for (int i=1;i<=n;i++)
     {
         sum =sum + i;
         printf("%d\n",sum);
     }
       break; 
// print in reverse.
    case 2 :
    for (int i=n;i>=1;i--)
    {
        sum = sum +i;
        printf("%d\n",sum);
    }
    break;

    default : printf("invalid condition");
    }
    return 0;
}