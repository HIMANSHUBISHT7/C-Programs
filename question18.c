// keep taking number as input from user until usre enters a number which is multiple of 7.
#include<stdio.h>
int main (){
    int n;
    while (1)
    {
        printf("enter number : ");
        scanf("%d",&n);
        printf("%d\n",n);
        if (n%7==0)
        {
            break;
        }
    }
    printf("thank you");
    return 0;
}