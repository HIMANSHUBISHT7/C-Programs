#include<stdio.h>
#include<string.h>
int main (){
    char vege1[]="kaddu";
    char vege2[]="baigan";
    printf("%s\n",vege2);
    strcpy(vege2,vege1); // copy the value of vege1 in vege2.
    printf("%s",vege2);
    return 0;
}