//#include<stdio.h>
//#include<stdlib.h>
//
//struct node{
//	int data;
//	struct node *next;
//};
//
//struct node *head=NULL;
//
//void insert(int e,int i){
//	struct node *t;//calling the pointer as t	
//	if(head==NULL){
//		head=(struct node*)malloc(sizeof(struct node*));
//		head->data=e;
//		head->next=NULL;
//	}
//	else{
//		t=head;
//		while(t->next!=NULL){
//			t=t->next;
//		}
//		t->next->data=e;
//		t->next->next=NULL;
//	}
//}
//
//void delete(int e){
//	if(head ==NULL){
//		printf("The list is empty");
//	}
//	else if(head->data==e){
//		head=head->next;
//	}
//}
//
//void disp(){
//	struct node *t;
//	if(head==NULL){
//		printf("Linked list is empty");
//	}
//	else{
//		t=head;
//		while(t!=NULL){
//			printf("%d\t",t->data);
//			t=t->next;
//		}
//	}
//}
//
//int main(){
//	insert(10,1);
//	insert(10,2);
//	insert(20,4);
//	insert(50,3);
//	disp();
//	delete(50);
//	disp();
//	delete(100);
//	disp();	
//	
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h> 

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int e, int i) {
    struct node *t; // Declare a pointer t
    if (head == NULL) {
        head = (struct node*)malloc(sizeof(struct node)); // Allocate memory for head
        head->data = e;
        head->next = NULL;
    } else {
        t = head;
        while (t->next != NULL) {
            t = t->next;
        }
        struct node *newNode = (struct node*)malloc(sizeof(struct node)); // Allocate memory for the new node
        newNode->data = e;
        newNode->next = NULL;
        t->next = newNode; // Link the new node to the last node
    }
}

void delete(int e) {
    if (head == NULL) {
        printf("The list is empty\n");
    } else if (head->data == e) {
        head = head->next;
    }
}

void disp() {
    struct node *t;
    if (head == NULL) {
        printf("Linked list is empty\n");
    } else {
        t = head;
        while (t != NULL) {
            printf("%d\t", t->data);
            t = t->next;
        }
        printf("\n"); // Add a newline at the end for better formatting
    }
}

int main() {
    insert(10, 1);
    insert(20, 2);
    insert(30, 3);
    insert(40, 4);
    disp();

    delete(30);
    disp();

    delete(100); // Trying to delete a value not in the list
    disp();

    return 0;
}

