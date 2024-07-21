#include <stdio.h>
#include <stdlib.h>  // For exit()

#define n 5

void display(int queue[], int front, int rear);

int main() {
    int queue[n], ch = 1, front = 0, rear = 0, i, j = 1;

    printf("Queue using Array");
    printf("\n1. Insertion \n2. Deletion \n3. Display \n4. Exit");

    while (ch != 4) {
        printf("\n\nEnter the Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                if (rear == n) {
                    printf("\nQueue is Full");
                } else {
                    printf("\nEnter number %d: ", j++);
                    scanf("%d", &queue[rear++]);
                }
                break;

            case 2:
                if (front == rear) {
                    printf("\nQueue is empty");
                } else {
                    printf("\nDeleted Element is %d", queue[front++]);
                }
                break;

            case 3:
                printf("\nQueue Elements are:\n");
                display(queue, front, rear);
                break;

            case 4:
                printf("\nExiting from program\n");
                exit(0);

            default:
                printf("Wrong Choice! Please see the options.");
        }
    }

    return 0;
}

void display(int queue[], int front, int rear) {
    if (front == rear) {
        printf("\nQueue is Empty\n");
    } else {
        for (int i = front; i < rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

