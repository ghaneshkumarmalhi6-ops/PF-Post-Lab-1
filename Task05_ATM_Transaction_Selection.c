#include <stdio.h>

int main() {
    int operation, accountType;

    printf("ATM Operations:\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("4. PIN Change\n");

    printf("Enter operation (1-4): ");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            printf("Balance Inquiry selected.\n");
            printf("Account Type:\n");
            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("Enter account type (1-2): ");
            scanf("%d", &accountType);

            switch (accountType) {
                case 1:
                    printf("Operation: Balance Inquiry\n");
                    printf("Account: Savings Account\n");
                    break;
                case 2:
                    printf("Operation: Balance Inquiry\n");
                    printf("Account: Current Account\n");
                    break;
                default:
                    printf("Invalid account type.\n");
            }
            break;

        case 2:
            printf("Cash Withdrawal selected.\n");
            printf("Account Type:\n");
            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("Enter account type (1-2): ");
            scanf("%d", &accountType);

            switch (accountType) {
                case 1:
                    printf("Operation: Cash Withdrawal\n");
                    printf("Account: Savings Account\n");
                    break;
                case 2:
                    printf("Operation: Cash Withdrawal\n");
                    printf("Account: Current Account\n");
                    break;
                default:
                    printf("Invalid account type.\n");
            }
            break;

        case 3:
            printf("Cash Deposit selected.\n");
            printf("Account Type:\n");
            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("Enter account type (1-2): ");
            scanf("%d", &accountType);

            switch (accountType) {
                case 1:
                    printf("Operation: Cash Deposit\n");
                    printf("Account: Savings Account\n");
                    break;
                case 2:
                    printf("Operation: Cash Deposit\n");
                    printf("Account: Current Account\n");
                    break;
                default:
                    printf("Invalid account type.\n");
            }
            break;

        case 4:
            printf("PIN Change selected.\n");
            printf("Account Type:\n");
            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("Enter account type (1-2): ");
            scanf("%d", &accountType);

            switch (accountType) {
                case 1:
                    printf("Operation: PIN Change\n");
                    printf("Account: Savings Account\n");
                    break;
                case 2:
                    printf("Operation: PIN Change\n");
                    printf("Account: Current Account\n");
                    break;
                default:
                    printf("Invalid account type.\n");
            }
            break;

        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
