#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top >= MAX - 1)
        printf("Stack overflow\n");
    else
        stack[++top] = val;
}

int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

void display() {
    if (top < 0) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    int choice, val;
    do {
        printf("1. Push  2. Pop  3. Display  4. Exit: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                val = pop();
                if (val != -1) printf("Popped: %d\n", val);
                break;
            case 3:
                display();
                break;
        }
    } while (choice != 4);
    return 0;
}