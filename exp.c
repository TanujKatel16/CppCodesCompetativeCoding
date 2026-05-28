#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Stack {
    int arr[MAX];
    int top;
};

void push(struct Stack *s, int value);
int pop(struct Stack *s);
int peek(struct Stack *s);
int isEmpty(struct Stack *s);
int isFull(struct Stack *s);
void display(struct Stack *s);

int main() {
    struct Stack s;
    s.top = -1;
    int choice, value;

    while (1) {
        printf("\n\n--- Stack Operations ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(&s, value);
            break;
        case 2:
            value = pop(&s);
            if (value != -1)
                printf("Popped value: %d\n", value);
            break;
        case 3:
            value = peek(&s);
            if (value != -1)
                printf("Top value: %d\n", value);
            break;
        case 4:
            display(&s);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

int isFull(struct Stack *s) {
    return s->top == MAX - 1;
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        s->arr[++(s->top)] = value;
        printf("%d pushed onto stack.\n", value);
    }
}

int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Nothing to pop.\n");
        return -1;
    } else {
        return s->arr[(s->top)--];
    }
}

int peek(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return s->arr[s->top];
    }
}

void display(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements (top to bottom): ");
        for (int i = s->top; i >= 0; i--) {
            printf("%d ", s->arr[i]);
        }
        printf("\n");
    }
}
