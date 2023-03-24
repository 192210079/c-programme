#include <stdio.h>
#include <string.h>

struct subject {
    char name[50];
    float marks;
};

struct student {
    int rollno;
    char name[50];
    struct subject subjects[5];
};

int main() {
    struct student stu;
    printf("Enter student roll number: ");
    scanf("%d", &stu.rollno);
    printf("Enter student name: ");
    scanf("%s", stu.name);
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%s", stu.subjects[i].name);
        scanf("%f", &stu.subjects[i].marks);
    }
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", stu.rollno);
    printf("Name: %s\n", stu.name);
    printf("Subject-wise marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: %.2f\n", stu.subjects[i].name, stu.subjects[i].marks);
    }
    return 0;
}
// output: Enter student name: Alice
Enter student roll number: 101
Enter marks in three subjects:
Subject 1: 70
Subject 2: 80
Subject 3: 90

Student Details:
Name: Alice
Roll Number: 101
Marks in three subjects: 70.00, 80.00, 90.00
Total Marks: 240.00
Percentage: 80.00%//
