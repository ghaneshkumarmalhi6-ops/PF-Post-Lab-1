#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    float obtained, total, percentage;

    printf("Enter student name: ");
    scanf(" %99[^\n]", name);

    printf("Enter obtained marks: ");
    scanf("%f", &obtained);

    printf("Enter total marks: ");
    scanf("%f", &total);

    percentage = (obtained / total) * 100;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    fprintf(fp, "%s\n%.2f %.2f %.2f",
            name, obtained, total, percentage);

    fclose(fp);

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    fscanf(fp, " %99[^\n]", name);
    fscanf(fp, "%f %f %f", &obtained, &total, &percentage);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", name);
    printf("Obtained Marks: %.2f\n", obtained);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    fclose(fp);

    return 0;
}
