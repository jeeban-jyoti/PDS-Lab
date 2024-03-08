#include <stdio.h>
#include <string.h>

int main(){
    char text[101], sub_text[101];

    printf("Enter a string: ");
    fgets(text, 100, stdin);

    printf("Enter the substring to be searched: ");
    fgets(sub_text, 100, stdin);

    int n = strlen(text), m = strlen(sub_text), i = 0, j = 1, k = 0;
    while(i < n){
        if(text[i] == sub_text[0]){
            while(j < m){
                printf("%c -- %c\n", text[j], sub_text[j]);
                if(text[i + j] != sub_text[j])
                    break;
                j++;
            }
            if(j == m-1){
                printf("The substring exists in the string.\n");
                return 0;
            }
            j = 1;
        }

        i++;
    }

    printf("The substring does not exists in the string.\n");
    return 0;
}