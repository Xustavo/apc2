#include <stdio.h>
#include <stdlib.h>

typedef struct car {
    char name[20];
    char brand[20];
    float km;
    float price;
} carro;

void dados_carro(carro *dados);
void carros_da_concessionaria(carro *concessionaria, int quantidade);
void dados_do_carro(carro dados);

int main() {
    carro *concessionaria;
    int quantidade, i;

    printf("Insira a quantidade de carros que sua concessionária possui: ");
    scanf("%d", &quantidade);

    concessionaria = (carro *)malloc(sizeof(carro) * quantidade);
    if (concessionaria == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1; 
    }

    for (i = 0; i < quantidade; i++) {
        printf("\nPreencha os dados do %d° carro:\n", i + 1);
        dados_carro(&concessionaria[i]); 
    }

    carros_da_concessionaria(concessionaria, quantidade);

    free(concessionaria);

    return 0;
}

void dados_carro(carro *dados) {
    printf("Nome do carro: ");
    scanf("%s", dados->name);
    printf("Marca do carro: ");
    scanf("%s", dados->brand);
    printf("Km's rodados com o carro: ");
    scanf("%f", &dados->km);
    printf("Preço da Fipe do carro: ");
    scanf("%f", &dados->price);
}

void carros_da_concessionaria(carro *concessionaria, int quantidade) {
    int i;

    printf("\nCarros da sua concessionária:\n");
    for (i = 0; i < quantidade; i++) {
        dados_do_carro(concessionaria[i]);
    }
}

void dados_do_carro(carro dados) {
    printf("\nNome: %s", dados.name);
    printf("\nMarca: %s", dados.brand);
    printf("\nKm's rodados: %.2f", dados.km);
    printf("\nPreço: %.2f\n", dados.price);
}