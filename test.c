#include <stdio.h>
int main(){
    char str[100];
    int n = 0;
    printf("Enter a string:");
    fgets(str,100,stdin);

    while(str[n]!='\0')
    {
        n++;
    }
    n--;
    for(int i = 0; i < n/2; i++)
    {
        if(str[i] != str[n-i-1]){
            printf("Not Palindrome...\n");
            return 0;
        }
    }
    
    printf("Pallindrom\n");
    return 0;
}