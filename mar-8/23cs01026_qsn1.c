#include <stdio.h>

int main(){
    char text[101], el;
    printf("Enter a string: ");
    fgets(text, 100, stdin);

    printf("Enter a character: ");
    scanf("%c", &el);

    int i = 0, count = 0;
    while(text[i] != '\0'){
        if(text[i] == el)
            count++;
        i++;
    }

    printf("Frequency of l is: %d\n", count);

    return 0;
}