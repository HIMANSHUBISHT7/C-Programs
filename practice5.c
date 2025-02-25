#include<stdio.h>
#include<math.h>
int main (){
    int n,m,p;
    printf("enter any binary number : ");
    scanf("%d",& n);
    // printf("number of binary digits : ");
    // scanf("%d",& m);
    int h=0;
    int k=0;
    for (int i = 0;i<=m;i++)
    {
        p=n%10;
        k=p*pow(2,i)+h;
        k=h;
        n=n/10;
    }
    printf("%d",k);
    return 0;
}