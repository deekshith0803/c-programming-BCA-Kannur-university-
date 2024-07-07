#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[] = "File.txt";
    char text[100];

    // Open file for writing
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file %s for writing.\n", filename);
        return 1;
    }

    // Write some text to the file
    fprintf(fp, "This is some text stored in the file.\n");
    fprintf(fp, "hello world.\n");

    // Close the file
    fclose(fp);

    // Open file for reading
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file %s for reading.\n", filename);
        return 1;
    }

    // Display contents of the file
    printf("Contents of file %s:\n", filename);
    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }

    // Close the file
    fclose(fp);

    return 0;
}
