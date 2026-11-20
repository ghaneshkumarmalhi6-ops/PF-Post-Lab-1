#include <stdio.h>

int main()
{
    FILE *fp;
    int obtained, total;
    int newObtained, newTotal;

    fp = fopen("marks.txt", "r+");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    fscanf(fp, "%d %d", &obtained, &total);

    printf("Existing Obtained Marks: %d\n", obtained);
    printf("Existing Total Marks: %d\n", total);

    printf("\nEnter updated obtained marks: ");
    scanf("%d", &newObtained);

    printf("Enter updated total marks: ");
    scanf("%d", &newTotal);

    rewind(fp);

    fprintf(fp, "%d %d", newObtained, newTotal);

    fclose(fp);

    fp = fopen("marks.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    fscanf(fp, "%d %d", &obtained, &total);

    printf("\nUpdated Student Record:\n");
    printf("Obtained Marks: %d\n", obtained);
    printf("Total Marks: %d\n", total);

    fclose(fp);

    return 0;
}
