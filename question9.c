/*
Write program to check a stusent passed or failed 
marks > 30 is pass  :  marks <= 30 is fail.
*/
#include<stdio.h>
int main ()
{
    int marks;
    printf("Enter marks(1-100) : ");
    scanf("%d", & marks);

    if (marks >= 0 && marks <= 30 )
    {
        printf("fail");
    }
    else if (marks > 30 && marks <= 100)
    {
        printf("pass");
    }
    else 
    {
        printf("invalid marks");
    }
    return 0;
}