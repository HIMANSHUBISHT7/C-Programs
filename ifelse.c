#include<stdio.h>
int main (){
    int age;
    printf("Enter age : ");
    scanf("%d",&age);

    if(age>=18){
        printf("adult");
    }
    else if(age<18 && age>13){
        printf("not adult");
    }
    else{
        printf("child");
    }

    return 0;
}
