#include<stdio.h>
int main ()
{
    int i,j,sr,sc;
    int arr[2][2]={{1,2},{1,4}};
    for (i=0;i<2;i++)
    { sr=0,sc=0; 
        for(j=0;j<2;j++)
        {
            sr= sr + arr[i][j];
            sc= sc + arr[j][i];
        }printf("sr : %d",sr);
        printf("\n");
        printf("sc : %d",sc);
        printf("\n");
    }
}
