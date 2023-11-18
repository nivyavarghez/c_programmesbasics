#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head,*tail=NULL;

void beginning(int data){
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode=NULL){
		printf("Memory allocation failed\n");
	}
	newnode->data=data;
	newnode->next=NULL;
	
	if(head==NULL){
		head=newnode;
		tail=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
}

void end(int data){
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode=NULL){
		printf("Memory allocation failed\n");
	}
	newnode->data=data;
	newnode->next=NULL;
	
	if(head==NULL){
		head=newnode;
		tail=newnode;
	}
	else
	{
		newnode->next=tail;
		tail=newnode;
	}	
}

void middle(int data){
		struct node *newnode=(struct node *)malloc(sizeof(struct node));
	if (newnode == NULL) {
    printf("Memory allocation failed\n");
}

	newnode->data=data;
	newnode->next=NULL;
	
	if(head==NULL){
		head=newnode;
		tail=newnode;
	}
	else
	{
//		newnode->next=head;
//		head=newnode;
        struct node *first=head;
        struct node *sec=head->next;
        
        while(sec !=NULL && sec->next != NULL){
        	
        	first =first->next;
        	sec =first->next->next;
		}
		newnode->next=first->next;
		first->next=newnode;
//		head=newnode;
	}
}

void disp(){
	struct node *currentnode=head;
	
	if (head == NULL) {
    printf("List is empty\n");
    return;
	} 


	printf("List the elements: ");
	while(currentnode !=NULL){
		printf("%d ",currentnode->data);
		currentnode=currentnode->next;
	}
	printf("\n");
}


int main(){
	int choice,data;
	printf("\n1. Add to start\n2. Add to middle\n3. Add to end\n4. Display\n5. Exit\nChoose an option:\n");
  
    scanf("%d", &choice);
    
      switch (choice) {
            case 1:
                printf("Enter data to add to the start: ");
                scanf("%d", &data);
                beginning(data);
                break;
            case 2:
                printf("Enter data to add to the middle: ");
                scanf("%d", &data);
                middle(data);
                break;
            case 3:
                printf("Enter data to add to the end: ");
                scanf("%d", &data);
                end(data);
                break;
            case 4:
                disp();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
        return 0;
    }


