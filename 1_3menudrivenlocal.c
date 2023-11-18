/*Use a menu-driven program to insert, search, delete
 and sort elements in an array using functions (use only local variables)*/ 
#include <stdio.h>
int a[10],n;
void insert() {
	int a[10],n,i;
    printf("Enter the number of elements needed to add : ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
    	printf("Enter your element:\n");
        scanf("%d", &a[i]);
    }
}
void disp()
{
	int n,i,a[i];
	if(n==0){
		printf("THERE are No array");
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}

void search(){
	int flag=0,pos=-1,i,search_num;
	printf("Enter your number to be searched:");
	scanf("%d",&search_num);
	flag=0;
	pos=-1;
	for(i=0;i<n;i++){
		if(search_num==a[i]){
			flag=1;
			pos=i;
		}
	}
	if(flag==1){
		printf("Element found at %d",pos+1);
	}
	else
	{
		printf("Element not found");
	}
}
void delete()
{
	int delete_num,i,j,flag;
	printf("\nenter the number to be deleted:",delete_num);
	scanf("%d",&delete_num);

	for(i=0;i<n;i++){
		if(a[i]==delete_num){
			for(j=i;j<n-1;j++){
				a[j]=a[j+1];
			}
			flag =1;
			n--;
			printf("\nthe number %d has been deleted from the index %d",delete_num,a[i]);
		}
		if(flag!=1){
			printf("the array doesn't have the number %d",delete_num);
		}
	}
}
int menu(){
	int ch;
	printf("\nchoose one:\nInsert-1\nSearch-2\nDelete-3\nSort-4\nDisplay-5\nExit-6\nYour choice:" );
	scanf("%d",&ch);
	return ch;
}

void sort(){
	int temp,i,j;//variable to set a number
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp = a[j];//value of a[j] given to temp
				a[j]=a[j+1];//value of a[j+1] given to a[j]
				a[j+1]=temp;//then temp value given a[j+1]
			}
		}
	}
	printf("\nThe array sorted");
}
void process()
{
	
	int ch;
	for(ch=menu();ch!=6;ch=menu()){
		switch(ch){
				case 1:
				insert();
				break;
				case 2:
				search();
				break;
				case 3:
				delete();
				break;	
				case 4:
				sort();
				break;
				case 5:
				disp();
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
