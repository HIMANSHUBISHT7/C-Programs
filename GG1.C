#include<stdio.h>
// print pyramid.
int main (){
    int i,j,s;
    for(i=5;i>=1;i--)
    {
        for(s=1;s<=i;s++)
        {
            printf(" ");
        }
        for(j=5;j>=i;j--)
        {
            printf(" %d",j);
        }printf("\n");
    }
    return 0;
}