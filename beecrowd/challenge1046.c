#include <stdio.h>

int main(){

    int comeco, fim, count1 = 0, count2 = 0, tempo;
    scanf("%d %d", &comeco, &fim);

    if(comeco < 0 || comeco > 24 || fim < 0 || fim > 24){
        return 0;
    }

    if(comeco < fim) {
        tempo = fim - comeco;
    } else {
        for(int i = comeco; i < 24; i++){
        count1++;
    }
        for(int j = fim; j > 0; j--){
        count2++;
   }
   tempo = count1 + count2;
}

    printf("O JOGO DUROU %d HORA(S)\n", tempo);

    return 0;
}