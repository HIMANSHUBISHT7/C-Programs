#include<stdio.h>
// grater among three numbers.
int main (){
int a,b,c;
printf("enter three numbers (a,b,c): \n");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
{
printf("'a' is gratest");
}
if (b>a && b>c)
{
    printf("'b' is gratest");
}
if (c>a && c>b)
{
printf("'c' is gratest");
}
    return 0;
}