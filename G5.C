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

struct node *deleteStart(struct node *);
struct node *deleteMiddle(struct node *);
struct node *deleteLast(struct node *);


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
        printf("3. Insert a node at head\n");
        printf("4. Insert a node at Middle in Linked List\n");
        printf("5. Insert a node at end in the Linked List\n");
        printf("6. Delete the first node in Linked List\n");
        printf("7. Delete a node from the middle in Linked List\n");
        printf("8. Delete a node from the  Linked List\n");
        printf("9. Split the created Linked List\n");
        printf("10. Exit\n");
       
        printf("Enter your choice (1-10) :");

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
            head = deleteStart(head);
            break;

        case 7:
            head = deleteMiddle(head);
            break;

        case 8:
            head = deleteLast(head);
            break;
        case 9:
            struct node *t1, *t2;
            t1 = (struct node *)malloc(sizeof(struct node));
            t2 = (struct node *)malloc(sizeof(struct node));
            split(head, t1, t2);
            printf("First Part of Linked List :\n");
            display(t1);
            printf("Second Part of Linked List :\n");
            display(t2);
            break;
        case 10:
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