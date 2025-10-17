#include <stdio.h>

int main(){
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




int escolha_status;
float escolha;
do{
printf("Qual status você quer usar? 1 - população. 2 - Area. 3 - PIB. 4 - Pontos Turísticos. 5 - Densidade. 6 - PIB per capta.");
scanf("%d", &escolha_status);
switch (escolha_status){
  case 1:
    escolha=populacao;
    printf("%f",escolha);
    break;
  case 2:
    escolha=area;
    printf("%f",escolha);
    break;
  case 3:
    escolha=pib;
    printf("%f",escolha);
    break;
  case 4:
    escolha=pontos_tu;
    printf("%f",escolha);
    break;
  case 5:
    escolha=densidade;
    printf("%f",escolha);
    break;
  case 6:
    escolha=pib_per_capta;
    printf("%f",escolha);
    break;
  default:
    printf("Escolha um número dentro das opções.");
}
} while(escolha_status<1 || escolha_status>6);

return 0;
}