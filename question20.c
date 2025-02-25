// print all odd numbers from 5 to 50.
#include<stdio.h>
int main (){
    int n;
    for (n=5;n<=50;n++)
    {
        if (n%2==0)
        {
            continue;
        }
      printf("%d\n",n);
    }
    return 0;
}