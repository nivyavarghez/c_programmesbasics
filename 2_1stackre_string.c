//Reverse a string using Stack 


#include <stdio.h>
#include <string.h>

char stack[20];
int top = -1,i;

void push() {
	char ch;
    if (top == (20 - 1)) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = ch;
    }
}

char pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return '\0'; // Return a null character for underflow
    } else {
        return stack[top--];
    }
}

int main() {
    char str[20];
    printf("Enter the string:\n");
    scanf("%s", str);
	int i;
    for ( i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    printf("The reversed string is: ");
    while (top >= 0) {
        char ch = pop();
        if (ch != '\0') {
            printf("%s", ch);
        }
    }

    printf("\n");
    return 0;
}

