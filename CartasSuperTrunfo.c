#include <stdio.h>

// Definição da estrutura para uma carta
struct Carta {
    char estado;                 // Ex: 'A' a 'H'
    char codigo[4];             // Ex: "A01"
    char nomeCidade[100];       // Nome da cidade
    int populacao;              // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB em bilhões
    int pontosTuristicos;       // Quantidade de pontos turísticos
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1;
    struct Carta carta2;
    float densidade = população / area;

    // Leitura da primeira carta
    printf("Cadastro da Carta 1:\n");

    printf("Informe a letra do Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // Lê string com espaços

    printf("Informe a população da cidade: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("Densidade populacional:");
    scanf("%f", &carta1.densidade);


    // Leitura da segunda carta
    printf("\nCadastro da Carta 2:\n");

    printf("Informe a letra do Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o código da carta (ex: B03): ");
    scanf("%s", carta2.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade); // Lê string com espaços

    printf("Informe a população da cidade: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("Densidade populacional:");
    scanf("%f", &carta2.densidade);

    // Exibição das cartas
    printf("\n=== Informações das Cartas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %f\n", carta1.densidade);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %f\n", carta2.densidade);


    return 0;
}


