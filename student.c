#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    // Declare a variable of type struct Student 
    //once we create a structure for some inputs of different data types ..... so we can make the variables of this structur;
    
    // like the below one;
    // where we created a structure name 'student' above and then we make a 'student1' varible to store the dtails of the student;
    struct Student student1;
    struct Student student2;

    // Accessing and setting the members of the structure
    printf("Enter name: ");
    fgets(student1.name, 50, stdin); // Reads input into student1.name

    printf("Enter age: ");
    scanf("%d", &student1.age); // Reads input into student1.age

    printf("Enter GPA: ");
    scanf("%f", &student1.gpa); // Reads input into student1.gpa

    // Clear input buffer to prevent issues with fgets
    getchar();

    printf("Enter name: ");
    fgets(student2.name, 50, stdin);

    printf("Enter age: ");
    scanf("%d", &student2.age);

    printf("Enter GPA: ");
    scanf("%f", &student2.gpa);

    // Accessing the members of the structure
    printf("\nStudent Details:\n");
    printf("Name: %s", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);

    printf("\nStudent Details:\n");
    printf("Name: %s", student2.name);
    printf("Age: %d\n", student2.age);
    printf("GPA: %.2f\n", student2.gpa);

    return 0;
}
