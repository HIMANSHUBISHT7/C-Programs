// Write a program to find if a character entered by user is upper case or not.
#include<stdio.h> 
int main ()
{
    char ch;
    printf("Enter character : ");
    scanf("%c",& ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("upper case");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("lower case");
    }
    else
    {
        printf("not a english latter"); 
    }
    return 0;
}