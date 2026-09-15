#include <stdio.h>

int main() {
    char fullName[100];
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch);

    // Clear input buffer before using fgets
    getchar();

    printf("Enter your full name (including spaces): ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Entered Character: %c\n", ch);
    printf("Entered Name: ");
    puts(fullName);

    return 0;
}
