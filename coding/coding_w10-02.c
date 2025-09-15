#include <stdio.h>

int main() {
    float scores[3][3];  // [นักเรียน][วิชา] => 3 คน 3 วิชา
    float sum_math = 0, sum_phy = 0, sum_chem = 0;
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("Math: ");     scanf("%f", &scores[i][0]);
        printf("Physics: ");  scanf("%f", &scores[i][1]);
        printf("Chemistry: ");scanf("%f", &scores[i][2]);

        sum_math += scores[i][0];
        sum_phy  += scores[i][1];
        sum_chem += scores[i][2];
    }

    // แสดงตารางคะแนน
    printf("\nScore Table:\n");
    printf("Student  Math   Physics Chemistry\n");
    for(i = 0; i < 3; i++) {
        printf("%-8d%-7.2f%-8.2f%.2f\n", i + 1, scores[i][0], scores[i][1], scores[i][2]);
    }

    // ค่าเฉลี่ยแต่ละวิชา
    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", sum_math / 3);
    printf("Physics: %.2f\n", sum_phy / 3);
    printf("Chemistry: %.2f\n", sum_chem / 3);

    return 0;
}
