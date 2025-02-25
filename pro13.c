#include<stdio.h>
int main (){
    int day ;
    printf("enter day(1-7) : ");
    scanf("%d",& day);
    switch(day)
    {
        case 1 : printf("monday");
        break;
        case 2 : printf("tuesday");
        break;
         case 3 : printf("monday");
         break;
        case 4 : printf("tuesday");
        break;
         case 5 : printf("monday");
         break;
        case 6 : printf("tuesday");
        break;
         case 7 : printf("monday");
         break;
         default : printf("not a valid day");
    } 
    
    return 0;
}