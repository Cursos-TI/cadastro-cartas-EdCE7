#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Variáveis da carta 1
char estado; //oi -> estado[0] = o 
char codigo[3], cidade[50];
unsigned long int populacao;
int pontos_tu;
float area, pib;

  //variáveis da carta 2 
char estado2;
char codigo2[3], cidade2[50];
unsigned long int populacao2;
int pontos_tu2;
float area2, pib2;

  // Área para entrada de dados
printf("Carta 1:\n");
printf("Qual o seu Estado?\n");
scanf("%c", &estado);

printf("Qual o código da carta?\n");
scanf("%s", codigo);

printf("Qual o nome da cidade?\n");
scanf("%s", cidade);

printf("Qual a população da cidade?\n");
scanf("%ld", &populacao);

printf("Qual a área da cidade?\n");
scanf("%f", &area);

printf("Qual o PIB da cidade?\n");
scanf("%f", &pib);

printf("Quantos pontos turísticos há na cidade?\n");
scanf("%d", &pontos_tu);

float densidade = populacao / area;
float pib_per_capta = pib / populacao;
float super_carta1 = (float)populacao + densidade + pib_per_capta + pontos_tu;

printf("Carta 2:\n");
printf("Qual o seu Estado?\n");
scanf(" %c", &estado2);

printf("Qual o código da carta?\n");
scanf("%s", &codigo2);

printf("Qual o nome da cidade?\n");
scanf("%s", &cidade2);

printf("Qual a população da cidade?\n");
scanf("%ld", &populacao2);

printf("Qual a área da cidade?\n");
scanf("%f", &area2);

printf("Qual o PIB da cidade?\n");
scanf("%f", &pib2);

printf("Quantos pontos turísticos há na cidade?\n");
scanf("%d", &pontos_tu2);

float densidade2 = populacao2 / area2;
float pib_per_capta2 = pib2 / populacao2;
float super_carta2 = (float)populacao2 + densidade2 + pib_per_capta2 + pontos_tu2;

  // Área para exibição dos dados da cidade
  // Carta 1
printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("População: %ld\n", populacao);
printf("Area: %.2f km²\n", area);
printf("PIB: %.2f \n", pib);
printf("Pontos Turísticos: %d\n", pontos_tu);
printf("Densidade populacional: %.2f hab/km²\n", densidade);
printf("O PIB per capita é de: R$%.2f\n", pib_per_capta);

  // Carta 2
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %ld\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f \n", pib2);
printf("Pontos Turísticos: %d\n", pontos_tu2);
printf("Densidade populacional: %.2f hab/km²\n", densidade2);
printf("O PIB per capita é de: R$%.2f\n", pib_per_capta2);

if (populacao > populacao2){
    printf("A população da cidade %s é maior que a da cidade %s!\n", cidade, cidade2);
}
else if(populacao < populacao2){
    printf("A população da cidade %s é maior que a da cidade %s!\n", cidade2, cidade);
}else{
    printf("A população das cidades são iguais!\n");
}

if(area > area2){
  printf("A area da cidade %s é maior que a da cidade %s\n", cidade, cidade2);
} else if(area < area2){
  printf("A area da cidade %s é maior que a da cidade %s\n", cidade2, cidade);
}else{
  printf("A area das cidades são iguais!\n");
}

if(pib > pib2){
  printf("O PIB da cidade %s é maior que o da cidade %s\n", cidade, cidade2);
} else if(pib < pib2){
  printf("O PIB da cidade %s é maior que o da cidade %s\n", cidade2, cidade);
}else{
  printf("O PIB das cidades são iguais!");
}

if(pontos_tu > pontos_tu2){
  printf("Os pontos turísticos da cidade %s são maiores que o da cidade %s\n", cidade, cidade2);
} else if(pontos_tu < pontos_tu2){
  printf("Os pontos turísticos da cidade %s são maiores que o da cidade %s\n", cidade2, cidade);
}else{
  printf("Os pontos turísticos das cidades são iguais!\n");
}

if(super_carta1>super_carta2){
  printf("Super poder: Carta 1 venceu!\n");
} else{
  printf("Super poder: Carta 2 Venceu\n");
}
return 0;
}