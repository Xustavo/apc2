#include <stdio.h>

int main() {

    int x; //km
    float y; //liters

    scanf("%i %f", &x, &y);

    double consumption = x/y;

    printf("%.3lf km/l\n", consumption);
    return 0;
}