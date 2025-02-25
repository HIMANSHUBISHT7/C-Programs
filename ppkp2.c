#include<stdio.h>
int address(int* n);
int main (){
    int n = 2;
    printf ("print n before calling the function :%d\n",n);
    address(&n);
    printf("print n after calling the function :%d",n);
    return 0;
}
int address(int* n){
    printf ("print value of n inside the function :%d\n",*n);
    *n=*n+1;
    printf("print new value of n :%d\n",*n);
    return 0;
}