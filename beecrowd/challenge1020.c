#include <stdio.h>

int main() {

    int n; //quantity of days
    scanf("%d", &n);

    int ano = n/365.0;
    int mes = (n%365)/30.0;
    int dia = (n%365)%30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}