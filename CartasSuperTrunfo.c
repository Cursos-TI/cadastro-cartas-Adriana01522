#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //VARIÁVEIS CARTA 1

  char estado1;
  char codigo_carta1[10];
  char nome_cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int numeros_pontos_turisticos1; 
  float densidade_populacional1;
  float pib_per_capita1;
  
  //VARIÁVEIS CARTA 2

  char estado2;
  char codigo_carta2[10];
  char nome_cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int numeros_pontos_turisticos2;
  float densidade_populacional2;
  float pib_per_capita2;

  // Área para entrada de dados
  //---LEITURA DA CARTA 1---

  printf("Digite o estado:\n");
  scanf(" %c",&estado1);

  printf("Digite o codigo_carta:\n");
  scanf(" %s", codigo_carta1);

  printf("Digite o nome da cidade:\n");
  scanf(" %s", nome_cidade1);

  printf("Digite a populaçao:\n");
  scanf(" %d", &populacao1);

  printf("Digite a area de km2:\n");
  scanf(" %f", &area1);

  printf("Digite o pib:\n");
  scanf(" %f", &pib1);
  
  printf("Digite o numero de pontos turisticos:\n");
  scanf(" %d", &numeros_pontos_turisticos1);

  densidade_populacional1 = (float) populacao1 / area1;
  pib_per_capita1 = (float) pib1 / populacao1; 


  //---LEITURA DA CARTA 2---
  
  printf("Digite o estado:\n");
  scanf(" %c", &estado2);

  printf("Digite o codigo_carta:\n");
  scanf(" %s", codigo_carta2);

  printf("Digite o nome da cidade:\n");
  scanf(" %s", nome_cidade2);

  printf("Digite a populacao:\n");
  scanf(" %d", &populacao2);
  
  printf("Digite a area em km2:\n");
  scanf(" %f", &area2);

  printf("Digite o pib:\n");
  scanf(" %f",  &pib2);

  printf("Digite o numero de pontos turisticos:\n");
  scanf(" %d", &numeros_pontos_turisticos2);


  densidade_populacional2 = (float)populacao2 / area2;
  pib_per_capita2 = (float)pib2 / populacao2;
 
 
   // Área para exibição dos dados da cidade
   //---EXIBIÇÃO CARTA 1---

  printf("*** Carta 1 ***\n");

  printf("Estado: %c\n",estado1);  
  printf("Código da Carta: %s\n", codigo_carta1);
  printf("nome da Cidade: %s\n", nome_cidade1);
  printf("População: %d-Área: %.2fkm2\n",populacao1,area1);
  printf("PIB: %.2f-Pontos Turísticos: %d\n",pib1,numeros_pontos_turisticos1);
  printf("Densidade Populacional: %.2f\n", densidade_populacional1);
  printf("PIB per Capita: %.2f\n", pib_per_capita1);
  
  //---EXIBIÇAO CARTA 2---
  
  printf("*** Carta 2 ***\n");
  
  printf("Estado: %c\n",estado2);
  printf("Código da carta: %s\n", codigo_carta2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("População: %d-Área: %.2fkm2\n",populacao2,area2);
  printf("PIB: %.2f-Pontos Turísticos: %d\n", pib2,numeros_pontos_turisticos2);
  printf("Densidade Populacional: %.2f\n", densidade_populacional2);
  printf("PIB_per_capita: %.2f\n", pib_per_capita2);



return 0;
} 
