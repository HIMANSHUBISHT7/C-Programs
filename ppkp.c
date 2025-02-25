// call by value.
#include<stdio.h>
int number(int n);
int main (){
    int n=20;
    printf("print n before calling function : %d\n",n);
    number(n);
    printf ("print n after calling the function : %d",n);
    return 0;
}
int number(int n){
    printf("print n inside the function : %d\n",n);
    n=n+10;
    printf("print new value of n : %d\n",n);
return 0;
}