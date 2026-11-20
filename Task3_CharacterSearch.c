#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200], copy[200];
    char ch;
    char *ptr;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    ptr = strchr(sentence, ch);

    if (ptr != NULL)
    {
        printf("\nCharacter found at position: %d",
               (int)(ptr - sentence) + 1);
    }
    else
    {
        printf("\nCharacter not found.");
    }

    strcpy(copy, sentence);

    printf("\nCopied Sentence: %s", copy);

    return 0;
}
