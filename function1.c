#include<stdio.h>

int sum (int a,int b);

int main (){
    int a,b;
    printf ("enter a : ");
    scanf("%d",& a);
    printf("enter b : ");
    scanf("%d",& b);

    int s = sum(a,b);
    printf ("sum : %d",s);
    return 0;
}

int sum(int x,int y){
    return x+y;
}