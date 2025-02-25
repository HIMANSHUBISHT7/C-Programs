#include <stdio.h>

int main() {
    int a[5], x;
    printf("Enter 5 integers for array a: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("enter x: ");
    scanf("%d",&x);
    for (int i = 0; i < 5; i++) {
        int f=0;
        int sum;
        for (int j = i + 1; j < 5; j++) { 
            sum = a[i]+a[j];
            printf(" sum is %d\n",sum);
            if(sum==x){
                printf("element found");
                f++;
                break;
            }
        }
        if (f==1){
            break;
        }
        if(f!=1){
            printf("element not found");
            break;
        }
    }
    return 0;
}