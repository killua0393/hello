#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char fname[20];
    char mname[20];
    char lname[20];
    int rollno;
    char branch[10];
    float cgpa;
};

int main() {
    int n, i;
    struct student *students;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    students = (struct student *) malloc(n * sizeof(struct student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter the information for student %d:\n", i + 1);

        printf("First Name: ");
        scanf("%s", students[i].fname);

        printf("Middle Name: ");
        scanf("%s", students[i].mname);

        printf("Last Name: ");
        scanf("%s", students[i].lname);

        printf("Roll No.: ");
        scanf("%d", &students[i].rollno);

        printf("Branch: ");
        scanf("%s", students[i].branch);

        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }

    // Display information of students whose CGPA > 9
    printf("\nStudents with CGPA > 9:\n");
    for (i = 0; i < n; i++) {
        if (students[i].cgpa > 9.0) {
            printf("%s %s %s, Roll No.: %d, Branch: %s, CGPA: %.2f\n", students[i].fname, students[i].mname, students[i].lname, students[i].rollno, students[i].branch, students[i].cgpa);
        }
    }

    // Sort the students in ascending order of their CGPA
    for (i = 0; i < n - 1; i++) {
        int j;
        for (j = i + 1; j < n; j++) {
            if (students[i].cgpa > students[j].cgpa) {
                struct student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Display information of students in ascending order of their CGPA
    printf("\nStudents in ascending order of their CGPA:\n");
    for (i = 0; i < n; i++) {
        printf("%s %s %s, Roll No.: %d, Branch: %s, CGPA: %.2f\n", students[i].fname, students[i].mname, students[i].lname, students[i].rollno, students[i].branch, students[i].cgpa);
    }

    free(students);

    return 0;
}
