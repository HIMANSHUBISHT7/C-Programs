#include<stdio.h>
#include<math.h>
int multiply (int n);

int main (){
    int n;
    printf("enter number of natural numbers (n) : ");
    scanf("%d",& n);
    printf("factorial of 'n' natural numbers  : %d",multiply (n));
    return 0;
}

int multiply (int n){
    
    if (n==1)
    {
        return 1;
    }

    int multiply1 = multiply(n-1);
    int multiplyn = multiply1*n;
    return multiplyn;
}
