//Display the array elements in the same order using a recursive function 
#include<stdio.h>
#define SIZE 4
int a[SIZE],n,i;

void disp(int k){
	if (k>=0){    //we are calling an variable k
		printf("%d",a[k]);
		disp(k-1);
		
	}
}
int main(){
	int k;
	printf("Enter your number of elements:",n);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter your element:",a[i+1]);
		scanf("%d",&a[i]);
	}
	disp(n-1);
	return 0;
}
