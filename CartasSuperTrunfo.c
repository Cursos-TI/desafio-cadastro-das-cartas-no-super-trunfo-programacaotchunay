#include <stdio.h>

int main (){
    char letra1[30], letra2[30];
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos1, pontos2;

        
    printf("Digite seu estado: \n");
    scanf("%c", &letra1);

    printf("Seu Codigo: \n");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("Sua populacao: \n");
    scanf("%i", &populacao1);

    printf("Sua area: \n");
    scanf("%f", &area1);

    printf("Seu PIB: \n");
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos: \n");
    scanf("%i", &pontos1);

    printf("Carta 1\n");
    printf("Estado: %c\n", letra1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %f KM²\n", area1);
    printf("PIB: %f Bilhões de Reais\n", PIB1);
    printf("Número de Pontos Turísticos: %i\n", pontos1);
    
    printf("Digite seu estado: \n");
    scanf("%c", &letra2);

    printf("Seu Codigo: \n");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Sua populacao: \n");
    scanf("%i", &populacao2);

    printf("Sua area: \n");
    scanf("%f", &area2);

    printf("Seu PIB: \n");
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos: \n");
    scanf("%i", &pontos2);

    printf("Carta 2\n");
    printf("Estado: %c\n", letra2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %f KM²\n", area2);
    printf("PIB: %f Bilhões de Reais\n", PIB2);
    printf("Número de Pontos Turísticos: %i\n", pontos2);


    

    return 0;
    

}
