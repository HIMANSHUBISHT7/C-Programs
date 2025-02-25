#include<stdio.h>
int main (){
    int a[100]={0},p,e,i,n;
    printf("enter length of array:\n");
    scanf("%d",&n);
    printf("enter array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the position where you want to insert an element:\n");
    scanf("%d",&p);
    printf("enter the element:\n");
    scanf("%d",&e);
    // process to insert an element.
    for(i=n;i>=p;i--){
        a[i]=a[i-1];
    }
    a[p]=e;
    for(i=0;i<n+1;i++){
        printf("%d",a[i]);
    }
    return 0;
}