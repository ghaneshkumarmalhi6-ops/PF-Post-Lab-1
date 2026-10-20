
#include <stdio.h>

int main() {
    int marks[4][2];
    int i, j, total;
    int highestMid, lowestMid;
    int highestFinal, lowestFinal;
    int highestOverall, lowestOverall;
    int sumMid = 0, sumFinal = 0;

    for (i = 0; i < 4; i++) {
        printf("Enter Mid and Final marks of Student %d: ", i + 1);
        scanf("%d %d", &marks[i][0], &marks[i][1]);
    }

    highestMid = lowestMid = marks[0][0];
    highestFinal = lowestFinal = marks[0][1];
    highestOverall = lowestOverall = marks[0][0];

    for (i = 0; i < 4; i++) {
        total = marks[i][0] + marks[i][1];

        printf("Student %d Total Marks = %d\n", i + 1, total);

        if (marks[i][0] > highestMid)
            highestMid = marks[i][0];

        if (marks[i][0] < lowestMid)
            lowestMid = marks[i][0];

        if (marks[i][1] > highestFinal)
            highestFinal = marks[i][1];

        if (marks[i][1] < lowestFinal)
            lowestFinal = marks[i][1];

        for (j = 0; j < 2; j++) {
            if (marks[i][j] > highestOverall)
                highestOverall = marks[i][j];

            if (marks[i][j] < lowestOverall)
                lowestOverall = marks[i][j];
        }

        sumMid += marks[i][0];
        sumFinal += marks[i][1];
    }

    printf("\nHighest Mid Marks = %d\n", highestMid);
    printf("Highest Final Marks = %d\n", highestFinal);
    printf("Highest Overall Marks = %d\n", highestOverall);

    printf("\nLowest Mid Marks = %d\n", lowestMid);
    printf("Lowest Final Marks = %d\n", lowestFinal);
    printf("Lowest Overall Marks = %d\n", lowestOverall);

    printf("\nAverage Mid Marks = %.2f\n", sumMid / 4.0);
    printf("Average Final Marks = %.2f\n", sumFinal / 4.0);

    return 0;
}
