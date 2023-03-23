#include <stdio.h>

struct student {
    char name[50];
    int python;
    int cprog;
    int maths;
    int physics;
    int total;
    float aggregate;
    char grade[20];
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter the name of student %d: ", i+1);
        scanf("%s", s[i].name);

        printf("Enter the marks in python for student %d: ", i+1);
        scanf("%d", &s[i].python);

        printf("Enter the marks in c programming for student %d: ", i+1);
        scanf("%d", &s[i].cprog);

        printf("Enter the marks in Mathematics for student %d: ", i+1);
        scanf("%d", &s[i].maths);

        printf("Enter the marks in Physics for student %d: ", i+1);
        scanf("%d", &s[i].physics);

        s[i].total = s[i].python + s[i].cprog + s[i].maths + s[i].physics;
        s[i].aggregate = (float)s[i].total / 4;

        if (s[i].aggregate >= 75) {
            sprintf(s[i].grade, "DISTINCTION");
        } else if (s[i].aggregate >= 60 && s[i].aggregate < 75) {
            sprintf(s[i].grade, "FIRST DIVISION");
        } else if (s[i].aggregate >= 50 && s[i].aggregate < 60) {
            sprintf(s[i].grade, "SECOND DIVISION");
        } else if (s[i].aggregate >= 40 && s[i].aggregate < 50) {
            sprintf(s[i].grade, "THIRD DIVISION");
        } else {
            sprintf(s[i].grade, "FAIL");
        }
    }

    for (int i = 0; i < n; i++) {
        printf("\n\nDetails of student %d:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Marks in Python: %d\n", s[i].python);
        printf("Marks in C Programming: %d\n", s[i].cprog);
        printf("Marks in Mathematics: %d\n", s[i].maths);
        printf("Marks in Physics: %d\n", s[i].physics);
        printf("Total marks: %d\n", s[i].total);
        printf("Aggregate: %.2f\n", s[i].aggregate);
        printf("Grade: %s\n", s[i].grade);
    }

    return 0;
}
//output:
Enter the number of students: 2

Enter the name of student 1: John
Enter the marks in python for student 1: 85
Enter the marks in c programming for student 1: 80
Enter the marks in Mathematics for student 1: 90
Enter the marks in Physics for student 1: 87

Enter the name of student 2: Mary
Enter the marks in python for student 2: 75
Enter the marks in c programming for student 2: 68
Enter the marks in Mathematics for student 2: 80
Enter the marks in Physics for student 2: 72


Details of student 1:
Name: John
Marks in Python: 85
Marks in C Programming: 80
Marks in Mathematics: 90
Marks in Physics: 87
Total marks: 342
Aggregate: 85.50
Grade: DISTINCTION


Details of student 2:
Name: Mary
Marks in Python: 75
Marks in C Programming: 68
Marks in Mathematics: 80
Marks in Physics: 72
Total marks: 295
Aggregate: 73.75
Grade: FIRST DIVISION//


