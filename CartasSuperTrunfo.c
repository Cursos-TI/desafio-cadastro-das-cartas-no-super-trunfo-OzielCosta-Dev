#include <stdio.h>

int main() {

    char estado;                 // Ex: 'A' a 'H'
    char codigo[4];             // Ex: "A01"
    char nomeCidade[100];       // Nome da cidade
    float populacao;              // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB em bilhões
    int pontosTuristicos;       // Quantidade de pontos turísticos
    float densidade1;
    float densidade2;

    densidade1 = populacao / area
    densidade2 = populacao / area


    // Leitura da primeira carta
    printf("Cadastro da Carta 1:\n");

    printf("Informe a letra do Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // Lê string com espaços

    printf("Informe a população da cidade: ");
    scanf("%6f", &carta1.populacao);

    printf("Informe a área da cidade (em km²): ");
    scanf("%6f", &carta1.area);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Leitura da segunda carta
    printf("\nCadastro da Carta 2:\n");

    printf("Informe a letra do Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o código da carta (ex: B03): ");
    scanf("%s", carta2.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade); // Lê string com espaços

    printf("Informe a população da cidade: ");
    scanf("%6f", &carta2.populacao);

    printf("Informe a área da cidade (em km²): ");
    scanf("%6f", &carta2.area);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição das cartas
    printf("\n=== Informações das Cartas ===\n");


    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %6f\n", carta1.populacao);
    printf("Área: %6f km²\n", carta1.area);
    printf("PIB: %6f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %6f hab/km²\n":, densidade1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %6f\n", carta2.populacao);
    printf("Área: %6f km²\n", carta2.area);
    printf("PIB: %6f bilhões de reais\n":, carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %6f hab/km²\n", densidade2);


    return 0;
}











