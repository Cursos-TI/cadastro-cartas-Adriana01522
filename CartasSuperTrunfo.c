#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado;
  char codigo_carta[10];
  char nome_cidade[50];
  int populacao;
  float area;
  float pib;
  int numeros_pontos_turisticos; 
  
  // Área para entrada de dados
  
  printf("Digite o estado:\n");
  scanf(" %c",&estado);

  printf("Digite o codigo_carta:\n");
  scanf(" %s", codigo_carta);

  printf("Digite o nome da cidade:\n");
  scanf(" %s", nome_cidade);

  printf("Digite a populaçao:\n");
  scanf(" %d", &populacao);

  printf("Digite a area de km2:\n");
  scanf(" %f", &area);

  printf("Digite o pib:\n");
  scanf(" %f", &pib);

  printf("Digite o numero de pontos turisticos:\n");
  scanf(" %d", &numeros_pontos_turisticos);
  
  // Área para exibição dos dados da cidade

  printf("Estado: %c\n",estado);
  printf("Código da Carta: %s\n", codigo_carta);
  printf("nome da Cidade: %s\n", nome_cidade);
  printf("População: %d-Área: %.2fkm2\n",populacao,area);
  printf("PIB: %.2f-Pontos Turísticos: %d\n",pib,numeros_pontos_turisticos);

return 0;
} 
