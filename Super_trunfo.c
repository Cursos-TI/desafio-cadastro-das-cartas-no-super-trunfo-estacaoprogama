#include <stdio.h>

int main() {
    char estado, carta[3], cidade[20]; // Declara variaveis do tipo char
    int populacao, pontosturisticos; // Declara variaveis do tipo int
    float area, pib; // Declara variaveis do tipo float

    printf("Cadastro das Cartas\n");

    printf("Carta 1: \n");

    printf("Digite uma letra de A a H referente ao Estado: \n");
    scanf("%c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &carta);

    printf("Digite a Cidade:\n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%f", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número do pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

 
}