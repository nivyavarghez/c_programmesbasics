#include<stdio.h>
#include<stdlib.h>


struct auth_details{
	char auth_nm[20];
	char auth_mail[20];
};
struct Book_details{
	char bookName[20];
	int book_price;
};

int main(){
	int n,i;
	printf("enter you number of books:",n);
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		insert();
	}
	return 0;
}

void insert(){
	struct Book_details *B;
	struct auth_details *A;
	B=(struct Book_details *)malloc(sizeof(struct Book_details *));
	A=(struct auth_details *)malloc(sizeof(struct auth_details *));
	
    
	printf("\nenter your book Name: ");
	scanf("%s",B->bookName);
	printf("\nenter your book author name: ");
	scanf("%s",*A->auth_nm);
	
	free(B);
	free(A);

}
