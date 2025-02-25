#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(struct node *);
void display(struct node *);

struct node *insertStart(struct node *);
struct node *insertMiddle(struct node *);
struct node *insertLast(struct node *);

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    while (1)
    {
        int choice;
       
        printf("1. Creation Linked List\n");
        printf("2. Display Linked list\n");
        printf("3. Insert a node at head\n");
        printf("4. Insert a node at Middle in Linked List\n");
        printf("5. Insert a node at end in the Linked List\n");
        printf("6. Exit\n");
       
        printf("Enter your choice (1-5) :");

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
            head = insertStart(head);
            break;

        case 4:
            head = insertMiddle(head);
            break;

        case 5:
            head = insertLast(head);
            break;
        case 6:
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

struct node *insertStart(struct node *head)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d", &n->data);
    n->next = head;
    head = n;
    return head;
}

struct node *insertMiddle(struct node *head)
{
    struct node *n, *c;
    c = head;
    int num;
    printf("enter the element where to insert after :");
    scanf("%d", &num);
    while (c != NULL && c->data != num)
    {
        c = c->next;
    }
    n = (struct node *)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d", &n->data);
    n->next = c->next;
    c->next = n;
    return head;
}
struct node *insertLast(struct node *head)
{
    struct node *n, *c;
    c = head;
    n = (struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d", &n->data);
    n->next = NULL;
    while (c->next != NULL)
    {
        c = c->next;
    }
    c->next = n;
    return head;
}