/*Use malloc to read n integers and find the mean.*/
#include<stdio.h>
int main(){
	int n,i;
	int sum=0;
	int *a;
	printf("\nnumber of num you need to check the avg: \n",n);
	scanf("%d",&n);
	
	a=(int *)malloc(n*sizeof(int *));//allocating the memory
	
	if(a==NULL){
		printf("The memory wasn't able to allocate");
		return 1;
	}
	for(i=0;i<n;i++){
		printf("\nEnter your number: \n",i+1);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	if(n>0){
		int mean=sum/n;
		printf("Mean of %d numbers= %d",n,sum);
	}
	else{
		printf("No numbers are here");
	}
	return 0;
}

