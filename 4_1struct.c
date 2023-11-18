/*Define a structure for employees with eno,ename, esal and dno.
 Read  n employees information and provide functions for the following:
 a.Searching an employee by no
b.Sorting the employees by
Name
Salary
c.Deleting an employee
 
 */
#include<stdio.h>

int i,n;

struct emp{
	int eno;
	char ename[20];
	float esal;
	int dno;
};

int search(	struct emp E[], int n){
	int flag=0;
	int search_no;
	printf("\nEnter the emp to be searched:");
	scanf("%d",&search_no);
	for(i=0;i<n;i++){
		if(search_no==E[i].eno)
		{
			flag=1;
			break;
		}
	}
	if (flag==1){
		printf("Element Found\n");
	}
	else{
		printf("not found\n");
	}
	return flag;
}

void sortbyname(struct emp E[],int n){
	struct emp T;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(strcmp(E[j].ename,E[j+1].ename)>0){
				T=E[j];
				E[j]=E[j+1];
				E[j+1]=T;
			}
			printf("\nEmployee sorted by name:");   //displaying the info 
				for(i=0;i<n;i++){
					printf("\nEmpno:%d, EmpName:%s, Empsalary:%f, Empdept:%d",E[i].eno,E[i].ename,E[i].esal,E[i].dno);
				}	
		}
	}
	
}

void sortbysal(struct emp E[],int n){
	struct emp T;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(E[j].esal,E[j+1].esal){
				T=E[j];
				E[j]=E[j+1];
				E[j+1]=T;
				printf("\nEmployee sorted by salary:");   //displaying the info 
				for(i=0;i<n;i++){
					printf("\nEmpno:%d, EmpName:%s, Empsalary:%f, Empdept:%d",E[i].eno,E[i].ename,E[i].esal,E[i].dno);
				}
			}
			else
			{
				printf("\nsalary not found");
			}
		}
	}

	
}

void deleteEmployee(struct emp E[], int *n, int eno) {
    int i, j;
    for (i = 0; i < *n; i++) {
        if (E[i].eno == eno) {
            // Shift elements to the left to remove the employee
            for (j = i; j < *n - 1; j++) {
                E[j] = E[j + 1];
            }
            (*n)--;
            printf("Employee with eno=%d deleted.\n", eno);
            return;
        }
    }
    printf("Employee with eno=%d not found.\n", eno);
}

int main(){
	int n,b;
	int i;
	char a;
	printf("Enter the number of employees: ");
	scanf("%d", &n);
	struct emp E[n];
	for (i=0;i<=n-1;i++){
		printf("\nEnter your no:");
		scanf("%d",&E[i].eno);
		printf("\nEnter your name:");
		scanf("%s",&E[i].ename);
		printf("\nEnter your salary:");
		scanf("%f",&E[i].esal);
		printf("\nEnter your dept.no:");
		scanf("%d",&E[i].dno);
	}
	printf("\nEmployee info:");   //displaying the info 
	for(i=0;i<n;i++){
		printf("\nEmpno:%d, EmpName:%s, Empsalary:%f, Empdept:%d",E[i].eno,E[i].ename,E[i].esal,E[i].dno);
	}
	search(E,n); 
	   	
	printf("Enter the name:");
	scanf("%s",&a);
	//fun sortbyname
	sortbyname(E,n);

	printf("\nEnter the salary:");
	scanf("%d",&b);
	//fun sort by sal
	sortbysal(E,n);

	int delete_no;//calling a variable for assigning the number to be deleted
    printf("\nEnter the employee number to delete: ");
    scanf("%d", &delete_no);
    deleteEmployee(E, &n, delete_no);
	return 0;
}
