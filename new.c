#include <stdio.h>
int main(){
    int a[5]={250,655,300,900,50};
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        int m = a[i]/10;
        int n=a[i]-m;
        sum = sum + n;
    }
    printf("%d",sum);
    
     return 0;
}
// #include <stdio.h>

// int main() {
//     int a[5] = {250, 655, 300, 900, 50};
//     int sum = 0;

//     for (int i = 0; i < 5; i++) {
//         int m = a[i] / 10;
//         int n = a[i] - m;
//         sum = sum + n;
//     }

//     printf("%d", sum);

//     return 0;
// }
