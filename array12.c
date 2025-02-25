#include<stdio.h>
int main (){
    int a[3],b[3],c[6],i;
    printf("enter 1st array elements :- \n");
    for (int i=0;i<3;i++)
    {
        printf("array %dth element : ",i);
        scanf("%d",& a[i]);
        c[i] = a[i];
    }
    printf("\n");
    printf("enter 2st array elements :- \n");
    for (int j=0, i=3;j<3 && i<6;i++,j++)
    {
        printf("array %dth element : ",j);
        scanf("%d",& b[j]);
        c[i] = b[j];
    }
    printf("\n");
    printf("after merging two array elements the third array array will be :- \n");
    for (int i =0;i<6;i++)
    {
    printf("%d\n",c[i]);
    }

    return 0;
}