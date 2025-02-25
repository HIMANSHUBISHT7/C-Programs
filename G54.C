#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(struct node *);
void display(struct node *);

void *split(struct node *, struct node *, struct node *);

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    while (1)
    {
        int choice;
       
        printf("1. Creation Linked List\n");
        printf("2. Display Linked list\n");
        printf("3. Split the created Linked List\n");
        printf("4. Exit\n");
       
        printf("Enter your choice (1-4) :");

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
            struct node *t1, *t2;
            t1 = (struct node *)malloc(sizeof(struct node));
            t2 = (struct node *)malloc(sizeof(struct node));
            split(head, t1, t2);
            printf("First Part of Linked List :\n");
            display(t1);
            printf("Second Part of Linked List :\n");
            display(t2);
            break;
        case 4:
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
void *split(struct node *head, struct node *t1, struct node *t2)
{
    struct node *c, *c1, *c2, *n1, *n2;
    int num;
    c = head;
    c1 = t1;
    c2 = t2;
    printf("enter to element from where to split :");
    scanf("%d", &num);
    c1->data = c->data;
    while (c != NULL && num != c->data)
    {
        c = c->next;
        n1 = (struct node *)malloc(sizeof(struct node));
        c1->next = n1;
        c1 = n1;
        c1->data = c->data;
    }
    c1->next = NULL;

    c = c->next;
    c2->data = c->data;
    while (c->next != NULL)
    {
        c = c->next;
        n2 = (struct node *)malloc(sizeof(struct node));
        c2->next = n2;
        c2 = n2;
        c2->data = c->data;
    }
    c2->next=NULL;
}