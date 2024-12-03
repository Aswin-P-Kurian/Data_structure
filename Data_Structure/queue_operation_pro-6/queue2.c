#include <stdio.h>
int main() {
int n, front, rear, i, del, op;
char ch;
printf("Enter the limit max elements of the queue: ");
scanf("%d", &n);
int a[n];
front = rear = -1;
printf("Choose an option \n1. Enqueue\n2. Dequeue\n3. Display\n");
do {
printf("\nEnter your choice: ");
scanf("%d", &op);
switch (op) {
case 1:
if (rear == n - 1) {
printf("Queue overflow\n");
} else {
if (front == -1) {
front = 0;
}
rear++;
printf("Enter the number you want to insert: ");
scanf("%d", &a[rear]);
printf("%d is inserted into the queue\n", a[rear]);
}
break;
case 2:
if (front == -1 || front > rear) {
printf("Queue underflow (queue is empty)\n");
} else {
del = a[front];
front++;
printf("%d Deleted from the front\n", del);
}
break;
case 3:
if (front == -1) {
printf("Queue is empty\n");
} else {
printf("Queue elements: ");

for (i = front; i <= rear; i++) {
printf("%d\t", a[i]);
}
printf("\n");
}
break;
default:
printf("Invalid input\n");
}
printf("Do you want to continue (y/n): ");
getchar();
scanf("%c", &ch);
} while (ch == 'y' || ch == 'Y');
return 0;
}
