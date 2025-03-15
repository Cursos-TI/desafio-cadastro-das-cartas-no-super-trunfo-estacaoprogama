#include <stdio.h>

int main() {
    char estado1;
    char  estado2;
    char codigocarta1[4];
    char codigocarta2[4];
    char cidade1[20];
    char cidade2[20];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2; // Declara variaveis do tipo int
    float area1, area2, pib1, pib2; // Declara variaveis do tipo float

    printf("Cadastro das Cartas\n");

    printf("Carta 1: \n");
       
    printf("Digite uma letra de A a H referente ao estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", &codigocarta1);

    printf("Digite a Cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número do pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("Carta 2: \n");

    printf("Digite uma letra de A a H referente ao estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigocarta2);

    printf("Digite a Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número do pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

   

    
    

    return 0;
    

}