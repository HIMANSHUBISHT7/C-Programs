#include<stdio.h>
void price (float value);

int main (){
    float value ;
    printf("enter value : ");
    scanf("%f",& value );
    price(value);
    return 0;
}
void price (float value ){
    value = value + (0.18 * value );
    printf("value becomes : %f",value);
    }
    