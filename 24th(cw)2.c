#include <stdio.h>
#include <stdlib.h>

// Define a structure for each student
struct student {
    int student_number;
    int grade;
};

// Define a function to determine the letter grade based on the numerical grade
char get_letter_grade(int grade) {
    if (grade >= 90) {
        return 'A';
    } else if (grade >= 78) {
        return 'B';
    } else if (grade >= 65) {
        return 'C';
    } else if (grade >= 50) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int n;

    // Ask the user for the number of students
    printf("Enter No. Students: ");
    scanf("%d", &n);

    // Create an array of students
    struct student *students = malloc(n * sizeof(struct student));

    // Ask the user to enter the student number and grade for each student
    for (int i = 0; i < n; i++) {
        printf("Enter student number and grade (separated by a space) for student %d: ", i + 1);
        scanf("%d %d", &students[i].student_number, &students[i].grade);
    }

    // Print out each student's information and letter grade
    int num_as = 0, num_bs = 0, num_cs = 0, num_ds = 0, num_fs = 0;
    for (int i = 0; i < n; i++) {
        printf("Student %d: Student Number: %d, Grade: %d, Letter Grade: %c\n", i + 1, students[i].student_number, students[i].grade, get_letter_grade(students[i].grade));
        
        // Count the number of As, Bs, Cs, Ds, and Fs
        switch (get_letter_grade(students[i].grade)) {
            case 'A':
                num_as++;
                break;
            case 'B':
                num_bs++;
                break;
            case 'C':
                num_cs++;
                break;
            case 'D':
                num_ds++;
                break;
            case 'F':
                num_fs++;
                break;
        }
    }

    // Print out the total number of As, Bs, Cs, Ds, and Fs
    printf("Total Number of A's: %d\n", num_as);
    printf("Total Number of B's: %d\n", num_bs);
    printf("Total Number of C's: %d\n", num_cs);
    printf("Total Number of D's: %d\n", num_ds);
    printf("Total Number of F's: %d\n", num_fs);

    // Free the memory used by the array of students
    free(students);

    return 0;
}
//output: Enter No. Students: 1
Enter student number and grade (separated by a space) for student 1: 123 87
Student 1: Student Number: 123, Grade: 87, Letter Grade: B
Total Number of A's: 0
Total Number of B's: 1
Total Number of C's: 0
Total Number of D's: 0
Total Number of F's: 0//

