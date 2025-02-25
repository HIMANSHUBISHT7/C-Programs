#include<stdio.h>
int main (){
    int age = 24;
    int *ptr = & age;
    int **pptr = &ptr; // **pptr means pointer to pointer.
    
    printf("%d", **pptr);
    return 0;
}