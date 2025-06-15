#include <stdio.h>
void viewHistory()
{
    FILE *file = fopen("history.txt", "r"); // Open in read mode
    if (file == NULL)
    {
        printf("No history found.\n");
        return;
    }

    char line[100];
    printf("\n------ Calculation History ------\n");
    while (fgets(line, sizeof(line), file))
    {
        printf("%s", line); // Print each line from the file
    }
    fclose(file);
    printf("------ End of History ------\n");
}
int main()
{
    
}