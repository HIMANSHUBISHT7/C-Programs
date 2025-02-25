#include<stdio.h>
// area and circumference of circle.
int main (){
    int radius ;
    float circumference=0,area=0;
    printf("enter radius : ");
    scanf("%d",& radius );

    printf("circumference of circle : %.2f\n", circumference = 2*(3.14)*radius);
    printf("aera of circle : %.2f\n", area = (3.14)*(radius*radius));
    return 0;
}