#include<stdio.h>

void rectangle(float a, float b);
void circle(float radius );
void square(float side );

int main ()
{
    float x,y;
    x = 12;
    y = 12;
    rectangle(x,y); 
    float radius;
    radius = 7;
    circle(radius);
}

void rectangle(float x, float y){
    float area1 = x*y;
    printf("area of rectangle = %f",area1);
}
void circle(float radius){
    float area1 = 3.14*radius*radius;
    printf("area of rectangle = %f",area1);
}
