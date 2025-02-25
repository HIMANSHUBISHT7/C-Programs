#include<stdio.h>
// print series 7,10,15,22,31
int main (){
    int i=1,c=6;
    while(i<=9)
    {
        c=c+i;
        printf("\n%d",c);
        i=i+2;
    }
    return 0;
}