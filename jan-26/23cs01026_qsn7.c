#include <stdio.h>

int main()
{
    float attendance_weight, m;
    int final_score, n, k;

    printf("Marks obtained: ");
    scanf("%f", &m);
    printf("Attended Classes: ");
    scanf("%d", &n);
    printf("Total Conducted Classes: ");
    scanf("%d", &k);

    if (n > k)
    {
        printf("Attended classes cannot be more than total classes conducted.\n");
        return 0;
    }
    else if (!(m >= 0 && m <= 100))
    {
        printf("marks = %f", m);
        printf("Marks obtained cannot be less than 0 or greater than 100.\n");
        return 0;
    }

    attendance_weight = (float)n / (float)k;
    final_score = m * attendance_weight;

    if (final_score >= 90)
        printf("Final Score = %d\nGrade is = Ex\n", final_score);
    else if (final_score >= 80)
        printf("Final Score = %d\nGrade is = A\n", final_score);
    else if (final_score >= 70)
        printf("Final Score = %d\nGrade is = B\n", final_score);
    else if (final_score >= 60)
        printf("Final Score = %d\nGrade is = C\n", final_score);
    else if (final_score >= 50)
        printf("Final Score = %d\nGrade is = D\n", final_score);
    else if (final_score >= 40)
        printf("Final Score = %d\nGrade is = P\n", final_score);
    else
        printf("Final Score = %d\nGrade is = F\n", final_score);

    return 0;
}