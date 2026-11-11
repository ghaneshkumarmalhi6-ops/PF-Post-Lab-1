#include <stdio.h>

int main() {
    int branch1[3] = {15000, 23000, 32000};
    int branch2[4] = {12000, 21000, 27000, 35000};

    int *branch_ptrs[2] = {branch1, branch2};
    int sizes[2] = {3, 4};

    printf("--- Task 3: Array of Pointers ---\n");
    for (int i = 0; i < 2; i++) {
        printf("\nBranch %d Account Balances:\n", i + 1);
        int total = 0;
        for (int j = 0; j < sizes[i]; j++) {
            int val = *(branch_ptrs[i] + j);
            total += val;
            printf("  Account %d: Value = %d, Address = %p\n", j + 1, val, (void*)(branch_ptrs[i] + j));
        }
        printf("Total Balance for Branch %d = %d\n", i + 1, total);
    }

    return 0;
}
