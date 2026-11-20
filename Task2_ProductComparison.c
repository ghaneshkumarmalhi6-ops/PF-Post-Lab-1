#include <stdio.h>
#include <string.h>

int main()
{
    char product1[100], product2[100];

    printf("Enter first product name: ");
    fgets(product1, sizeof(product1), stdin);
    product1[strcspn(product1, "\n")] = '\0';

    printf("Enter second product name: ");
    fgets(product2, sizeof(product2), stdin);
    product2[strcspn(product2, "\n")] = '\0';

    if (strcmp(product1, product2) == 0)
    {
        printf("\nBoth products are identical.");
    }
    else
    {
        printf("\nBoth products are different.");
    }

    printf("\nLength of first product: %d", strlen(product1));
    printf("\nLength of second product: %d", strlen(product2));

    return 0;
}
