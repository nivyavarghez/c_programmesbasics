//Convert an expression from infix to postfix using stack 
#include<stdio.h>
#include<ctype.h>
//need to check this line by line
char stack[100]; //char storage is 100
int top = -1; //initializing top

void push() //inside push calling a char x variable
{
	char x;
    stack[++top] = x;//incrementing the top of stack and assigning the value to that x
}

char pop()
{
    if(top == -1) //empty stack
        return -1;
    else 
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];//calling the char in variable exp
    char *e, x; ///2 variable x and pointer e
    printf("Enter the expression : ");
    scanf("%s",exp);//expression is called in exp
    printf("\n");
    e = exp;//equating exp to e
    
    while(*e != '\0')
    {
        if(isalnum(*e))      //checking whether e is alphabet or int
            printf("%c ",*e);   
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}
