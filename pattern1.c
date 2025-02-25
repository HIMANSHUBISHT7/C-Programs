#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int l=n+n-1;
  	for(int i=0;i<l;i++){
          for(int j=0;j<l;j++){
            int m;
            m=i<j ? i:j;
            m=m<l-i ? m:l-i-1;
            m=m<l-j-1 ? m:l-j-1;
            printf("%d\t",n-m); 
             
          }printf("\n");
          
      }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for (int j=1;j<=i+1;j++){
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}