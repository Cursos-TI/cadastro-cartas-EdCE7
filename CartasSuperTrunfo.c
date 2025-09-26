#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
char codigo[3], cidade[50];
int populacao, pontos_tu;
float area, pib;
  // Área para entrada de dados
printf("Qual o seu Estado?\n");
scanf("%c", &estado);

printf("Qual o código da carta?\n");
scanf("%s", codigo);

printf("Qual o nome da cidade?\n");
scanf("%s", &cidade);

printf("Qual a população da cidade?\n");
scanf("%d", &populacao);

printf("Qual a área da cidade?\n");
scanf("%f", &area);

printf("Qual o PIB da cidade?\n");
scanf("%f", &pib);

printf("Quantos pontos turísticos há na cidade?\n");
scanf("%d", &pontos_tu);


  // Área para exibição dos dados da cidade
printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Area: %f\n", area);
printf("PIB: %f\n", pib);
printf("Pontos Turísticos: %d\n", pontos_tu);

return 0;
} 
