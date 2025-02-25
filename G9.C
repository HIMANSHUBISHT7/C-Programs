#include<stdio.h>
// Convert rupee into paise.
int main() {
    int r,p;
    
    printf("Enter amount in Rs : ");
    scanf("%d",&r);

    p = r*100;
    printf("In paise : %d",p);

    return 0;  
} 