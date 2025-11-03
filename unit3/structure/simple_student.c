#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    int i, topIndex = 0;

    // Input for 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // Reads string with spaces

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    // Display student with highest marks
    printf("\n--- Student with Highest Marks ---\n");
    printf("Roll No: %d\n", students[topIndex].rollNo);
    printf("Name: %s\n", students[topIndex].name);
    printf("Marks: %.2f\n", students[topIndex].marks);

    return 0;
}
