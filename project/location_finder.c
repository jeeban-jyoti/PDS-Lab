#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char output[100];
    char input[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from the input
    input[strcspn(input, "\n")] = '\0';

    // Construct the command to execute the Python script with the input argument
    char command[200];
    sprintf(command, "python3 test.py \"%s\"", input);

    // Open a pipe to execute the command and read its output
    fp = popen(command, "r");
    if (fp == NULL) {
        fprintf(stderr, "Failed to open pipe.\n");
        return 1;
    }

    // Read the output of the Python script
    while (fgets(output, sizeof(output), fp) != NULL) {
        printf("%s", output);
    }

    // Close the pipe
    pclose(fp);

    return 0;
}
