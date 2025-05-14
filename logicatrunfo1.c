#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[30], codigo1[10], cidade1[30];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Entrada de dados para a primeira carta
    printf("Digite os dados da Carta 1:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Codigo: ");
    scanf(" %[^\n]", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculo dos indicadores da carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("\n");

    // Declaração das variáveis para a Carta 2
    char estado2[30], codigo2[10], cidade2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Entrada de dados para a segunda carta
    printf("Digite os dados da Carta 2:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Codigo: ");
    scanf(" %[^\n]", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculo dos indicadores da carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Mostrar os indicadores
    printf("\n--- Densidade populacional ---\n");
    printf("Carta 1 - %s: %.2f hab/km2\n", cidade1, densidade1);
    printf("Carta 2 - %s: %.2f hab/km2\n", cidade2, densidade2);

    // Comparacao pela densidade (menor vence)
    printf("\nResultado:\n");
    if (densidade1 < densidade2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}