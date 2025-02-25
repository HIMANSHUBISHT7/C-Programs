#include<stdio.h>
// linear search.
int main (){
    // 1
    // int a[8]={8,1,2,3,5,6,7,4};
    // int n=8,i,flag=0;

    //2
    int n,i,a[100],d,flag=0;
    printf("enter length of array:\n");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element which want to be found:\n");
    scanf("%d",&d);
    for(int i=0;i<n;i++){
        if(a[i]==d){
            printf("%d found at the index %d",d,i);
            flag++;
            break;
        }
    }
    if (flag==0){
        printf("element not found");
    }
    return 0;
}