#include<stdio.h>
// print reverse of the nummber.
int main (){
    int n,p;
    printf("enter number : ");
    scanf("%d",& n);
    int h=0;
    while(n!=0)
    {
        p=n%10;
        h=(h*10)+p;
        n=n/10;
    }
    printf("%d\n",h);
    return 0;
}