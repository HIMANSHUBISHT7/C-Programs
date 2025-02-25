#include<stdio.h>
//gratest between 3 numbers.
int main()
{
int a,b,c ;

printf("Enter (a) : ");
scanf("%d",&a);

printf("Enter (b) : ");
scanf("%d",&b);

printf("Enter (c) : ");
scanf("%d",&c);

if (a>b && a>c)
printf("%d in gratest",a);

else if (b>a && b>c)
printf("%d is gratest",b);

else 
printf("%d is gratest",c);

return 0;
}