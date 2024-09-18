#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    int power;
    int gods_killed;
    int deaths;
} god;

int main(){

    int n;
    scanf("%d", &n);

    if(n < 0 || n > 100) return 0;

    god creatures[n];
    
    for(int i = 0; i < n; i++){
        scanf("%100s %d %d %d", creatures[i].name, &creatures[i].power, &creatures[i].gods_killed, &creatures[i].deaths);
    }


    int index_maior = 0;

    for(int i = 1; i < n; i++) {
        if(creatures[i].power > creatures[index_maior].power){
            index_maior = i;
        } else if(creatures[i].power == creatures[index_maior].power){

            if(creatures[i].gods_killed > creatures[index_maior].gods_killed){
                index_maior = i;
            } else if(creatures[i].gods_killed == creatures[index_maior].gods_killed) {

                if(creatures[i].deaths < creatures[index_maior].deaths) {
                    index_maior = i;
                } else if(creatures[i].deaths == creatures[index_maior].deaths) {
                    
                    if(strcmp(creatures[i].name, creatures[index_maior].name) < 0){
                        index_maior = i;
                    }
                }
            }
        }
    }

    printf("%s\n", creatures[index_maior].name);


    return 0;
}