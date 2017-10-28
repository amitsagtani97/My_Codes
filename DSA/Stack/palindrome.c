#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	char data;
	struct node* next;
};

struct node* top = NULL;
void push_data(char);
char pop_data();

int main()
{
	char word[50];
    char palin_word[50];
	int i;
	printf("Enter word/sentance to find its palindrome.\n");
	scanf("%[^\n]s", word);
	int word_length = strlen(word);
	for(i=0; i<word_length; i++)
	{
		push_data(word[i]);
	}
    printf("The reversed word is : ");
    for(i=0; i<word_length; i++)
    {
        char x = pop_data();
        palin_word[i] = x;
        printf("%c",x);
    }
    printf("\n");
    if(strcmp(word, palin_word)==0)
        printf("The above word is a palindrome\n");
    else
        printf("The above word isn't palindrome.\n");

}

void push_data(char data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->next = top;
	temp->data = data;
	top = temp;
}

char pop_data()
{
    if(top == NULL)
    {   
         printf("Stack Underflow.\n");
         
    }
    else
        {
           char x = top->data;
           struct node* temp;
           temp = top;
           top = top->next;
           free(temp);
           return x;
        }



}