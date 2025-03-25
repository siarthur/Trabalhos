#include <stdio.h>

int main(){

    // Declarações das Variáves


    //Carta número 1

    char estado1 [25];
    char codigo1 [25];
    char cidade1 [25];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidadepopulacional1;
    float PIBpercapita1;

    //Carta número 2

    char estado2 [25];
    char codigo2 [25];
    char cidade2 [25];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidadepopulacional2;
    float PIBpercapita2;

    //Dados da primeira cidade

    printf("Informe os dados da primeira cidade\n");

    printf("Estado: ");
    scanf(" %s", &estado1);

    printf("Codigo da carta: ");
    scanf("%f", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    //Dados da segunda cidade

    printf("Informe os dados da segunda cidade\n");

    printf("Estado: ");
    scanf(" %s", &estado2);
    
    printf("Codigo da carta: ");
    scanf("%f", &codigo2);
    
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Area: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    //Calculo da densidade populacional das cartas

    densidadepopulacional1 = (float) (populacao1 / area1);

    densidadepopulacional2 = (float) (populacao2 / area2);

    //Calculo do PIB per capita das cartas

    PIBpercapita1 = (float) (pib1 / populacao1);
    PIBpercapita2 = (float) (pib2 / populacao2);


    //Exibindo as informações das cartas 1 e 2

    //Carta 01
    printf("* Carta 01 * \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.9f km²\n", area1);
    printf("PIB: %.9f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("A densidade populacional e: %.9f\n", densidadepopulacional1);
    printf("O PIB per capita e: %.9f\n", PIBpercapita1);

    //Carta 02
    printf("* Carta 02 * \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.9f km²\n", area2);
    printf("PIB: %.9f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("A densidade populacional e: %.9f\n", densidadepopulacional2);
    printf("O PIB per capita e: %.9f\n", PIBpercapita2);



    return 0;
    

}