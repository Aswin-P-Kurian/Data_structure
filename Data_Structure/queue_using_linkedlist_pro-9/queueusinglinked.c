#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void enqueue(struct Node** front, struct Node** rear, int data) {
    struct Node* newNode = createNode(data);
    if (*rear == NULL) {
        *front = *rear = newNode;
        printf("Enqueued %d to the queue\n", data);
        return;
    }
    (*rear)->next = newNode;
    *rear = newNode;
    printf("Enqueued %d to the queue\n", data);
}

int dequeue(struct Node** front, struct Node** rear) {
    if (*front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    int data = (*front)->data;
    struct Node* temp = *front;
    *front = (*front)->next;
    if (*front == NULL) {
        *rear = NULL;
    }
    free(temp);
    printf("Dequeued %d from the queue\n", data);
    return data;
}

void display(struct Node* front) {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct Node* temp = front;
    printf("Queue elements are:\n");
    while (temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void search(struct Node* front, int value) {
    struct Node* current = front;
    int position = 0;
    while (current != NULL) {
        if (current->data == value) {
            printf("Element %d found at position %d in the queue\n", value, position);
            return;
        }
        current = current->next;
        position++;
    }
    printf("Element %d not found in the queue\n", value);
}

int main() {
    struct Node* front = NULL;
    struct Node* rear = NULL;
    int choice, value;

    while (1) {
        printf("\nMenu:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Search\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be enqueued: ");
                scanf("%d", &value);
                enqueue(&front, &rear, value);
                break;
            case 2:
                dequeue(&front, &rear);
                break;
            case 3:
                display(front);
                break;
            case 4:
                printf("Enter the value to search: ");
                scanf("%d", &value);
                search(front, value);
                break;
            case 5:
                printf("Exiting...");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}

