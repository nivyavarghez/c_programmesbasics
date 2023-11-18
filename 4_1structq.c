#include <stdio.h>
#include <string.h>

int i, n;

struct emp {
    int eno;
    char ename[20];
    float esal;
    int dno;
};

int search(struct emp E[], int n) {
    int flag = 0;
    int search_no;
    printf("\nEnter the emp to be searched:");
    scanf("%d", &search_no);
    for (i = 0; i < n; i++) {
        if (search_no == E[i].eno) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        printf("Element Found\n");
    } else {
        printf("Not found\n");
    }
    return flag;
}

void sortbyname(struct emp E[], int n) {
    struct emp T;
    for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(E[j].ename, E[j + 1].ename) > 0) {
                T = E[j];
                E[j] = E[j + 1];
                E[j + 1] = T;
            }
        }
    }
}

void sortbysal(struct emp E[], int n) {
    struct emp T;
    for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (E[j].esal > E[j + 1].esal) {
                T = E[j];
                E[j] = E[j + 1];
                E[j + 1] = T;
            }
        }
    }
}

void delete(struct emp E[]) {
    int eno;
    printf("Enter the number to be deleted:");
    scanf("%d", &eno);
    int i, j;
    for (i = 0; i < n; i++) {
        if (E[i].eno == eno) {
            for (j = i; j < n - 1; j++) {
                E[j] = E[j + 1];
            }
            n--;
            printf("The number with eno %d has been deleted\n", eno);
            return;
        }
    }
    printf("Element not found\n");
}

int menu() {
    int ch;
    printf("\nSearch-1\nSort by name-2\nSort by sal-3\nDelete-4\nPut your choice: ");
    scanf("%d", &ch);
    return ch;
}

int process(struct emp E[]) {
    int c;
    scanf("%d", &c);
    switch (c) {
        case 1:
            search(E, n);
            break;
        case 2:
            sortbyname(E, n);
            break;
        case 3:
            sortbysal(E, n);
            break;
        case 4:
            delete(E);
            break;
        default:
            printf("You had chosen the wrong one!!!!\n");
            break;
    }
    return 0;
}

int main() {
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct emp E[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter your no: ");
        scanf("%d", &E[i].eno);
        printf("Enter your name: ");
        scanf("%s", E[i].ename);
        printf("Enter your salary: ");
        scanf("%f", &E[i].esal);
        printf("Enter your dept.no: ");
        scanf("%d", &E[i].dno);
    }

    printf("\nEmployee info:\n");
    for (i = 0; i < n; i++) {
        printf("Empno:%d, EmpName:%s, Empsalary:%f, Empdept:%d\n", E[i].eno, E[i].ename, E[i].esal, E[i].dno);
    }

    int choice;
    do {
        choice = menu();
        process(E);
    } while (choice >= 1 && choice <= 4);

    return 0;
}

