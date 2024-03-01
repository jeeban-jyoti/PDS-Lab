#include <stdio.h>

int main(){
    int a = 5;
    int b = (1 || 4) && 8;
    printf("%d\n", b);
    return 0;
}