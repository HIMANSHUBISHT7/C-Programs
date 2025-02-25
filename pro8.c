#include<stdio.h>
// table of a given number.
int main (){
    int n;
    printf("enter number : ");
    scanf("%d",& n);
    printf("table is : \n");
    int m = 1;
    for(int i=1;i<=10;i++)
    {
        m = n*i;
        printf("%d\n",m);
    }
    return 0;
}