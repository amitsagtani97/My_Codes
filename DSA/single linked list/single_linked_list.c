#include<stdio.h>
#include<stdlib.h>
struct node* create_new_list();
void insert_node(int index, int data, struct node* ptr);
void display_list(struct node* ptr);
int delete_a_node(int data, struct node* ptr);
int search_node(int data, struct node* ptr);
struct node
{
	int data;
	struct node* next;
};
int main()
{
	
	struct node* head = create_new_list();
	head->data = 0;
	head->next = NULL;
	int i,j,k,l,choice,new_data,data,index;

	while(1){	
	printf("Operations menu :\n");
	printf("1. Insert a node\n");
	printf("2. Display list\n");
	printf("3. Delete a node\n");
	printf("4. Search a node\n");
	printf("5. Delete all nodes\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :
			printf("Enter the index and data to be added:\n");
			printf("Enter index :\n");
			scanf("%d",&index);
			printf("Enter data :\n");
			scanf("%d",&data);
			insert_node(index, data, head);
			display_list(head);
			//printf("Data Entered Successfully.\n");
			break;

		case 2 :
			display_list(head);
			break;

		case 3 :
			printf("Enter a data to be deleted :\n");
			scanf("%d",&data);
			index = delete_a_node(data, head);
			if(index = 1)
				printf("Data removed Successfully. \n");
			else
				printf("Invalid data!! No such data found\n");
			display_list(head);

		case 4 :
			printf("Enter the data to be searched :\n");
			scanf("%d",&data);
			index = search_node(data,head);
			if (index == -1)
				printf("No entered data exists.\n");
			else
				printf("Entered data is at index : %d\n",index);



	} // For switch case.

	} //For While loop.

}// For main function.

void insert_node(int index, int data, struct node* ptr)
{
	if (index < 0 || index > (ptr->data))
		{
			printf("Invalid Index!! Try Again...\n");
			return;
		}
	else
		{
			ptr->data += 1;
			int i = 0;
			while(i < index)
			{
				ptr = ptr->next;
				i++;
			}
			struct node* new_ptr = (struct node*)malloc(sizeof(struct node));
			new_ptr->data = data;
			new_ptr->next = ptr->next;
			ptr->next = new_ptr;
		}
}

void display_list(struct node* ptr)
{
	int i = 1;
	while(ptr->next != NULL)
	{
		printf("%d = %d, ",i, ptr->data);
		ptr = ptr->next;
		i++;
	}

}

int delete_a_node(int data, struct node* ptr)
{
	struct node* root_ptr = (struct node*)malloc(sizeof(struct node));
	root_ptr = ptr;
	ptr->data -= 1;
	while((ptr->next)->data != data)
	{
		ptr = ptr->next;
	}
		if (ptr->next != NULL)
		{
			
			struct node* temp_ptr;
			temp_ptr = ptr->next;
			ptr->next = (ptr->next)->next;
			free(temp_ptr);
			return 1;
		}
		else
		{
			(root_ptr->data) += 1;
			return -1;
		}
}

int search_node(int data, struct node* ptr)
{
	int i = 0;
	while((ptr->next)->data != data)
	{
		ptr = ptr->next;
		if ((ptr->next) == NULL)
			return -1;
		i++;
	}
	return i;
}



struct node* create_new_list()
{
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	return ptr;
}