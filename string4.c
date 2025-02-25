// print string length using for loop.

// #include<stdio.h>
// int stringLength(char arr[]);
// int main(){
//     char name[100];
//     printf("enter name : ");
//     fgets(name,100,stdin);
//     printf("string length is : %d", stringLength(name));
//     return 0;
// }
// int stringLength(char arr[]){
//     int l=0;
//     for(int i=0; arr[i] != '\0' ;i++){
//         l++;
//     }
//     return l-1 ;
// }


// print string length using string liberary function.

#include<stdio.h>
#include<string.h>
int main (){
    int length;
    char vege[100];
    printf("enter vegetable name : ");
    fgets(vege,100,stdin);
    vege[strcspn(vege, "\n")] = '\0'; // remove newline char if present.
    length = strlen(vege);
    printf("length of string is : %d",length);
    return 0;
}
