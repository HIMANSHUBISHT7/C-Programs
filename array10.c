#include<stdio.h>
int main (){
    int a[10];
    printf("enter array elements : \n");
    for(int i = 0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("result\n");
    for (int i=9; i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
 
