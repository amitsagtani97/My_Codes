#include <stdio.h>
#include <stdlib.h>
#define MAX 101

int top = -1;
int stack[MAX];
void push(int);
void pop();
int top_data();
int Isempty();

int main()
{
    int i,j,choice,data;
    while(1)
    {
        printf("Operation menu.\n");
        printf("1. Push a element onto stack.\n");                      
        printf("2. Pop a element from stack.\n");
        printf("3. View top_data element of stack.\n");
        printf("4. Check whether stack is empty.\n");
        printf("Enter a choice.\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the element to enter into stack : \n");
                scanf("%d", &data);
                push(data);
                //printf("Data pushed Succesfully.\n");
                break;
            case 2:
                pop();
                //printf("Data popped Succesfully\n");
                break;
            case 3:
                j = top_data();
                printf("\n");
                printf("%d\n",j);
                break;
            case 4:
                j = Isempty();
                if (j == 1)
                    printf("The stack is empty.\n");
                else
                    printf("The stack isn't empty.\n");
                break;
            default:
                printf("please enter correct option.\n");
        }
    }

}

void push(int data)
{
    if (top == MAX-1)
    {
        printf("Stack Overflow.\n");
        return;
    }
    else
        stack[++top] = data;
    
}

void pop()
{
    if (Isempty())
        {
            printf("Stack underflow.\n");
            return;
        }
    else
        top--;
    
}
 int top_data()
 {
    if (Isempty())
        return 1;
    else
    {
        return stack[top];
    }
 }

int Isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}