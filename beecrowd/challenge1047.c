#include <stdio.h>

int main() {
    int comecoHora, fimHora, comecoMinuto, fimMinuto;
    scanf("%d %d %d %d", &comecoHora, &comecoMinuto, &fimHora, &fimMinuto);

    if (comecoHora < 0 || comecoHora >= 24 || fimHora < 0 || fimHora >= 24 ||
        comecoMinuto < 0 || comecoMinuto >= 60 || fimMinuto < 0 || fimMinuto >= 60) {
        return 1;
    }

    int startMinutes = comecoHora * 60 + comecoMinuto;
    int endMinutes = fimHora * 60 + fimMinuto;

    int durationMinutes;
    if (endMinutes >= startMinutes) {
        durationMinutes = endMinutes - startMinutes;
    } else {
        durationMinutes = (24 * 60) - startMinutes + endMinutes;
    }

    int durationHoras = durationMinutes / 60;
    int durationMinutos = durationMinutes % 60;

    if (comecoHora == fimHora && comecoMinuto == fimMinuto) {
        durationHoras = 24;
        durationMinutos = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHoras, durationMinutos);

    return 0;
}
