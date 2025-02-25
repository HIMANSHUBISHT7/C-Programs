#include<stdio.h>
int fac(int n);
int main (){
    int n;
    printf ("enter the value of n :");
    scanf("%d",&n);
    printf("factorinl of n numbers is : %d",fac(n));
    return 0;
}
int fac(int n){
    if (n==1)
    return 1;
    int n1 = fac(n-1);
    int n2 = n*n1;
    return n2;
}