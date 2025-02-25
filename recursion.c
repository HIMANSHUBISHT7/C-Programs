#include<stdio.h>
int hw(int count );

int main (){
    hw(5);
    return 0;;
}

int hw(int count){
if (count ==0)
{
    return 0;
}
printf("hello world\n");
hw(count - 1);

}



