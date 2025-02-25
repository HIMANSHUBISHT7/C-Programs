#include<stdio.h>
int main ()
{
    int day;
    printf("enter day(1-7) : ");
    scanf("%d",& day);

    switch (day)
    {
        case 1 : printf("sunday");
                break;
        case 2 : printf("monday");
                break;
        case 3 : printf("tueday");
                break;                
        case 4 : printf("wednesday");
                break;
        case 5 : printf("thrusday");
                break;
        case 6 : printf("friday");
                break; 
        case 7 : printf("saturday");
                break;               
        default : printf("not a valid day");
    }
    return 0;
}