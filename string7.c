// Salting in password.
#include<stdio.h>
#include<string.h>
void Salting (char password[]);
int main () {
    char password[100];
    scanf("%s",& password);
    Salting(password);
    return 0;
}
void Salting (char password[]){
    char newPass[200];
    char salt[]="123";
    strcpy(newPass,password); // newPass = password;
    strcat(newPass,salt); // newPass = newPass + salt;
    puts(newPass);
}



// #include<stdio.h>
// #include<string.h>

// void Salting(char password[]);

// int main() {
//     char password[100];
//     fgets(password, 100, stdin);
//     puts(password);
//     Salting(password);
//     return 0;
// }

// void Salting(char password[]) {
//     char newPass[200]; // Password length + salt length + null terminator
//     char salt[] = "123";
//     strcpy(newPass, password); // newPass = password;
//     strcat(newPass, salt);     // newPass = newPass + salt;
//     puts(newPass);
// }
