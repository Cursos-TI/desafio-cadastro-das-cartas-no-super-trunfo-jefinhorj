#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas
// Vamos cadastrar duas cartas e seus dados. 
// Teste Jefferson

int main() {

    // Variáveis separadas da cidade 1.

    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis separadas da cidade 2.

    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

//O jogo

    printf("Super Trunfo - Países\n");
    printf("Crie as cartas de suas Cidades\ncom suas características.\n");
    printf("\n");

    //Inserindo a cidade 1

    printf("CIDADE 1:\n");
    printf("\n");
    printf("Qual o nome da cidade?");
    scanf("%s", cidade1);
    printf("Qual o número de habitantes da Cidade?");
    scanf("%i", &populacao1);
    printf("Qual o tamanho da área em metros quadrados?");
    scanf("%f", &area1);
    printf("O produto interno bruto(PIB) da Cidade:");
    scanf("%i", &pib1);
    printf("Qual é quantidade de pontos turísticos?");
    scanf("%i", &pontosTuristicos1);
    printf("\n");

    //mostrar ao jogador os dados da cidade 1

    printf("CIDADE 1:\n");
    printf("A Cidade é: %s\n", cidade1);
    printf("A População é: %i\n", populacao1);
    printf("Aáera é: %f\n", area1);
    printf("O PIB é: %i\n", pib1);
    printf("Os pontos turísticos são: %i\n", pontosTuristicos1);



//Inserindo a cidade 2

    printf("CIDADE 2:\n");
    printf("\n");
    printf("Qual o nome da cidade?");
    scanf("%s", cidade2);
    printf("Qual o número de habitantes da Cidade?");
    scanf("%i", &populacao2);
    printf("Qual o tamanho da área em metros quadrados?");
    scanf("%f", &area2);
    printf("O produto interno bruto(PIB) da Cidade:");
    scanf("%i", &pib2);
    printf("Qual é quantidade de pontos turísticos?");
    scanf("%i", &pontosTuristicos2);
    printf("\n");

    //mostrar ao jogador os dados da cidade 2

    printf("CIDADE 2:\n");
    printf("A Cidade é: %s\n", cidade2);
    printf("A População é: %i\n", populacao2);
    printf("Aáera é: %f\n", area2);
    printf("O PIB é: %i\n", pib2);
    printf("Os pontos turísticos são: %i\n", pontosTuristicos2);

    return 0;
}