#include <stdio.h>
#include <string.h>

void reverseArray(char * arr, int start, int end) {
    if (start >= end)
        return;

    char temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
}

int main() {
    char text[101];
    printf("Enter a string: ");
    fgets(text, 100, stdin);
    reverseArray(text, 0, strlen(text)-1);

    printf("Reversed String: %s\n", text);

    return 0;
}