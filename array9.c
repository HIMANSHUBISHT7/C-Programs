#include<stdio.h>
int main ()
{
    int a[3];
    printf ("arry element : \n");
    for (int i=0;i<3;i++)
        {
            scanf("%d",& a[i]);
        }
    
    for (int i=2;i>=0;i--)
    {
            printf("%d\n",a[i]);
    }
    return 0;
}