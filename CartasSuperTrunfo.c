#include <stdio.h>

int main() {
  // CARTA 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;
  
  
  // CARTA 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;
  

  // Entrada Carta 1
  printf("Digite o Estado da carta 1 (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta 1: ");
  scanf("%s", codigo1);

  printf("Digite o nome da Cidade da carta 1: ");
  scanf("%s", cidade1);

  printf("Digite a população da carta 1: ");
  scanf("%d", &populacao1);

  printf("Digite a área da carta 1: ");
  scanf("%f", &area1);

  printf("Digite o PIB da carta 1: ");
  scanf("%f", &pib1);

  printf("Digite o número de PT da carta 1: ");
  scanf("%d", &pontos1);

  float densidade1 = populacao1 / area1;
  float ppc1 = (pib1 * 1000000000) / populacao1;

  // Entrada Carta 2
  printf("\nDigite o Estado da carta 2 (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta 2: ");
  scanf("%s", codigo2);

  printf("Digite o nome da Cidade da carta 2: ");
  scanf("%s", cidade2);

  printf("Digite a população da carta 2: ");
  scanf("%d", &populacao2);

  printf("Digite a área da carta 2: ");
  scanf("%f", &area2);

  printf("Digite o PIB da carta 2: ");
  scanf("%f", &pib2);

  printf("Digite o número de PT da carta 2: ");
  scanf("%d", &pontos2);

  float densidade2 = populacao2 / area2;
  float ppc2 = (pib2 * 1000000000) / populacao2;

  // Exibição
  printf("\n--- CARTA 1 ---\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", ppc1);

  printf("\n--- CARTA 2 ---\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
  printf("PIB per Capita: %.2f reais\n", ppc2);

  return 0;
}
