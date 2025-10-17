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
scanf("%s", codigo2);

printf("Qual o nome da cidade?\n");
scanf("%s", cidade2);

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

int escolha_status;

// Lógica para escolha do atributo da carta
do{
printf("Qual atributo você quer comparar?\n");
printf("1 - população");
printf("2 - Area");
printf("3 - PIB");
printf("4 - Pontos Turísticos");
printf("5 - Densidade");
printf("6 - PIB per capta");
scanf("%d", &escolha_status);
switch (escolha_status){
  case 1:
    printf("Comparando a população das cartas.\n");
    printf("%c: %d pessoas\n", estado, populacao);
    printf("%c: %d pessoas\n", estado2, populacao2);
    if (populacao>populacao2){
      printf("%c venceu!\n", estado);
    }
    else if(populacao<populacao2){
      printf("%c venceu!\n", estado2);
    }
    else{
      printf("Houve um empate!\n");
    }
    break;
  case 2:
    printf("Comparando a área das cartas.\n");
    printf("%c: %fm²\n", estado, area);
    printf("%c: %fm²\n", estado2, area2);
    if (area>area2){
      printf("%c venceu!\n", estado);
    }
    else if(area<area2){
      printf("%c venceu!\n", estado2);
    }
    else{
      printf("Houve um empate!\n");
    }
    
    break;
  case 3:
    printf("Comparando o PIB das cartas.\n");
    printf("%c: R$%f\n", estado, pib);
    printf("%c: R$%f\n", estado2, pib2);
    if (pib>pib2){
      printf("%c venceu com um PIB maior: R$%f\n", estado,pib);
    }
    else if(pib<pib2){
      printf("%c venceu com um PIB maior: R$%f\n", estado2,pib2);
    }
    else{
      printf("Houve um empate! R$%f e R$%f\n", pib,pib2);
    }
    
    
    break;
  case 4:
    
    
    break;
  case 5:
    
    
    break;
  case 6:
    
    
    break;
  default:
    printf("Escolha um número dentro das opções.\n");
    
}
} while(escolha_status<1 || escolha_status>6);

// Comparação dos atributos
return 0;