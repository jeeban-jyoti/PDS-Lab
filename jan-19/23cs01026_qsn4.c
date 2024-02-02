#include <stdio.h>

int main(){
    int year;
    printf("enter year: ");
    scanf("%d", &year);

    int check = (year % 4 == 0) ? printf("yes %d is a leap year\n", year) : printf("no %d is not a leap year\n", year);
    return 0;
}