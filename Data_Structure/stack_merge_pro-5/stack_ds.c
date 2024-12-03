#include <stdio.h>
int main() 
{
int n, top, i, del, op;
char ch;
printf("Enter the limit max stack of the elements: ");
scanf("%d", &n);
int a[n];
top= -1;
printf("Choose an option \n1. Push\n2. Pop\n3. Display\n");
do {
     printf("\nEnter your choice: ");
     scanf("%d", &op);
     switch (op)
         {
           case 1:
                if (top == n - 1)
                {
                    printf("Stack overflow\n");
                }
                else 
                {
                    top++;
                    printf("Enter the number you want to insert: ");
                    scanf("%d", &a[top]);
                    printf("%d is inserted into the Stack\n", a[top]);
                }
                break;

            case 2:
                if (top == -1) 
                {
                    printf("Stack underflow (Stack is empty)\n");
                } 
                else 
                {
                    del = a[top];
                    top--;
                    printf("%d deleted from the front\n", del);
                }
                break;

            case 3:
                if (top== -1) 
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    printf("Stack elements: ");
                    for (i = 0; i <= top; i++) 
                    {
                        printf("%d\t", a[i]);
                    }
                    printf("\n");
                }
                break;

            default:
                printf("Invalid input\n");
        }
    printf("Do you want to continue (Y/N): ");
    getchar(); 
    scanf("%c", &ch);
    }
    while (ch == 'y' || ch == 'Y');
    return 0;
}




