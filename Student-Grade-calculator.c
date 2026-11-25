
#include <stdio.h>

int main()
{
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("===== STUDENT GRADE CALCULATOR =====\n");

    printf("\nEnter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter marks in Subject 1: ");
    scanf("%d", &m1);

    printf("Enter marks in Subject 2: ");
    scanf("%d", &m2);

    printf("Enter marks in Subject 3: ");
    scanf("%d", &m3);

    printf("Enter marks in Subject 4: ");
    scanf("%d", &m4);

    printf("Enter marks in Subject 5: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;

    percentage = (total / 500.0) * 100;

    printf("\n===== STUDENT RESULT =====\n");

    printf("Student Name: %s\n", name);
    printf("Total Marks: %d/500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade: A+");

    else if (percentage >= 80)
        printf("Grade: A");

    else if (percentage >= 70)
        printf("Grade: B");

    else if (percentage >= 60)
        printf("Grade: C");

    else if (percentage >= 40)
        printf("Grade: D");

    else
        printf("Grade: F");

    if (percentage >= 40)
        printf("\nResult: PASS");
    else
        printf("\nResult: FAIL");

    return 0;
}
