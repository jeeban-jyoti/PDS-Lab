#include <stdio.h>

void deleteElement(char arr[],  int k){
    while(k < 101){
        arr[k] = arr[k+1];
        k++;
    }
}

int main(){
    char text[101];
    printf("Enter a string: ");
    fgets(text, 100, stdin);

    int i = 0, count = 0;
    while(text[i] != '\0'){
        if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')){
            i++;
            continue;
        }
        deleteElement(text, i);
    }
    printf("%s\n", text);
    return 0;
}