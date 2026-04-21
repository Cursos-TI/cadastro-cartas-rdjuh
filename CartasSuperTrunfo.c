#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estadoA; //Variável de Estado, cidade A
    char codigoA[4]; //Variável de código, cidade A
    char cidadeA[50]; //Variável de nome da cidade A
    int populaA, turismoA; //Variáveis de população e pontos turísticos, cidade A
    float areaA, pibA; //Variáveis de área e PIB, cidade A
 
    char estadoB; //Variável de Estado, cidade B
    char codigoB[4]; //Variável de código, cidade B
    char cidadeB[50]; //Variável de nome da cidade B
    int populaB, turismoB; //Variáveis de população e pontos turísticos, cidade B
    float areaB, pibB; //Variáveis de área e PIB, cidade B

  // Área para entrada de dados
    printf("Para a carta A:\n"); //Cadastro das informações, carta A
    printf("Entre com o estado, de A a H:\n");
    scanf(" %c", &estadoA);
    printf("Entre com o codigo da carta (ex.: A01):\n");
    scanf("%s", codigoA);
    printf("Entre com o nome da cidade:\n");
    scanf(" %[^\n]", cidadeA);
    printf("Entre com a populacao:\n");
    scanf("%d", &populaA);
    printf("Entre com a area (em km quadrados):\n");
    scanf("%f", &areaA);
    printf("Entre com o PIB da cidade:\n");
    scanf("%f", &pibA);
    printf("Entre com o numero de pontos turisticos:\n");
    scanf("%d", &turismoA);

    printf("Para a carta B:\n"); //Cadastro das informações, carta B
    printf("Entre com o estado, de A a H:\n");
    scanf(" %c", &estadoB);
    printf("Entre com o codigo da carta (ex.: A01):\n");
    scanf("%s", codigoB);
    printf("Entre com o nome da cidade:\n");
    scanf(" %[^\n]", cidadeB);
    printf("Entre com a populacao:\n");
    scanf("%d", &populaB);
    printf("Entre com a area (em km quadrados):\n");
    scanf("%f", &areaB);
    printf("Entre com o PIB da cidade:\n");
    scanf("%f", &pibB);
    printf("Entre com o numero de pontos turisticos:\n");
    scanf("%d", &turismoB);

  // Área para exibição dos dados da cidade
    printf("\n*** Carta A ***\n"); //Carta A
    printf("Estado: %c\n", estadoA);
    printf("Codigo: %s\n", codigoA);
    printf("Nome da cidade: %s\n", cidadeA);
    printf("Populacao: %d\n", populaA);
    printf("Area: %f\n", areaA);
    printf("PIB: %f\n", pibA);
    printf("Numero de pontos turisticos: %d\n", turismoA);

    printf("\n*** Carta B ***\n"); //Carta B
    printf("Estado: %c\n", estadoB);
    printf("Codigo: %s\n", codigoB);
    printf("Nome da cidade: %s\n", cidadeB);
    printf("Populacao: %d\n", populaB);
    printf("Area: %f\n", areaB);
    printf("PIB: %f\n", pibB);
    printf("Numero de pontos turisticos: %d\n", turismoB);

return 0;
} 
