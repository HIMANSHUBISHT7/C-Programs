#include<stdio.h>
// prime nu between 1 to 100.
int main(){

    int i,n,count;

    for (n=1;n<=100;n=n+1){
    count=0;

    for (i=2;i<=n/2;i=i+1)
    {
    if (n%i==0)
    {
        count=count+1;
        break;
    }
    }
    if (count==0 && n!=1)
    {
        printf("%d\n",n);
    }
    }
    return 0;
}