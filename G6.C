#include <stdio.h>
#define MAX 20   //Macro
int Stack_arr[MAX];
int top;
// Push function
void Push()
{
    int x;
    if (top > MAX - 1)
    {
        printf("\nStack Overflow\n");
        return;
    }
    else
    {
        printf("\nEnter the element you wanna push:\n");
        scanf("%d", &x);
        ++top;
        Stack_arr[top] = x;
    }
}
// Pop Function
void Pop()
{
    if (top < 0)
    {
        printf("\nStack Underflow\n");
        return;
    }
    else
    {
        top--;
    }
}
void Print()
{ // Printing Function
    for (int i = 0; i <= top; i++)
    {
        printf("%d", Stack_arr[i]);
        printf("\n");
    }
}

int main()
{
    while (1)
    {
        top = -1;
        int choice;
        printf("Enter your choice for the following:\n 1. Push operation\n 2. Pop Operation\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Push();
            Print();
            break;
        case 2:
            Pop();
            Print();
            break;

        default:
            printf("\nInvalid Input\n");
            break;
        }
    }
    return 0;
}
