#include <stdio.h>

int main()
{
    FILE *fp;
    int account;
    float amount;

    printf("Enter account number: ");
    scanf("%d", &account);

    printf("Enter first transaction amount: ");
    scanf("%f", &amount);

    fp = fopen("bank.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    fprintf(fp, "%d %.2f\n", account, amount);

    fclose(fp);

    printf("\nEnter second transaction amount: ");
    scanf("%f", &amount);

    fp = fopen("bank.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    fprintf(fp, "%d %.2f\n", account, amount);

    fclose(fp);

    fp = fopen("bank.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("\nBank Transaction Records:\n");

    while (fscanf(fp, "%d %f", &account, &amount) == 2)
    {
        printf("Account Number: %d\n", account);
        printf("Transaction Amount: %.2f\n", amount);
    }

    fclose(fp);

    return 0;
}
