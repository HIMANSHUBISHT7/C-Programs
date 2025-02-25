#include<stdio.h>
int main (){
    int m = 9;
    int *ptr = &m;
    // adress of pointrs.
    printf("%u\n",&m);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);

    return 0;
}