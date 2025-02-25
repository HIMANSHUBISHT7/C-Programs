#include<stdio.h>
int main (){
    float a,b,sum=0,subtract=0,multiply=0,divide=0;
    char ch;

    printf("enter operator(+,-,/,*) : ");
    scanf("%c", &ch);

    printf("enter a : ");
    scanf("%f",& a);
    
    printf("enter b : ");
    scanf("%f",& b);

    switch (ch)
    {
        case '+' : printf("sum : %f",sum = a+b);
                   break;
        case '-' : printf("subtract : %f",subtract = a-b);
                   break;
        case '/' : printf("divide : %f",divide = a/b);
                   break;
        case '*' : printf("multiply : %f",multiply = a*b);
                   break;

        default : printf("invalid operator");
    } 
    return 0;
}