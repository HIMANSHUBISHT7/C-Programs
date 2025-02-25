#include<stdio.h> 
int main ()
{
    char ch;
    printf("Enter character : ");
    scanf("%c",& ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='v' || 
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='V')
    {
        printf("vowal");
    }
    else if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("consonents");
    }  
    else 
    {
        printf("not a english letter");
    }

    return 0;
}