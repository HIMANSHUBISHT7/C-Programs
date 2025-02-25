#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(struct node *);
void display(struct node *);

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    while (1)
    {
        int choice;
       
        printf("1. Creation Linked List\n");
        printf("2. Display Linked list\n");
        printf("3. Exit\n");
       
        printf("Enter your choice (1-3) :");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create(head);
            break;
        case 2:
            display(head);
            break;
        case 3:
            exit(1);
            break;
        default:
            printf("invalid input !");
            break;
        }
    }
    return 0;
}
struct node *create(struct node *head)
{
    struct node *c;
    char ch = 'y';
    c = head;
    printf("enter the data:");
    scanf("%d", &c->data);
    printf("Want to add another node (y/n):");
    fflush(stdin);
    scanf("%c", &ch);
    while (ch == 'y')
    {
        struct node *n;
        n = (struct node *)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d", &n->data);
        c->next = n;
        n->next = NULL;
        c = n;
        printf("Want to add another node (y/n):");
        fflush(stdin);
        scanf("%c", &ch);
    }
    return head;
}
void display(struct node *head)
{
    struct node *c;
    c = head;
    int i = 1;
    while (c != NULL)
    {
        printf("data in node %d is %d\n", i++, c->data);
        c = c->next;
    }
}

