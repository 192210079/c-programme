#include <stdio.h>
#include <string.h>

struct date {
    int day;
    int month;
    int year;
};

struct employee {
    int empno;
    char name[50];
    float salary;
    struct date doj;
};

int main() {
    struct employee emp;
    printf("Enter employee number: ");
    scanf("%d", &emp.empno);
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    printf("Enter date of joining (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &emp.doj.day, &emp.doj.month, &emp.doj.year);
    printf("\nEmployee Details:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);
    printf("Date of Joining: %d/%d/%d\n", emp.doj.day, emp.doj.month, emp.doj.year);
    return 0;
}
//output: Enter employee number: 123
Enter employee name: John Doe
Enter employee salary: 5000.50
Enter date of joining (dd/mm/yyyy): 05/12/2020

Employee Details:
Employee Number: 123
Employee Name: John Doe
Employee Salary: 5000.50
Date of Joining: 5/12/2020//
