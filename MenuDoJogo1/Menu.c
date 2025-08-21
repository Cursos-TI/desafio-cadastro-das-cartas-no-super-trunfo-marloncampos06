#include <stdio.h>

// Definição da carta
struct Carta {
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

int main() {
    struct Carta carta1 = {"Brasil", 213000000, 8516000, 1.84, 20, 0};
    struct Carta carta2 = {"Portugal", 10300000, 92212, 0.25, 15, 0};

    // cálculo da densidade
    carta1.densidade = (float)carta1.populacao / carta1.area;
    carta2.densidade = (float)carta2.populacao / carta2.area;

    int opcao;
    printf("=== SUPER TRUNFO ===\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", carta1.nome, carta2.nome);

    switch (opcao) {
        case 1: // População
            printf("População: %d x %d\n", carta1.populacao, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("%s venceu!\n", carta1.nome);
            else if (carta1.populacao < carta2.populacao)
                printf("%s venceu!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área: %.2f x %.2f\n", carta1.area, carta2.area);
            if (carta1.area > carta2.area)
                printf("%s venceu!\n", carta1.nome);
            else if (carta1.area < carta2.area)
                printf("%s venceu!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB: %.2f x %.2f\n", carta1.pib, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("%s venceu!\n", carta1.nome);
            else if (carta1.pib < carta2.pib)
                printf("%s venceu!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Pontos turísticos: %d x %d\n", carta1.pontosTuristicos, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("%s venceu!\n", carta1.nome);
            else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
                printf("%s venceu!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade (menor vence)
            printf("Densidade: %.4f x %.4f\n", carta1.densidade, carta2.densidade);
            if (carta1.densidade < carta2.densidade)
                printf("%s venceu! (menor densidade ganha)\n", carta1.nome);
            else if (carta1.densidade > carta2.densidade)
                printf("%s venceu! (menor densidade ganha)\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida. Escolha de 1 a 5.\n");
    }

    return 0;
}