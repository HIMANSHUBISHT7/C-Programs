#include<stdio.h>
int main (){
    int sum =0;
    int a[2][2];
    printf("enter array elements : \n");
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
        scanf("%d",&a[i][j]);
        }
        
    }
    printf("matrix of the element : \n");
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
            {
            sum = sum + a[i][j];
            }
    }
            printf("sum of array elements : %d",sum);
    return 0;
}