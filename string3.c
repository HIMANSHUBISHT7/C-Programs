#include<stdio.h>
int main(){
    char *name;
    fgets(name,100,stdin);
    puts(name);
    name = "prince";
    puts(name);
    return 0;
}