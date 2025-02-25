#include<stdio.h>
int change(int a, int b);
int main(){
    int a=10;
    int b=20;
    printf("print a and b before calling the functin :%d,%d\n",a,b);
    change(a,b);
    printf("print a and b after calling the function :%d,%d",a,b);
    return 0;
}
int change(int a,int b){
    int p;
    p = a;
    a = b;
    b = p;
    printf("print a and b after swaping inside the function :%d,%d\n",a,b);
    return 0;
}