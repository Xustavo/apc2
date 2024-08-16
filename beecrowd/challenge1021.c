#include <stdio.h>
#include <math.h>

int main(){

    float n;//quantity of money
    scanf("%f", &n);

    if(n < 0 || n > 1000000.00){
    return 0;
    }

    int m;
    m = round(n * 100);

    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};
    int note_count[6] = {0};
    int coin_count[6]= {0};


    for(int i = 0; i < 6; i++) {
       note_count[i] = m/notes[i];
       m %= notes[i];
    }

    for(int j = 0; j < 6; j++) {
        coin_count[j] = m/coins[j];
        m %= coins[j];
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", note_count[0]);
    printf("%d nota(s) de R$ 50.00\n", note_count[1]);
    printf("%d nota(s) de R$ 20.00\n", note_count[2]);
    printf("%d nota(s) de R$ 10.00\n", note_count[3]);
    printf("%d nota(s) de R$ 5.00\n", note_count[4]);
    printf("%d nota(s) de R$ 2.00\n", note_count[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", coin_count[0]);
    printf("%d moeda(s) de R$ 0.50\n", coin_count[1]);
    printf("%d moeda(s) de R$ 0.25\n", coin_count[2]);
    printf("%d moeda(s) de R$ 0.10\n", coin_count[3]);
    printf("%d moeda(s) de R$ 0.05\n", coin_count[4]);
    printf("%d moeda(s) de R$ 0.01\n", coin_count[5]);

    return 0;
}