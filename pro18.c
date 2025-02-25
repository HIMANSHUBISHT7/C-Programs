#include<stdio.h>
int main (){
    int n,count;
    printf("enter number : ");
    scanf("%d",& n);
        for (int j=2;j<=n/2;j++)
        {
            if(n%j==0)
            {
                printf("not prime");
                count = 1;
                break;
            } 
        }
        if (count == 0 && n!=0)
        {
            printf("prime");
        }
    return 0;
}