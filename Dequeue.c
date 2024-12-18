#include <stdio.h>
#define MAXSIZE 4

int queue[MAXSIZE];
int front = -1, rear = -1;

// Function to add an element to the queue
void enqueue(int n) {
    if (rear == MAXSIZE - 1) {
        printf("Overflow\n");
        return;
    }
    if (front == -1) front = 0; // First element
    queue[++rear] = n;
    printf("%d added to queue\n", n);
}

// Function to remove an element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Underflow\n");
        return;
    }
    printf("%d removed from queue\n", queue[front++]);
    if (front > rear) front = rear = -1; // Reset when queue is empty
}

// Function to display the elements of the queue
void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++)
        printf("%d\n", queue[i]);
}

int main() {
    int choice, value;
    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
