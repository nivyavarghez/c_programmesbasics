#include<stdio.h>
int main(){
	int i,n,search_num,a[10],occur=0;
	printf("Enter your number of elements need in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	printf("Enter the number to be searched:",search_num);
	scanf("%d",&search_num);
	for(i=0;i<n;i++){
		if(a[i]==search_num){
			printf("%d",i);
			occur++;
		}
		if(occur==0){
			printf("The array didn't have the number");
		}
	}
	return 0;
}

