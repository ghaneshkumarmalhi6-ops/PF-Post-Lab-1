#include <stdio.h>

int main()
{
    FILE *fp;
    int id;
    float obtained, total, percentage;

    fp = fopen("result.txt", "w+");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter Student ID: ");
    scanf("%d", &id);

    printf("Enter obtained marks: ");
    scanf("%f", &obtained);

    printf("Enter total marks: ");
    scanf("%f", &total);

    percentage = (obtained / total) * 100;

    fprintf(fp, "%d %.2f %.2f %.2f",
            id, obtained, total, percentage);

    rewind(fp);

    fscanf(fp, "%d %f %f %f",
           &id, &obtained, &total, &percentage);

    printf("\nStudent Result:\n");
    printf("Student ID: %d\n", id);
    printf("Obtained Marks: %.2f\n", obtained);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    fclose(fp);

    return 0;
}
