#include <stdio.h>

int deposit(int balance, int amount) {
    return balance + amount;
}

int withdraw(int balance, int amount) {
    return balance - amount;
}

int main() {
    int current_balance = 25000;
    int amount = 5000;

    int (*operation)(int, int);

    printf("--- Task 5: Function Pointers ---\n");
    printf("Initial Balance: %d, Transaction Amount: %d\n\n", current_balance, amount);

    operation = deposit;
    int after_deposit = operation(current_balance, amount);
    printf("After Deposit: %d\n", after_deposit);

    operation = withdraw;
    int after_withdraw = operation(current_balance, amount);
    printf("After Withdrawal: %d\n", after_withdraw);

    return 0;
}
