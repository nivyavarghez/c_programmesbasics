//Display the array elements in the same order using a recursive function 
#include<stdio.h>
#define SIZE 4
int a[SIZE],n,i;

void disp(int k){
	if (k<n){
		printf("%d",a[k]);
		disp(k+1);
		
	}
}
int main(){
	int k;
	printf("Enter your number of elements:",n);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter your element:",a[i]);
		scanf("%d",&a[i]);
	}
	disp(k);
	return 0;
}
