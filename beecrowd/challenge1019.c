#include <stdio.h>

int main(){

    int n; //time in seconds
    scanf("%d", &n);

    int hours = n/3600.0;
    int minutes = (n%3600)/60.0;
    int seconds = (n%3600)%60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}