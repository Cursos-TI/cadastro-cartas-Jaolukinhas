#include <stdio.h>

int main() {
  // CARTA 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontos1;
  
  // CARTA 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  unsigned long int populacao2;
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
  scanf("%lu", &populacao1);

  printf("Digite a área da carta 1: ");
  scanf("%f", &area1);

  printf("Digite o PIB da carta 1: ");
  scanf("%f", &pib1);

  printf("Digite o número de PT da carta 1: ");
  scanf("%d", &pontos1);

  // Cálculos Carta 1
  float densidade1 = (float)populacao1 / area1;
  float ppc1 = pib1 / populacao1;
  float inverso_densidade1 = 1.0 / densidade1;
  float superPoder1 = populacao1 + area1 + pib1 + pontos1 + ppc1 + inverso_densidade1;

  // Entrada Carta 2
  printf("\nDigite o Estado da carta 2 (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta 2: ");
  scanf("%s", codigo2);

  printf("Digite o nome da Cidade da carta 2: ");
  scanf("%s", cidade2);

  printf("Digite a população da carta 2: ");
  scanf("%lu", &populacao2);

  printf("Digite a área da carta 2: ");
  scanf("%f", &area2);

  printf("Digite o PIB da carta 2: ");
  scanf("%f", &pib2);

  printf("Digite o número de PT da carta 2: ");
  scanf("%d", &pontos2);

  // Cálculos Carta 2
  float densidade2 = (float)populacao2 / area2;
  float ppc2 = pib2 / populacao2;
  float inverso_densidade2 = 1.0 / densidade2;
  float superPoder2 = populacao2 + area2 + pib2 + pontos2 + ppc2 + inverso_densidade2;

  // Exibição
  printf("\n--- CARTA 1 ---\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB per Capita: %.2f\n", ppc1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("\n--- CARTA 2 ---\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB per Capita: %.2f\n", ppc2);
  printf("Super Poder: %.2f\n", superPoder2);

  /* // Comparações
  printf("\n--- COMPARAÇÃO DAS CARTAS ---\n");
  printf("População: (%d)\n", populacao1 > populacao2);
  printf("Área:  (%d)\n", area1 > area2);
  printf("PIB:  (%d)\n", pib1 > pib2);
  printf("Pontos Turísticos:  (%d)\n", pontos1 > pontos2);
  printf("Densidade Populacional:  (%d)\n", densidade1 < densidade2);
  printf("PIB per Capita:  (%d)\n", ppc1 > ppc2);
  printf("Super Poder:  (%d)\n", superPoder1 > superPoder2);
*/
  printf ("\n --- COMPARAÇÃO DE CARTAS ---\n");
  printf ("POPULAÇÃO\n");
  if ( populacao1 > populacao2) {
    printf ("CARTA 1 VENCEU!\n");
  }
  else {
    printf("CARTA 2 VENCEU!\n");
  }
    printf ("ÁREA\n");
  if ( area1 > area2) {
    printf ("CARTA 1 VENCEU!\n");
  }
  else {
    printf("CARTA 2 VENCEU!\n");
  }
    printf ("PIB\n");
  if ( pib1 > pib2) {
    printf ("CARTA 1 VENCEU!\n");
  }
  else {
    printf("CARTA 2 VENCEU!\n");
  }
    printf ("PONTOS TURÍSTICOS\n");
  if ( pontos1 > pontos2) {
    printf ("CARTA 1 VENCEU!\n");
  }
  else {
    printf("CARTA 2 VENCEU!\n");
  }
    printf ("SUPER PODER\n");
  if ( superPoder1 > superPoder2) {
    printf ("CARTA 1 VENCEU!\n");
  }
  else {
    printf("CARTA 2 VENCEU!\n");
  }
  return 0;
}
