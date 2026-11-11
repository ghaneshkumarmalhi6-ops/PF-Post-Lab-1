#include <stdio.h>

int deposit(int balance, int amount) {
    return balance + amount;
}

int withdraw(int balance, int amount) {
    return balance - amount;
}

int processTransaction(int balance, int amount, int (*op)(int, int)) {
    return op(balance, amount);
}

int main() {
    int account_balance = 50000;
    int transaction_amount = 10000;

    printf("--- Task 6: Passing Function Pointers as Arguments ---\n");
    printf("Current Balance: %d\n\n", account_balance);

    int new_bal1 = processTransaction(account_balance, transaction_amount, deposit);
    printf("Executed Deposit: New Balance = %d\n", new_bal1);

    int new_bal2 = processTransaction(account_balance, transaction_amount, withdraw);
    printf("Executed Withdrawal: New Balance = %d\n", new_bal2);

    return 0;
}
