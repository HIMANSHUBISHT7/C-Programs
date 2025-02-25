// argument but no return value.
#include<stdio.h>
void sum(int a,int b);
int main (){
    int a=7,b=6;
    sum(a,b);
    return 0;
}
void sum(int a,int b){
    int sum = a+b;
    printf("sum = %d",sum);
}