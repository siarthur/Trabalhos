#include <stdio.h>

int main(){

    // Variáveis para os dados das cartas
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2;

// Dados da primeira carta
    printf("Informações da primeira carta:\n");
    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("Área da Cidade: ");
    scanf("%f", &area1);


    printf("PIB da Cidade: ");
    scanf("%f", &pib1);

// Dados da segunda carta
    printf("\nInformações da segunda carta:\n");
    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("Área da Cidade: ");
    scanf("%f", &area2);

    printf("PIB da Cidade: ");
    scanf("%f", &pib2);

// Exibição dos dados
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;

}