#include <stdio.h>

int main() {

    int time; //time of the trip in hours
    int average; //average speed of the trip

    scanf("%d %d", &time, &average);

    //the car does 12km/l, so we need to know how many km he rode
    int km_traveled = average * time;
    double liters = km_traveled / 12.0;

    printf("%.3lf\n", liters);

    return 0;
}