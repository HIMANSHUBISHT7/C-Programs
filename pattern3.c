#include<stdio.h>
int main(){
    int n;
      if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exiting the program with an error code
    }
    int m,i,j; 
    m=1;
    for (i=0; i<n; i++){
        for (j=0;j<=i;j++){
            printf("%d",m);
            m=m+2;
        }printf("\n");
        
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n;

//     // Prompting user to input the value of n
//     printf("Enter the number of rows: ");
    
//     // Checking if the input is valid
//     if (scanf("%d", &n) != 1 || n <= 0) {
//         printf("Invalid input. Please enter a positive integer.\n");
//         return 1; // Exiting the program with an error code
//     }

//     int m = 1;
    
//     // Loop to print the pattern
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%d ", m);
//             m = m + 2;
//         }
//         printf("\n");
//     }

//     return 0;
// }
