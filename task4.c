#include <stdio.h>

int calculateTotal(int *arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += *(arr + i);
    }
    return total;
}

int main() {
    int branch1[3] = {15000, 23000, 32000};
    int branch2[4] = {12000, 21000, 27000, 35000};

    printf("--- Task 4: Passing Arrays to calculateTotal() ---\n");
    
    int total1 = calculateTotal(branch1, 3);
    int total2 = calculateTotal(branch2, 4);

    printf("Branch 1 Total Balance: %d\n", total1);
    printf("Branch 2 Total Balance: %d\n", total2);

    return 0;
}
