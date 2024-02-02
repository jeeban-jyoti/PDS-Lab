#include <stdio.h>

int main(){
    int days;
    printf("enter the number of late days: ");
    scanf("%d", &days);

    if(days < 0)
        printf("%d is not a valid number of days\n", days);
    else if(days == 1)
        printf("Your fine amount is 1 Rupee as you have delayed the submission deadline by 1 day.\n");
    else if(days <= 5)
        printf("Your fine amount is 1 Rupee as you have delayed the submission deadline by %d days.\n", days);
    else if(days <= 10)
        printf("Your fine amount is 2 Rupee as you have delayed the submission deadline by %d days.\n", days);
    else if(days <= 30)
        printf("Your fine amount is 5 Rupee as you have delayed the submission deadline by %d days.\n", days);
    else
        printf("Your subscription is cancelled and fine amount is 5 Rupees as you have delayed the submission deadline by %d days.\n", days);
    

    return 0;
}