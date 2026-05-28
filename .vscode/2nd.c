#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* insertEnd(struct node *head, int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) return newNode;

    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

struct node* insertBeginning(struct node *head, int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

struct node* deleteNode(struct node *head, int value) {
    if (head == NULL) return head;

    if (head->data == value) {
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct node *curr = head;
    while (curr->next != NULL && curr->next->data != value)
        curr = curr->next;

    if (curr->next != NULL) {
        struct node *temp = curr->next;
        curr->next = curr->next->next;
        free(temp);
    }

    return head;
}

void display(struct node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    struct node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertBeginning(head, 5);
    head = deleteNode(head, 20);
    display(head);
    return 0;
}
