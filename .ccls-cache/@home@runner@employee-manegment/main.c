#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEE 1000

struct Employee {
    int id;
    char name[30];
    int salary;
    int age;
};

int main() {
    struct Employee employees[MAX_EMPLOYEE];

    int numEmployees;
    printf("Enter the number of employees (up to %d): ", MAX_EMPLOYEE);
    scanf("%d", &numEmployees);

    for (int i = 0; i < numEmployees; i++) {
        printf("Enter the id of employee %d: ", i + 1);
        scanf("%d", &employees[i].id);

        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);

        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%d", &employees[i].salary);

        printf("Enter the age of employee %d: ", i + 1);
        scanf("%d", &employees[i].age);
    }

    printf("\nEntered employee details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %d\n", employees[i].salary);
        printf("Age: %d\n", employees[i].age);
        printf("\n");
    }

    return 0;
}
