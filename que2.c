#include <stdio.h>

int main() {
    int a[10], x;
    printf("Enter 10 integers for array a: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) { 
            if(a[i]==a[j]){
                printf("%d",a[i]);
            }
        }
    }
    return 0;
}
                             