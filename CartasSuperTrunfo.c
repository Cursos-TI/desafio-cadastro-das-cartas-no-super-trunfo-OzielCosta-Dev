#include <stdio.h>

int main() {
    // --- Carta 1 ---
    char estado, codigo[4], nomeCidade[100]; // Nome da cidade
    unsigned long int populacao; // População do país
    float area, pib; // PIB em bilhões
    int pontosTuristicos; // Qauntidade de pontos turísticos

    printf("Carta 1\n");

    printf("Digite o estado (letra A-H): ");
    scanf(" %c", &estado);

    printf("Digite o código do Estado (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    getchar(); // limpa o buffer
    scanf("%[^\n]", nomeCidade);

    printf("Digite a população do país: ");
    scanf("%lu", &populacao);

    printf("Digite a área do país: ");
    getchar(); // limpa o buffer
    scanf("%f", &area);

    printf("Digite o PIB do país (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    float densidade = populacao / area; // Densidade demográfica
    float pibPerCapita = pib / populacao; // PIB per capita
    float soma = populacao + area + pib + pontosTuristicos + densidade + pibPerCapita; // Super poder

    // --- Carta 2 ---
    char estado2, codigo2[4], nomeCidade2[100]; // Nome da cidade
    unsigned long int populacao2; // População do país
    float area2, pib2; // PIB em bilhões
    int pontosTuristicos2; // Qauntidade de pontos turísticos


    printf("\nCarta 2\n");

    printf("Digite o estado (letra A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código do Estado (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    getchar(); // limpa o buffer
    scanf("%[^\n]", nomeCidade2);

    printf("Digite a população do país: ");
    scanf("%lu", &populacao2);

    printf("Digite a área do país: ");
    scanf("%f", &area2);

    printf("Digite o PIB do país (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    float densidade2 = populacao2 / area2; // Densidade demográfica
    float pibPerCapita2 = pib2 / populacao2;  
    float soma2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidade2 + pibPerCapita2; // Qauntidade de pontos turísticos

    // --- Exibição das cartas ---
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.8f\nSuper poder: %.2f\n",
        estado, codigo, nomeCidade, populacao, area, pib, pontosTuristicos, densidade, pibPerCapita, soma);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.8f\nSuper poder: %.2f\n",
        estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2, soma2);

    // --- Comparação das cartas ---
    printf("\n===== RESULTADO =====\n");

    printf("População: %s\n", populacao > populacao2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Área: %s\n", area > area2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB: %s\n", pib > pib2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Pontos turísticos: %s\n", pontosTuristicos > pontosTuristicos2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Densidade demográfica: %s\n", densidade > densidade2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB per capita: %s\n", pibPerCapita > pibPerCapita2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Super poder: %s\n", soma > soma2 ? "Carta 1 venceu" : "Carta 2 venceu");

    printf("\nFim do jogo!\nObrigado por jogar!\n");

    return 0;
}


    