//Reverse a string using Stack 
#include <stdio.h>
char stack[20];

int top=-1,i;
char push(char ch) {
   if(top==(10-1)){
   	printf("Stack overflow\n");
   }
   else{
   	stack[++top]=ch;	
	}
}



char pop(char ch)
{
	if(top==-1){
   	printf("Stack underflow\n");
   }
   else{
   	stack[++top]=ch;	
	}
}




int main(){
	char str[20];
	char n[20];
	printf("enter the string:\n");
	scanf("%s",str);
	for(i=0;i<str[20];i++)
	{
		push(str[i]);
	}
	printf("the reversed string is:");
	scanf("%s",&str);
	return 0;
}
