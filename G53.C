#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(struct node *);
void display(struct node *);

struct node *deleteStart(struct node *);
struct node *deleteMiddle(struct node *);
struct node *deleteLast(struct node *);

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    while (1)
    {
        int choice;
       
        printf("1. Creation Linked List\n");
        printf("2. Display Linked list\n");
        printf("3. Delete the first node in Linked List\n");
        printf("4. Delete a node from the middle in Linked List\n");
        printf("5. Delete a node from the  Linked List\n");
        printf("6. Exit\n");
       
        printf("Enter your choice (1-6) :");

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
            head = deleteStart(head);
            break;

        case 4:
            head = deleteMiddle(head);
            break;

        case 5:
            head = deleteLast(head);
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


struct node *deleteStart(struct node *head)
{
    struct node *c;
    c = head->next;
    head = NULL;
    head = c;
    return head;
}

struct node *deleteMiddle(struct node *head)
{
    struct node *p, *c;
    c = head;
    int num;
    printf("enter the element to delete :");
    scanf("%d", &num);
    while (c != NULL && c->data != num)
    {
        p = c;
        c = c->next;
    }
    p->next = c->next;
    c = NULL;
    return head;
}
struct node *deleteLast(struct node *head)
{
    struct node *p, *c;
    c = head;
    while (c->next != NULL)
    {
        p = c;
        c = c->next;
    }
    p->next = NULL;
    free(c);
    return head;
}