#include<stdio.h>
int main (){
int a[2][2]={{1,2},{3,4}},i,j,sum = 0;

for (i=0;i<2;i++)
{
    for (j=0;j<2;j++)
    {
        if (i==j)
        {
            sum = sum + a[i][j];
        }
    }
}
printf("sum = %d",sum);
return 0;
}
