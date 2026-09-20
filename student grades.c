#include <stdio.h>

int main() {
	int i;
    float marks[5];
    float total = 0, percentage;
    char grade;

    printf("Enter marks for 5 subjects:\n");

    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        total += marks[i];
    }

    percentage = total / 5;

    if (percentage >= 90) {
        grade = 'A';
    }
    else if (percentage >= 80) {
        grade = 'B';
    }
    else if (percentage >= 70) {
        grade = 'C';
    }
    else if (percentage >= 60) {
        grade = 'D';
    }
    else if (percentage >= 50) {
        grade = 'E';
    }
    else {
        grade = 'F';
    }

    printf("\n----- Student Result -----\n");
    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
