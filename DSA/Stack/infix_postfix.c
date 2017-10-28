#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data;
    struct node* next;
};

struct node* head = NULL;
void push_data(char input);
void display_stack();
char pop_data();
int priority(char);
char top_data();

int main()
{
    char input[50];
    int x;
    char top, output, y;
    int top_value;
    printf("Enter the infix equation :\n");
    scanf("%s", input);
    int length = strlen(input);
    int i;
    for(i = 0; i<length; i++)
            {

                x = priority(input[i]);
                if(x==6)
                { if(i==strlen(input)-1)
                    {
                        printf("%c ",input[i]);
                        while(head!=NULL)
                            {
                                top = pop_data();
                                printf("%c ",top);

                            }
                    }
                    else
                    {
                    printf("%c ",input[i]);
                }
            }
                else if(x==2)
                    push_data(input[i]);
                else if(x==3)
                    {
                    top = top_data();
                    top_value= priority(top);
                    while(top_value != 2)
                    {
                        output = pop_data();
                        printf("%c ", output);
                        top = top_data();
                        top_value = priority(top);
                    }
                    pop_data();
                        if(i==strlen(input)-1)
                        {
                            while(head!=NULL)
                            {                               
                            top = pop_data();
                            printf("%c ",top);

                            }
                        }
                    }

                else if(x==4 || x==5)
                {

                    if(head == NULL)
                        {
                            push_data(input[i]);
                        }
                    else
                    {
                        top = top_data();
                        top_value = priority(top);

                        if(x > top_value)
                            push_data(input[i]);
                        else
                        {    while(x <= top_value)
                        {
                            output = pop_data();
                            printf("%c ",output);
                            if(head!=NULL){
                            top = top_data();
                            top_value = priority(top);}
                            else break;
                        }
                            push_data(input[i]);

                    }
                    }
                }
            }

            printf("\n");
        }



void push_data(char data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->next = head;
    temp->data = data;
    head = temp;
}

char pop_data()
{
    if(head == NULL)
        return 'z';
    else
        {
           char x = head->data;
           struct node* temp;
           temp = head;
           head = head->next;
           free(temp);
           return x;
        }
}

int priority(char data)
{
    switch(data)
    {
        case '(':
            return 2;
        case ')':
            return 3;
        case '+':
        case '-':
            return 4;
        case '*':
        case '/':
            return 5;
        default:
            return 6;

    }
}

char top_data()
{
    return head->data;
}
