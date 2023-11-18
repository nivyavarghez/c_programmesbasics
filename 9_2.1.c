#include<stdio.h>
#include<stdlib.h> 

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

// Function to add a new node to the end of the list
void endofnode(int data) {
    // Allocate memory for a new node
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit the program if memory allocation fails
    }

    newnode->data = data;
    newnode->next = NULL;

    if (tail == NULL) {
        // If the list is empty, both head and tail point to the new node
        head = newnode;
        tail = newnode;
    } else {
        // If the list is not empty, add the new node to the end and update tail
        tail->next = newnode;
        tail = newnode;
    }
}

void display() {  
    struct node *current = head;  
      
    if (head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("List elements: \n");  
    while(current != NULL) {  
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
} 

int main() {  
    // Adding 1 to the end of the list  
    endofnode(1);  
    display();  
      
    // Adding 2 to the end of the list  
    endofnode(2);  
    display();  
      
    // Adding 3 to the end of the list  
    endofnode(3);  
    display();  
      
    // Adding 4 to the end of the list  
    endofnode(4);  
    display();  
   
    return 0;  
}

