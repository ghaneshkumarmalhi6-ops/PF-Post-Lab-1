#include <stdio.h>

int main() {
    float marks, income;

    printf("Enter student marks percentage: ");
    scanf("%f", &marks);

    printf("Enter family income: ");
    scanf("%f", &income);

    if (marks >= 80 || income < 50000) {
        printf("Qualified for Scholarship\n");
    } else {
        printf("Not Qualified for Scholarship\n");
    }

    return 0;
}
