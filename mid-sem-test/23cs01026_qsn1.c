#include <stdio.h>
#define PI 3.14

int main(){
    float r, h;
    printf("Radius: ");
    scanf("%f", &r);
    printf("Height: ");
    scanf("%f", &h);

    //checking if any one of radius or height is negative as they cannot be negative.
    if(r < 0 || h < 0){
        printf("Given radius or height is not valid!\n");
        return 0;
    }

    printf("Volume of the cylinder is = %.2lf\n", (PI * r * r * h));    // volume = pi * r * r * h
    printf("Surface area of the cylinder is = %.2lf\n", (2 * PI * r * h));   //// surface area = 2 * pi * r * h
    return 0;
}