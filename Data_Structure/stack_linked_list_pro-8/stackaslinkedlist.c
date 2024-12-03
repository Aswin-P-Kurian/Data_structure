#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(struct Node** top, int data)
{
    struct Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("Pushed %d onto the stack\n",data);
}
int pop(struct Node** top)
{
    if (*top == NULL)
    {   
       printf("Stack is empty\n");
       return -1;
    }
    int data = (*top)->data;
    struct Node* temp = *top;
    *top = (*top)->next;
    free(temp);
    printf("Popped %d from the stack\n",data);
    return data;
}

void display (struct Node* top)
{
    if (top == NULL)
    {
       printf("Stack is empty\n");
       return;
    }
    struct Node* temp = top;
    printf("Stack elements are:\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    
}

int main() {
    struct Node* top = NULL;
    int choice, value;
    
    while (1) {
        printf("\nMenu:\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("Enter the value to be pushed: ");
                scanf("%d", &value);
                push(&top, value);
                break;
            case 2:
                pop(&top);
                break;
            case 3:
                display(top);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice.\n");
         }
}
return 0;
}
   
            

