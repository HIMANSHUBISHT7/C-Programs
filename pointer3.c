#include<stdio.h>
int main (){
    // value at address.
    int age = 22;
    int *ptr = &age;
    printf("%d\n",age );
    printf("%d\n",*ptr);
    printf("%d",*(&age));

    return 0;
}