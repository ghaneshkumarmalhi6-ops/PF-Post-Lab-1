#include <stdio.h>

int main() {
    int balance[5] = {15000, 25000, 18000, 32000, 12000};
    int *ptr = balance;

    printf("--- Task 1: Customer Balances & Addresses ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Customer %d: Balance = %d, Address = %p\n", i + 1, *(ptr + i), (void*)(ptr + i));
    }

    int customer_index = 1;
    printf("\nUpdating Customer 2 balance via pointer dereferencing...\n");
    *(ptr + customer_index) = 30000;

    printf("Updated Customer 2: Balance = %d, Address = %p\n", *(ptr + customer_index), (void*)(ptr + customer_index));

    return 0;
}
