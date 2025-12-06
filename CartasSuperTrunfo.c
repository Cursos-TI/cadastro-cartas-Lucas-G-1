#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //carta 1
  char estado01;
  char codigo1[5];
  char cidade1[100];
  int populacao1;
  float area1;
  float pib1;
  int pontos01;

  //carta 2
  char estado02;
  char codigo2[5];
  char cidade2[100];
  int populacao2;
  float area2;
  float pib2;
  int pontos02;
  // Área para entrada de dados
  // === CADASTRO DA CARTA 1 ===
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado01);  // Lê uma letra, ignorando espaços iniciais
    printf("Código da Carta: ");
    scanf("%s", codigo1);    // Lê string até espaço ou Enter
    getchar();               // Consome o \n sobrando no buffer para o fgets
    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);  // Lê linha inteira (com espaços)
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove \n final, sem if
    printf("População: ");
    scanf("%d", &populacao1);  // Lê inteiro
    printf("Área (km²): ");
    scanf("%f", &area1);       // Lê float
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);        // Lê float
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos01);     // Lê inteiro

    // === CADASTRO DA CARTA 2 ===
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado02);    // Lê uma letra, ignorando espaços iniciais
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    getchar();                 // Consome \n para fgets
    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';  // Remove \n
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos02);

  // Área para exibição dos dados da cidade
    //exibição da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontos01);

    //exibição da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos02);

return 0;
} 
