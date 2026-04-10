#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado;
  char codigo da carta[];
  char nome cidade[];
  int populacao;
  float area;
  float pib;
  int numeros pontos turisticos; 
  
  // Área para entrada de dados
  
  printf("Digite o estado:\n");
  scanf("%s", estado);

  printf("Digite o codigo_carta:\n");
  scanf("%s", codigo_carta);

  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade);

  printf("Digite a populaçao:\n");
  scanf("%d", &poulacao);

  printf("Digite a area de km2:\n");
  scanf("%f", &area);

  printf("Digite o pib:\n");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &pontos_turisticos);
  
  // Área para exibição dos dados da cidade

  printf("Estado: %s\n",estado);
  printf("Código da Carta: %s\n", codigo_carta);
  printf("nome da Cidade: %s\n", cidade);
  printf("População: %d-Área: %.2fkm2\n",populacao,area);
  printf("PIB: %.2f-Pontos Turísticos: %d\n",pib,pontos_turisticos);

return 0;
} 
