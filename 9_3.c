#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Function to create a new node
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(int data) {
    struct Node *newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(int data) {
    struct Node *newNode = createNode(data);

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to delete the first node of the list
void deleteFromBeginning() {
    if (head == NULL) {
        printf("List is empty. Cannot delete from beginning.\n");
        return;
    }

    struct Node *temp = head;
    head = head->next;
    free(temp);
}

// Function to delete the last node of the list
void deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty. Cannot delete from end.\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct Node *current = head;
    struct Node *prev = NULL;

    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }

    prev->next = NULL;
    free(current);
}

// Function to delete a node with a specified data element
void deleteNodeWithData(int data) {
    if (head == NULL) {
        printf("List is empty. Cannot delete specified data.\n");
        return;
    }

    struct Node *current = head;
    struct Node *prev = NULL;

    while (current != NULL) {
        if (current->data == data) {
            if (prev == NULL) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }

    printf("Data not found in the list. Cannot delete specified data.\n");
}

// Function to display the linked list
void display() {
    struct Node *current = head;

    if (current == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("List elements: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Insert some elements at the beginning and end
    insertAtBeginning(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtBeginning(0);

    // Display the initial list
    printf("Initial list:\n");
    display();

    // Delete a node from the beginning
    deleteFromBeginning();
    printf("After deleting from the beginning:\n");
    display();

    // Delete a node from the end
    deleteFromEnd();
    printf("After deleting from the end:\n");
    display();

    // Delete a node with specified data
    deleteNodeWithData(2);
    printf("After deleting node with data 2:\n");
    display();

    // Delete a node with data not in the list
    deleteNodeWithData(4);

    return 0;
}

