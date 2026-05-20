#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estadoA; //Variável de Estado, cidade A
    char codigoA[4]; //Variável de código, cidade A
    char cidadeA[50]; //Variável de nome da cidade A
    int populaA, turismoA; //Variáveis de população e pontos turísticos, cidade A
    float areaA, pibA, densiA, pibperA, superA; //Variáveis de área, desidade populacional, PIB, PIB per capita e super poder da cidade A
 
    char estadoB; //Variável de Estado, cidade B
    char codigoB[4]; //Variável de código, cidade B
    char cidadeB[50]; //Variável de nome da cidade B
    int populaB, turismoB; //Variáveis de população e pontos turísticos, cidade B
    float areaB, pibB, densiB, pibperB, superB; //Variáveis de área e PIB, desidade populacional, PIB per capita e super poder da cidade B

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

  //Cálculo de densidade populacional
    densiA = populaA/areaA;
    densiB = populaB/areaB;

  //Cálculo de pib per capita
    pibperA = (pibA*1000000000)/populaA;
    pibperB = (pibB*1000000000)/populaB;

  //Cálculo de super poder
    superA = (float)populaA + areaA + (pibA*1000000000) + (float)turismoA + pibperA + (1/densiA);
    superB = (float)populaB + areaB + (pibB*1000000000) + (float)turismoB + pibperB + (1/densiB);

  // Área para exibição dos dados da cidade
    printf("\n*** Carta A ***\n"); //Carta A
    printf("Estado: %c\n", estadoA);
    printf("Codigo: %s\n", codigoA);
    printf("Nome da cidade: %s\n", cidadeA);
    printf("Populacao: %d pessoas\n", populaA);
    printf("Area: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("Numero de pontos turisticos: %d\n", turismoA);
    printf("Densidade populacional: %.2f hab/km²\n", densiA);
    printf("PIB per Capita: %.2f reais\n", pibperA);
    printf("Super poder: %.2f\n", superA);

    printf("\n*** Carta B ***\n"); //Carta B
    printf("Estado: %c\n", estadoB);
    printf("Codigo: %s\n", codigoB);
    printf("Nome da cidade: %s\n", cidadeB);
    printf("Populacao: %d pessoas\n", populaB);
    printf("Area: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Numero de pontos turisticos: %d\n", turismoB);
    printf("Densidade populacional: %.2f hab/km²\n", densiB);
    printf("PIB per Capita: %.2f reais\n", pibperB);
    printf("Super poder: %.2f\n", superB);

  //Comparação dos atributos
    printf("\n*** Comparacao ***\n");
    printf("Populacao: %d\n", populaA > populaB);
    printf("Area: %d\n", areaA > areaB);
    printf("PIB: %d\n", pibA > pibB);
    printf("Numero de pontos turisticos: %d\n", turismoA > turismoB);
    printf("Densidade populacional: %d\n", (1/densiA) > (1/densiB));
    printf("PIB per Capita: %d\n", pibperA > pibperB);
    printf("Super poder: %d\n", superA > superB);
  
    return 0;
} 