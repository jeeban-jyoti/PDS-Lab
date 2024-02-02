#include <stdio.h>

int main(){
    int a, b, c;
    printf("enter three numbers of your choice: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b){
        if(c > a)
            printf("%d is the largest number out of the three given numbers\n", c);
        else
            printf("%d is the largest number out of the three given numbers\n", a);
    }else{
        if(c > b)
            printf("%d is the largest number out of the three given numbers\n", c);
        else
            printf("%d is the largest number out of the three given numbers\n", b);
    }
    
    return 0;
}