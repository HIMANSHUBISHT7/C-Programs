// no argumment but return value.
#include<stdio.h>
int sum();
int main (){
    printf("sum = %d",sum());
    return 0;
}
int sum (){
    int a,b;
    a=9;
    b=8;
    int sum = a+b;
    return sum;
}