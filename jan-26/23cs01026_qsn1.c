#include <stdio.h>

int main(){
    int input;
    printf("enter the number of your choice: ");
    scanf("%d", &input);

    if(input < 0)
        printf("entered number (%d) is negative\n", input);
    else if(input == 0)
        printf("entered number (%d) is zero\n", input);
    else
        printf("entered number (%d) is positive\n", input);

    return 0;
}