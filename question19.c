// print all number from 1 to 10 expect for 6.
#include<stdio.h>
int main (){
    int n;
    for (n=1;n<=10;n++)
    {
        if (n==6)
        {
            continue;
        }
      printf("%d\n",n);
    }
    return 0;
}