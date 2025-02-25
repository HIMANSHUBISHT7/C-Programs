#include<stdio.h>
int main(){
    char name[1000];
    // gets(name);
    fgets(name,100,stdin);
    puts(name);
    return 0;
}