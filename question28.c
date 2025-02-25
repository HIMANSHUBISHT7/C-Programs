#include<stdio.h>

void namaste ();
void bonjour ();

int main (){
printf("enter i for indian and f for french : ");
char ch;
scanf("%c",&ch);
if (ch == 'i')
{
    namaste();
} 
else if (ch == 'f') 
{
    bonjour();
}
else {
    printf("not a valid letter");
}
    return 0;
}

void namaste (){
    printf("namaste");
}
void bonjour (){
    printf("bonjour");
}