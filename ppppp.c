#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int front = -1, rear = -1;
int queue[MAX_SIZE];

void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue Overflow!\n");
        exit(1);
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = item;
    }
}

int dequeue() {
    int item;
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
        exit(1);
    } else {
        item = queue[front];
        front++;
        return item;
    }
}

void display() {
    int i;
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements are: ");
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, item;

    while (1) {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the item to be enqueued: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                item = dequeue();
                printf("Dequeued item: %d\n", item);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
                break;
        }
    }

    return 0;
}