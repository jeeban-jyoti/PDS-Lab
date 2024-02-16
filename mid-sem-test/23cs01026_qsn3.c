#include <stdio.h>

int main(){
    float x, y, r, x1, y1;
    printf("Enter the x and y coordinate of the center of the circle, respectively: ");
    scanf("%f%f", &x, &y);
    printf("Enter radius of the circle: ");
    scanf("%f", &r);
    printf("Enter the x and y coordinate of the point, respectively: ");
    scanf("%f%f", &x1, &y1);

    if((x-x1)*(x-x1) + (y-y1)*(y-y1) < r*r)
        printf("Given point lies inside the circle.\n");
    else if((x-x1)*(x-x1) + (y-y1)*(y-y1) == r*r)
        printf("Given point lies on the circle.\n");
    else
        printf("Given point lies outside the circle.\n");
    return 0;
}