#include <stdio.h>

int main() {
    int n, i, score, sum = 0;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter %d student scores (one per line):\n", n);
    for(i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &score);
        sum += score;
    }

    average = (float)sum / n;

    printf("\nNumber of students = %d\n", n);
    printf("Average score = %.2f\n", average);

    return 0;
}
