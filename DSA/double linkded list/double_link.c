#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node* prev;
	int data;
	struct node* next;
};
void insert_node(int index, int new_data, struct node* ptr);
void display_list(struct node* ptr);
void search_node(int data, struct node* ptr);
void delete_node(int data, struct node* ptr);
void modify_node(int data, int new_data, struct node* ptr);

int main()
{
	struct node* head = (struct node*)malloc(sizeof(struct node));
	head->prev = NULL;
	head->data = 0;
	head->next = NULL;
	int i,j,k,l,index,data,new_data,choice;
	while(1)
	{
		printf("Operation menu: \n");
		printf("1. Insert a node\n");
		printf("2. Display list\n");
		printf("3. Search a node\n");
		printf("4. Delete a node\n");
		printf("5. Modify a node\n");
		printf("Enter a choice ...\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter index and data to be stored:\n");
				printf("Enter index:\n");
				scanf("%d",&index);
				printf("Enter data\n");
				scanf("%d",&new_data);
				insert_node(index, new_data, head);
				printf("Data entered succsfully.\n");
				break;

			case 2 :
			display_list(head);
			break;

			case 3:
					printf("Enter the data to be searched. \n");
					scanf("%d", &data);
					search_node(data, head);
					break;

			case 4:
					printf("Enter the data to be deleted.\n");
					scanf("%d", &data);
					delete_node(data, head);		
					break;

			case 5:
					printf("Enter the data to be modified.\n");
					scanf("%d", &data);
					printf("Enter the new data to replace with.\n");
					scanf("%d", &new_data);
					modify_node(data, new_data, head);
					break;

			default:
					printf("Invalid Choice, Please Try again.\n");
		}//switch case loop

	}//while loop




	return 0;
} // end of main()

void insert_node(int index, int new_data, struct node* ptr)
{
	if (index < 0 || index > ptr->data)
		{printf("Incorrect index. plz try again.\n");
			return;
			}
	else
		ptr->data += 1;
		struct node* new_ptr = (struct node*)malloc(sizeof(struct node)); 
		new_ptr->data = new_data;
		int i = 0;
		while(i < index)
		{
			ptr = ptr->next;
			i++;
		}
		new_ptr->next = ptr->next;
		new_ptr->prev = ptr;
		ptr->next = new_ptr;
}

void display_list(struct node* ptr)
{
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		printf("%d ",ptr->data);
	}
	printf("\n");



}

void search_node(int data, struct node* ptr)
{
	int i = 0;
	while(ptr->next != NULL)
	{
		i++;
		ptr = ptr->next;
		if (ptr->data == data)
			printf("The position is %d\n", i);


	}

	printf("\n\n");
}


void delete_node(int data, struct node* ptr)
{
	struct node* root_ptr = (struct node*)malloc(sizeof(struct node));
	struct node* temp_ptr;
	root_ptr = ptr;
	int i = 0;
	while(ptr->next != NULL)
	{
		
		if((ptr->next)->data == data)
		{
			i++;
			temp_ptr = ptr->next;
			
			if((ptr->next)->next != NULL)
			{
				((ptr->next)->next)->prev = ptr; 
			}
			ptr->next = (ptr->next)->next;
			free(temp_ptr);
		}
		else
		ptr = ptr->next;
	}

	root_ptr->data -= i;
}

void modify_node(int data, int new_data, struct node* ptr)
{
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
		if(ptr->data == data)
			ptr->data = new_data;
	}

}
