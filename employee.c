#include <stdio.h>

struct employee {
    int eid;
    char ename[100];
    int esal;
};

int main() {
    struct employee e[10];
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);  // Corrected to use &n

    for(i = 0; i < n; i++) {  // Corrected the loop condition to i < n
        printf("\nEnter details for employee %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &e[i].eid);  // Corrected to use &e[i].eid
        printf("Enter name: ");
        scanf("%s", e[i].ename);  // e[i].ename is already an array, no need for &
        printf("Enter salary: ");
        scanf("%d", &e[i].esal);  // Corrected to use &e[i].esal
    }

    printf("\nEmployee details are...\n");
    for(i = 0; i < n; i++) {
        printf("Employee %d\n", i + 1);
        printf("ID: %d\n", e[i].eid);
        printf("Name: %s\n", e[i].ename);
        printf("Salary: %d\n", e[i].esal);
        printf("\n");
    }

    return 0;
}
