// using function of find out the area of circle. 
#include<stdio.h>
void area (float radius);

int main (){
    float radius ;
    // printf("enter radius : ");
    // scanf("%f",& radius );
    radius = 7;
    area(radius);
    return 0;
}
void area (float radius){
    float area = 3.14*radius*radius;
    printf("value becomes : %f",area);
    }
    