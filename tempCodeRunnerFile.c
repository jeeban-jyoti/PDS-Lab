#include <stdio.h>
int main(){
    char str[100],n=0;
    printf("\n Enter a string:");
    fgets(str,100,stdin);

    while(str[n]!='\0')
    {
        n++;
    }
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1]){
            printf("Not Palindrome...\n");
            return 0;
        }
    }
    
    printf("\n Not pallindrom");
    return 0;
}