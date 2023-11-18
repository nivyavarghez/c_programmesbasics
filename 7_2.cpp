#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,*p_cal;
	int n,i;
	printf("Enter your number:");
	scanf("%d",&n);
	
	p=(int *)malloc(sizeof(int)*n);
	p_cal=(int *)calloc(n,sizeof(int);
	
	for(i=0;i<n;i++){
		printf("Enter p[%d]",i);
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\t",p[i]);
	}
	free(p);
	free(p_cal);
	
	return 0;
}
