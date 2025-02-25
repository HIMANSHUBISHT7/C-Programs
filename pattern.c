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
            if (i<j){
                m=i;
            }
            else{
                m=j;
            }
            if (m<l-i){
                m=m;
            }
            else{
                m=l-i-1;
            }
            if (m<l-j){
                m=m;
            }
            else{
                m=l-j-1;
            }
            
            printf("%d\t",n-m); 
             
          }printf("\n");
          
      }
    return 0;
}


#include <stdio.h>

int main() 
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    int l = n + n - 1;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            int m = (i < j) ? i : j;
            if (m > l - i - 1) 
                m = l - i - 1;
            if (m > l - j - 1) 
                m = l - j - 1;
            
            printf("%d ", n - m); 
        }
        printf("\n");
    }
    return 0;
}

