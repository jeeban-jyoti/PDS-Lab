#include <stdio.h>

int main(){
    // Part (a)
    printf("part (a)\n");
    int a = 1, b = 12, c = 123, d = 1234, e = 12345;
    printf("%.5d\n", a);
    printf("%.5d\n", b);
    printf("%.5d\n", c);
    printf("%.5d\n", d);
    printf("%.5d\n", e);

    //Part (b)
    printf("\npart (b)\n");
    char p = 'a', q = 'b', r = 'c', s = 'd', t = 'e';
    printf("%5.c\n", p);
    printf("%4.c%c\n", p, q);
    printf("%3.c%c%c\n", p, q, r);
    printf("%2.c%c%c%c\n", p, q, r, s);
    printf("%1.c%c%c%c%c\n", p, q, r, s, t);

    return 0;
}