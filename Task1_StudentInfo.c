#include <stdio.h>
#include <string.h>

int main()
{
    char name[100], copy[150];

    printf("Enter student full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("\nOriginal Name: %s", name);

    printf("\nName Length: %d", strlen(name));

    strcpy(copy, name);

    strcat(copy, " - FAST University");

    printf("\nModified Name: %s", copy);

    return 0;
}
