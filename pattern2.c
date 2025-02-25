// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             printf("*");
//         }printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i=0;i<n;i++){
//         for (int j=0;j<i;j++){
//             printf("*");
//         }printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i=0;i<n;i++){
//         for (int j=n;j>i;j--){
//             printf("*");
//         }printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i=0;i<n;i++){
//         for (int j=n;j>i;j--){
//             printf("%d",j);
//         }printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i=0;i<n;i++){
//         for (int j=1;j<=i+1;j++){
//             printf("%d",j);
//         }printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//       if (scanf("%d", &n) != 1 || n <= 0) {
//         printf("Invalid input. Please enter a positive integer.\n");
//         return 1; // Exiting the program with an error code
//     }
//     int m,i,j; 
//     m=1;
//     for (i=0; i<n; i++){
//         for (j=0;j<=i;j++){
//             printf("%d\t",m);
//             m=m+2;
//         }printf("\n");
//     }printf("\n");
//     for (i=0; i<n; i++){
//         for (j=n;j>i;j--){
//             printf("%d\t",m);
//             m=m-2;
//         }printf("\n");
//      }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//       if (scanf("%d", &n) != 1 || n <= 0) {
//         printf("Invalid input. Please enter a positive integer.\n");
//         return 1; // Exiting the program with an error code
//     }
//     int m,i,j; 
//     m=29;
//     for (i=0; i<n; i++){
//         for (j=n;j>i;j--){
//             printf("%d\t",m);
//             m=m-2;
//         }printf("\n");
        
//     }
//     return 0;
// }


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){

        }
    }
    return 0;
}