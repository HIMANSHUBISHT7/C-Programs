#include<stdio.h>
int main (){
    float n,a,p;
    printf("enter weight : ");
    scanf("%d",&n);
    if (n<=100)
    {
        p=(n*1.3)+50;
        printf("%f",p);
    }
    else if (n>100 && n<=200)
    {
        a = n-100;
        p = (a*1.5)+50+(100*1.3);
        printf("%f",p);
    }
    else if (n>200 && n<=300)
    {
        a = n-200;
        p = (a*1.75)+50+(100*1.3)+(100*1.5);
    }
     else if (n>300 && n<=400)
    {
        a = n-300;
        p = (a*2)+50+(100*1.3);
        printf("%f",p);
    }
     else if (n>400 && n<=500)
    {
        a = n-400;
        p = (a*2.25)+50+(100*1.3);
        printf("%f",p);
    }
     else if (n>500)
    {
        a = n-500;
        p = (a*5)+50+(100*1.3);
        printf("%f",p);
    }
    
    return 0;
}