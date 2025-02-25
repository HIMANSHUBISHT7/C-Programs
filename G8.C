#include<stdio.h>
// Volume of sphere.
int main() {
    float radius;
    
    printf("Enter radius : ");
    scanf("%f",&radius);

    printf("volume of sphere is : %.2f",(4*radius*radius*radius*3.14)/3);

    return 0;  
} 