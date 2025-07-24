#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Oziel

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("Carta 1:\n");

    char Estado, Carta, Nome, Código[50];
    int população, Número;
    float Área, PIB; 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     printf("Carta 1\n");
     scanf("%s", &Carta);

     printf("Digite o Estado: \n");
     scanf("%s", &Estado);

     printf("Digite o Código da Cidade: \n");
     scanf("%s", &Código);

     printf("Digite o nome da Cidade: \n");
     scanf("%s", &Nome);

     printf("Digite a População em Números \n");
     scanf("%d", &população);

     printf("Digite a Área; \n");
     scanf("%f", &Área);

     printf("Digite o PIB; \n");
     scanf("%f", &PIB);

     printf(" Digite o número de Pontos Turísticos: \n");
     scanf("%f", &Número);

     printf("\nCarta 1: %s\nEstado: %s\nCódigo: %s\n", Carta, Estado, Código);
     printf("\nNome: %s\npopulação: %d\nÁrea: %f\nPIB: %f\n", Nome, população, Área, PIB);
     printf("\nNúmero: %f\n", Número);


    return 0;
}
