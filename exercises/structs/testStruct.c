#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    char brand[30];
    float km;
    float price;
} car;

int main(){

    car first;

    strcpy(first.name, "Equinox");
    strcpy(first.brand, "GM");
    first.km = 10.958;
    first.price = 26.990;

    printf("This is your car: \n");
    printf("Name: %s\n", first.name);
    printf("Brand: %s\n", first.brand);
    printf("Kilometers: %.3f\n", first.km);
    printf("Price: $%.3f\n", first.price);

    return 0;
}