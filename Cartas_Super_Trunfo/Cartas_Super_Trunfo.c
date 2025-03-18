#include <stdio.h>
int main (){
char letra1, letra2;
char codigo1[4], codigo2[4];
char cidade1[20], cidade2[20];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;
float densidade1 = (float) populacao1 / area1;
float densidade2 = (float) populacao2 / area2;
float per1 = (float) pib1 / populacao1;
float per2 = (float) pib2 / populacao2;

printf("Digite seu estado: \n");
scanf("%c", &letra1);

printf("Seu codigo: \n");
scanf("%s", &codigo1);

printf("Nome da cidade: \n");
scanf("%s", &cidade1);

printf("Sua populacao: \n");
scanf("%i", &populacao1);

printf("Sua area: \n");
scanf("%f", &area1);

printf("seu pib: \n");
scanf("%f", &pib1);

printf("Numero de pontos turisticos: \n");
scanf("%i", &pontos1);

printf("Carta 1 \n");
printf("Estado: %c\n", letra1);
printf("Codigo: %s\n", codigo1);
printf("Nome da cidade: %s\n", cidade1);
printf("Populacao: %i\n", populacao1);
printf("Area: %f KM²\n", area1);
printf("Pib: %f Bilhoes de Reais\n", pib1);
printf("numero de pontos turisticos: %i\n", pontos1);
printf("A densidade populacional: %.2f\n", densidade1);
printf("O per capita: %.2f\n", per1);

printf("Digite seu estado: \n");
scanf("%c", &letra2);

printf("Seu codigo: \n");
scanf("%s", &codigo2);

printf("Nome da cidade: \n");
scanf("%s", &cidade2);

printf("Sua populacao: \n");
scanf("%i", &populacao2);

printf("Sua area: \n");
scanf("%f", &area2);

printf("Seu pib: \n");
scanf("%f", &pib2);

printf("Numero de pontos turisticos: \n");
scanf("%i", &pontos2);

printf("Carta 2 \n");
printf("Estado: %c\n", letra2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("Populacao: %i\n", populacao2);
printf("Area: %f KM²\n", area2);
printf("Pib: %f Bilhoes de Reais\n", pib2);
printf("numero de pontos turisticos: %i\n", pontos2);
printf("A densidade populacional: %.2f\n", densidade2);
printf("O per capita: %.2f\n", per2);

return 0;


}