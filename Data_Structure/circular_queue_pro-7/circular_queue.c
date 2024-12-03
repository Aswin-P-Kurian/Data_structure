#include <stdio.h>
int queue[50];  
int front = -1, rear = -1;
int max;  
void enqueue() {
    int element;
    if ((rear + 1) % max == front) {  
        printf("Queue overflow\n");
        return;
    }
    printf("Enter the element to enqueue: ");
    scanf("%d", &element);

    if (front == -1)  
        front = 0;
    
    rear = (rear + 1) % max;  
    queue[rear] = element;
    printf("The element %d is enqued.\n",element);
}

void dequeue() {
    if (front == -1) {  
        printf("Queue underflow\n");
        return;
    }
    printf("The element %d is dequed.\n", queue[front]);
    
    if (front == rear) { 
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % max; 
    }
}


void peek() {
    if (front == -1) {  
        printf("Queue is empty\n");
    } else {
        printf("Front element: %d\n", queue[front]);
        printf("Rear element: %d\n", queue[rear]);
    }
}


void display() {
    if (front == -1) {  
        printf("Queue is empty\n");
        return;
    }
    
    printf("Queue elements:\n");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % max;  
    }
    printf("\n");
}

int main() {
    printf("Enter the size of the queue (up to 50): ");
    scanf("%d", &max);
    if (max > 50) {
        printf("Size too large. Setting max size to 50.\n");
        max = 50;
    }

    int choice;
    while (1) {
        printf("Choose an option:\n1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: 
                enqueue(); 
                break;
            case 2: 
                dequeue(); 
                break;
            case 3: 
                display(); 
                break;
            case 4: 
                peek(); 
                break;
            case 5: 
                printf("Exiting from the circular queue.\n"); 
                return 0;
            default: 
                printf("Invalid choice\n");
        }
    }
    return 0;
}
