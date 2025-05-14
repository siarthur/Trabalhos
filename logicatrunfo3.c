#include <stdio.h>

int main() {
    // Cartas 1 e 2 com os dados
    char pais1[30], pais2[30];
    int populacao1, pontos1, populacao2, pontos2;
    float area1, pib1, densidade1, pibPerCapita1;
    float area2, pib2, densidade2, pibPerCapita2;

    // Entrada dos dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", pais1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // Calculando densidade e PIB per capita para Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Entrada dos dados para a Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", pais2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // Calculando densidade e PIB per capita para Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Menu interativo para escolha do primeiro atributo
    int escolha1;
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("6 - PIB per capita\n");
    printf("Digite sua opcao: ");
    scanf("%d", &escolha1);

    // Menu interativo para escolha do segundo atributo (diferente do primeiro)
    int escolha2;
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    scanf("%d", &escolha2);

    // Comparação dos atributos selecionados
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;

    // Função para retornar o valor do atributo escolhido
    if (escolha1 == 1) {
        valor1_c1 = populacao1;
        valor1_c2 = populacao2;
    } else if (escolha1 == 2) {
        valor1_c1 = area1;
        valor1_c2 = area2;
    } else if (escolha1 == 3) {
        valor1_c1 = pib1;
        valor1_c2 = pib2;
    } else if (escolha1 == 4) {
        valor1_c1 = pontos1;
        valor1_c2 = pontos2;
    } else if (escolha1 == 5) {
        valor1_c1 = densidade1;
        valor1_c2 = densidade2;
    } else {
        valor1_c1 = pibPerCapita1;
        valor1_c2 = pibPerCapita2;
    }

    // Comparação do segundo atributo
    if (escolha2 == 1) {
        valor2_c1 = populacao1;
        valor2_c2 = populacao2;
    } else if (escolha2 == 2) {
        valor2_c1 = area1;
        valor2_c2 = area2;
    } else if (escolha2 == 3) {
        valor2_c1 = pib1;
        valor2_c2 = pib2;
    } else if (escolha2 == 4) {
        valor2_c1 = pontos1;
        valor2_c2 = pontos2;
    } else if (escolha2 == 5) {
        valor2_c1 = densidade1;
        valor2_c2 = densidade2;
    } else {
        valor2_c1 = pibPerCapita1;
        valor2_c2 = pibPerCapita2;
    }

    // Soma dos atributos para decidir o vencedor
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    // Exibindo os resultados
    printf("\nComparando as cartas:\n");
    printf("Carta 1 - %s: %.2f e %.2f\n", pais1, valor1_c1, valor2_c1);
    printf("Carta 2 - %s: %.2f e %.2f\n", pais2, valor1_c2, valor2_c2);

    printf("\nSoma dos valores dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    // Decidindo o vencedor
    if (soma1 > soma2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", pais1);
    } else if (soma2 > soma1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", pais2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}