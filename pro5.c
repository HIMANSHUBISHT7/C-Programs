#include<stdio.h>
// swaping two nubers without using third variable.
int main (){
    int a,b,t;
    printf("enter a and b : \n");
    scanf("%d%d",&a,&b);
    printf("before swaping a and b : \n%d\n%d\n",a,b);
    t=a;// a=a+b;
    a=b;// b=a-b;
    b=t;// a=a-b;
    printf("after swaping a and b : \n%d\n%d",a,b);
    return 0;
}