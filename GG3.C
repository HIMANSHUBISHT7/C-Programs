#include<stdio.h>
// telephone bill.
int main (){
  char a[100];
  float b,total;
  int n;
  printf("enter your employee name : ");
  scanf("%s",&a);
  printf("enter basic salary(12000,15000,17000,20000,25000 or more) : ");
  scanf("%f",&b);
  printf("did you take HRA : n(1) for no & n(2) for yes : \n");
  printf("enter n : ");
  scanf("%d",&n);

  if(n==1){
    if(b==12000){
        total=b+(4/100*b)+(5/100*b)+(9.5/100*b)-(12/100*b);
        printf("%f",total);
    }
    else if(b==15000){
        total=b+(5/100*b)+(6/100*b)+(10/100*b)-(12/100*b);
        printf("%f",total);
    }
    else if(b==17000){
        total=b+(6/100*b)+(7/100*b)+(11/100*b)-(12/100*b);
        printf("%f",total);
    }
    else if(b==20000){
        total=b+(8/100*b)+(9/100*b)+(12/100*b)-(12/100*b);
        printf("%f",total);
    }
    else if(b==25000){
        total=b+(10/100*b)+(10/100*b)+(13/100*b)-(12/100*b);
        printf("%f",total);
    }
    else if(b>25000){
        total=b+(15/100*b)+(15/100*b)+(20/100*b)-(12/100*b);
        printf("%f",total);
    }
  }
  else if(n==2)
  {
     if(b==12000){
        total=b+(4/100*b)+(5/100*b)-(9.5/100*b)-(12/100*b);
        printf("%f",total);
    }
    else if(b==15000){
        total=b+(5/100*b)+(6/100*b)-(10/100*b)-(12/100*b);
        printf("%f",total);
    }
    else if(b==17000){
        total=b+(6/100*b)+(7/100*b)-(11/100*b)-(12/100*b);
        printf("%f",total);
    }
    else if(b==20000){
        total=b+(8/100*b)+(9/100*b)-(12/100*b)-(12/100*b);
        printf("%f",total);
    }
    else if(b==25000){
        total=b+(10/100*b)+(10/100*b)-(13/100*b)-(12/100*b);
        printf("%f",total);
    }
    else if(b>25000){
        total=b+(15/100*b)+(15/100*b)-(20/100*b)-(12/100*b);
        printf("%f",total);
    }
  }
  else
  printf("n is not valid");
    return 0;
}