#include <stdio.h>

int main(){
    //Part (a)
    int x = 2147483647 + 1;
    /*  OUTPUT:- warning: overflow in expression; result is -2147483648 with type 'int' [-Winteger-overflow]
        int x = 2147483647 + 1;
                        ^
        1 warning generated.*/
    
    //Part (b)
    printf("\nPart (b)\n");
    int intVar = 2147483647;
    long int longIntVar = 9223372036854775807;
    long long int longLongIntVar = 9223372036854775807;
    short int shortIntVar = 32767;

    printf("Max value of normal Int: %d\n", intVar);
    printf("Max value of long Int: %ld\n", longIntVar);
    printf("Max value of long Long Int: %lld\n", longLongIntVar);
    printf("Max value of short Int: %d\n", shortIntVar);

    //Part (c)
    printf("\nPart (c)\n");
    int a = -2147483648, b = 2147483647;
    short int c = -32768, d = 32767;
    long int e = -2147483648, f = 2147483647;
    long long int g = -9223372036854775807, h = 9223372036854775807; 

    printf("min value of int: %d and max value of int: %d\n", a, b);
    printf("min value of short int: %d and max value of short int: %d\n", c, d);
    printf("min value of long int: %ld and max value of long int: %ld\n", e, f);
    printf("min value of long long int: %lld and max value of long long int: %lld\n", g, h);
    return 0;
}