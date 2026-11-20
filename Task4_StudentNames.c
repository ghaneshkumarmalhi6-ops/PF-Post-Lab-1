#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][100];
    char copy[100];
    char ch;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        names[i][strcspn(names[i], "\n")] = '\0';
    }

    printf("\nAll Student Names:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);
    }

    printf("\nName Lengths:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%s = %d\n", names[i], strlen(names[i]));
    }

    strcpy(copy, names[0]);

    printf("\nCopied First Student Name: %s\n", copy);

    printf("\nEnter character to search: ");
    scanf(" %c", &ch);

    for (i = 0; i < 5; i++)
    {
        if (strchr(names[i], ch) != NULL)
        {
            printf("%s: Character Found\n", names[i]);
        }
        else
        {
            printf("%s: Character Not Found\n", names[i]);
        }
    }

    return 0;
}
