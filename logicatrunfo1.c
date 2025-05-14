#include <stdio.h>

// Estrutura da carta
struct Carta {
    char estado[30];
    char codigo[10];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

// Calcula densidade e PIB per capita
void calcularIndicadores(struct Carta *carta) {
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;
}

// Le os dados da carta e calcula/exibe os indicadores
void lerCarta(struct Carta *carta, int numero) {
    printf("Digite os dados da Carta %d:\n", numero);

    printf("Estado: ");
    scanf(" %[^\n]", carta->estado);

    printf("Codigo da carta: ");
    scanf(" %[^\n]", carta->codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->cidade);

    printf("Populacao: ");
    scanf("%d", &carta->populacao);

    printf("Area (km2): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta->pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta->pontosTuristicos);

    // Calculo dos indicadores
    calcularIndicadores(carta);

    // Exibe os calculos
    printf("Densidade Populacional: %.2f hab/km2\n", carta->densidadePopulacional);
    printf("PIB per capita: R$ %.2f\n\n", carta->pibPerCapita);
}

int main() {
    struct Carta carta1, carta2;

    // Leitura das cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    // Comparacao por Densidade Populacional
    printf("Comparacao de cartas (Atributo: Densidade Populacional):\n\n");
    printf("Carta 1 - %s (%s): %.2f hab/km2\n", carta1.cidade, carta1.estado, carta1.densidadePopulacional);
    printf("Carta 2 - %s (%s): %.2f hab/km2\n", carta2.cidade, carta2.estado, carta2.densidadePopulacional);

    // Determinacao do vencedor (menor densidade vence)
    if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.densidadePopulacional < carta1.densidadePopulacional) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}