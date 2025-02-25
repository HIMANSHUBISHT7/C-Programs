// find the simple intrest.
#include<stdio.h>
int main (){
    int P,r,t; 
    /*
    P - Initial principal balance.
    r - annual interest rate. 
    t - time (in years). 
    */
   int SI = 0;
   printf("principal : ");
   scanf("%d",& P);
   printf("enter rate of interest : ");
   scanf("%d",& r);
   printf("enter time (in years) : ");
   scanf("%d",& t);

   printf("simple interest : %d", SI = (P*r*t)/100);
    return 0;
}