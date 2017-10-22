#include <stdio.h>

int main(void)
{
    int numberOfGrades, grade;
    int gradeTotal = 0;
    int failureCount = 0;
    float average;

    printf("How many grades will you be entering? ");
    scanf("%i", &numberOfGrades);

    for (int i = 1; i <= numberOfGrades; ++i)
    {
        printf("Enter grade #%i: ", i);
        scanf("%i", &grade);

        gradeTotal += grade;

        // 65 is considering a failing grade here
        if (grade < 65)
        {
            ++failureCount;
        }
    }

    average = (float) gradeTotal / numberOfGrades;

    printf("\nGrade average = %.2f\n", average);
    printf("Number of failures = %i\n", failureCount);

    return 0;
}