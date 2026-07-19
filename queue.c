#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int val) {
    if (rear >= MAX - 1)
        printf("Queue overflow\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = val;
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
        return -1;
    }
    return queue[front++];
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    int choice, val;
    do {
        printf("1. Enqueue  2. Dequeue  3. Display  4. Exit: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2:
                val = dequeue();
                if (val != -1) printf("Dequeued: %d\n", val);
                break;
            case 3:
                display();
                break;
        }
    } while (choice != 4);
    return 0;
}