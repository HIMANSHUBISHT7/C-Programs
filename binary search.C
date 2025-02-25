#include<stdio.h>
// binary search.
int main (){
    int n,i,a[100],d,r,l,mid;
    printf("enter length of array:\n");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element which want to be found:\n");
    scanf("%d",&d);
    l=0;
    r=n-1;
    while(l<=r){
    mid=(l+r)/2;
    if(d==a[mid]){
        printf("%d found at index %d",d,mid);
        break;
    }
    else if(d<a[mid]){
        r=mid-1;
    }
    else if(d>a[mid]){
        l=mid+1;
    }
    }
    if(l>r){
        printf("element not found");
    }
    return 0;
}