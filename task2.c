#include <stdio.h>

int main() {
    int transactions[2][3] = {
        {120000, 150000, 180000},
        {200000, 170000, 220000}
    };

    int (*ptr)[3] = transactions;

    printf("--- Task 2: 2D Array with Pointer ---\n");
    for (int i = 0; i < 2; i++) {
        printf("\nBranch %d (Row Address: %p):\n", i + 1, (void*)(ptr + i));
        int total = 0;
        for (int j = 0; j < 3; j++) {
            int amount = *(*(ptr + i) + j);
            printf("  Month %d Transaction: %d\n", j + 1, amount);
            total += amount;
        }
        printf("  Total Transactions for Branch %d = %d\n", i + 1, total);
    }

    return 0;
}
