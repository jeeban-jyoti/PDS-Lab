#include <stdio.h>

int main(){
    char text[101];
    printf("Input: ");
    fgets(text, 100, stdin);

    int n = 0;
    while(text[n] != '\0')
        n++;
    n--;
    for(int i = 0; i < n/2; i++){
        if(text[i] != text[n-1-i]){
            printf("String is not a palindrome.\n");
            return 0;
        }
    }
    printf("String is a palindrome.\n");
    return 0;
}