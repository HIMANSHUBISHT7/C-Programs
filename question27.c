#include<stdio.h>

void hello();
void goodby ();

int main (){
    hello ();
    goodby ();
    return 0;
}

void hello(){
    printf("hello\n");
}
void goodby(){
    printf("good by\n");
}