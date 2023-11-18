//Implement stack operations using arrays. 
/*Use a menu-driven program to insert, search, 
delete and sort elements in an array using functions (use global variables)*/ 

#include <stdio.h>
int a[10],n,flag=0,top=-1,i,search_num,pop_num,j;
void push() {
    printf("Enter the number of elements needed to push : ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
    	printf("Enter your element:\n");
        scanf("%d", &a[i]);
    }
}
void peek()
{
	if(n==0){
		printf("THERE is No Stack");
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}

void search(){
	printf("Enter your number to be searched:");
	scanf("%d",&search_num);
	flag=0;
	top=-1;
	for(i=0;i<n;i++){
		if(search_num==a[i]){
			flag=1;
			top=i;
		}
	}
	if(flag==1){
		printf("Element found at %d",top+1);
	}
	else
	{
		printf("Element not found");
	}
}
void pop()
{
	printf("\nenter the number to be poped:",pop_num);
	scanf("%d",&pop_num);
	int j;
	for(i=0;i<n;i++){
		if(a[i]==pop_num){
			for(j=i;j<n-1;j++){
				a[j]=a[j+1];
			}
			flag =1;
			n--;
			printf("\nthe number %d has been Poped from the index %d",pop_num,a[i]);
		}
		if(flag!=1){
			printf("the stack doesn't have the number %d",pop_num);
		}
	}
}
int menu(){
	int ch;
	printf("\nchoose one:\nPush-1\nSearch-2\nPop-3\nSort-4\nPeek-5\nExit-6\nYour choice:" );
	scanf("%d",&ch);
	return ch;
}

void sort(){
	int temp;//variable to set a number
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp = a[j];//value of a[j] given to temp
				a[j]=a[j+1];//value of a[j+1] given to a[j]
				a[j+1]=temp;//then temp value given a[j+1]
			}
		}
	}
	printf("\nThe Stack is sorted");
}
void process()
{
	
	int ch;
	for(ch=menu();ch!=6;ch=menu()){
		switch(ch){
				case 1:
				push();
				break;
				case 2:
				search();
				break;
				case 3:
				pop();
				break;	
				case 4:
				sort();
				break;
				case 5:
				peek();
				break;
				default:
				printf("\nwrong choice!!");
				break;

	}
}
}
int main(){
	process();
	return 0;
}
