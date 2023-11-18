/*Sort the array elements in ascending order 
(minimum three functions: read, disp and sort) */
#include<stdio.h>
int a[10],n;
void insert() {
	int i;
    printf("Enter the number of elements needed to add : ");
    scanf("%d", &n);
    
    for (i =0; i < n; i++) {
//    	printf("Enter your element:\n");
        scanf("%d\t", &a[i]);
    }
}

void disp()
{
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

void sort(){
	int temp,i,j;//variable to set a number
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp = a[i];//value of a[j] given to temp
				a[i]=a[j];//value of a[j+1] given to a[j]
				a[j]=temp;//then temp value given a[j+1]
			}
		}
	}
	printf("\nThe array sorted");
}

int main(){
	insert();
	printf("\nEntered elements:\n");
	disp();
	sort();
	printf("\nElements after sorted:\n");
	disp();
	return 0;
}
