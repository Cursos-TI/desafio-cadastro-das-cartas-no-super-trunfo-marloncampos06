#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int npt1, npt2;

    printf("Carta 1: \n");
    printf("Estado: ");
    scanf("%c", &estado1);

    printf("Código da Carta: ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &npt1);

    //______________________________________________  Carta 2 :   ______________________________________________________//

    printf("Carta 2: \n");
    printf("Estado: ");
    scanf("%c", &estado2);

    printf("Código da Carta: ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &npt2);

    return 0;
}
