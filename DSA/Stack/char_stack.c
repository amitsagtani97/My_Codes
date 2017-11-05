#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
	char input;
};
void push_data(char input, struct node* ptr);
void display_stack(struct node* ptr);
int pop_data(struct node* ptr);

int main()
{
	struct node* head = (struct node*)malloc(sizeof(struct node));
	head->data = 0;
	head->next = NULL;

	int i,j,choice,data,new_data, popped_value;
	char a;
	while(1){
	printf("Stack Menu..\n");
	printf("1. Create a stack.\n");
	printf("2. Push a data.\n");
	printf("3. Pop a data\n");
	printf("4. Display stack.\n");
	printf("Enter a choice.\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("Stack created Successfully.\n");
			break;

		case 2:
			printf("Enter the data to push into stack..\n");
			scanf("%c",&a);
			push_data(a, head);
			printf("Data pushed Succesfully.\n");
			break;

		case 3:
			popped_value = pop_data(head);
			break;

		case 4:
			display_stack(head);
			break;

		default:
			printf("Incorrect optoin.. Please Try again.\n");
			break;
	}
	//printf("%d\n",head->data);
	}




}

void push_data(char input, struct node* ptr)
{
	ptr->data += 1;
	struct node* temp_ptr = (struct node*)malloc(sizeof(struct node));
	temp_ptr->input = input;
	temp_ptr->next = ptr->next;
	ptr->next = temp_ptr;
	printf("%d",ptr->data);
	printf("\n");
}

void display_stack(struct node* ptr)
{
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
		printf("%d ",ptr->data);
	}
	printf("\n\n");
}

int pop_data(struct node* ptr)
{
	int x = (ptr->next)->input;
	ptr->data -= 1;
	struct node* temp_ptr; //= (struct node*)malloc(sizeof(struct node));
	printf("\n\n%c\n\n",x);
	temp_ptr = ptr->next;
	ptr->next = (ptr->next)->next;
	free(temp_ptr);
	return x;
}