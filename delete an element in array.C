#include<stdio.h>
int main (){
    int a[100]={0},p,e,i,n;
    printf("enter length of array:\n");
    scanf("%d",&n);
    printf("enter array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the position where you want to delete an element:\n");
    scanf("%d",&p);
    
    // process to delete an element.
    for(i=p;i<n;i++){
        a[i]=a[i+1];
    }
    
    for(i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
    return 0;
}