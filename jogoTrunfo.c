#include <stdio.h>
#include <string.h>

#define MAX_STR 50

typedef struct {
    char estado[MAX_STR];
    char codigo[3];
    char nome[MAX_STR];
    unsigned long int populacao;
    int area;
    long int pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

void ler_carta(Carta *carta, int numero_carta) {
    printf("\n--- Carta %d ---\n", numero_carta);
    printf("Estado: ");
    scanf(" %[^\n]", carta->estado);
    printf("Código (2 letras): ");
    scanf("%s", carta->codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nome);
    printf("População: ");
    scanf("%lu", &carta->populacao);
    printf("Área (km²): ");
    scanf("%d", &carta->area);
    printf("PIB (em milhões): ");
    scanf("%ld", &carta->pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

void calcular_atributos(Carta *carta) {
    // Calcula Densidade Populacional
    carta->densidade_populacional = (float)carta->populacao / carta->area;
    
    // Calcula PIB per Capita
    carta->pib_per_capita = (float)(carta->pib * 1000000) / carta->populacao;
    
    // Calcula Super Poder
    float inverso_densidade = carta->area / (float)carta->populacao;
    carta->super_poder = (float)carta->populacao + 
                         carta->area + 
                         carta->pib + 
                         carta->pontos_turisticos + 
                         carta->pib_per_capita + 
                         inverso_densidade;
}

void exibir_carta(Carta carta, int numero_carta) {
    printf("\n--- Dados da Carta %d ---\n", numero_carta);
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome: %s\n", carta.nome);
    printf("População: %lu\n", carta.populacao);
    printf("Área: %d km²\n", carta.area);
    printf("PIB: %ld milhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta.pib_per_capita);
    printf("Super Poder: %.2f\n", carta.super_poder);
}

void comparar_cartas(Carta carta1, Carta carta2) {
    printf("\nComparação de Cartas:\n");
    
    // Comparação da População
    printf("População: Carta %d venceu (%d)\n", 
           carta1.populacao > carta2.populacao ? 1 : 2,
           carta1.populacao > carta2.populacao);
    
    // Comparação da Área
    printf("Área: Carta %d venceu (%d)\n", 
           carta1.area > carta2.area ? 1 : 2,
           carta1.area > carta2.area);
    
    // Comparação do PIB
    printf("PIB: Carta %d venceu (%d)\n", 
           carta1.pib > carta2.pib ? 1 : 2,
           carta1.pib > carta2.pib);
    
    // Comparação dos Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 2,
           carta1.pontos_turisticos > carta2.pontos_turisticos);
    
    // Comparação da Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           carta1.densidade_populacional < carta2.densidade_populacional ? 1 : 2,
           carta1.densidade_populacional < carta2.densidade_populacional);
    
    // Comparação do PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           carta1.pib_per_capita > carta2.pib_per_capita ? 1 : 2,
           carta1.pib_per_capita > carta2.pib_per_capita);
    
    // Comparação do Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", 
           carta1.super_poder > carta2.super_poder ? 1 : 2,
           carta1.super_poder > carta2.super_poder);
}

int main() {
    Carta carta1, carta2;
    
    // Leitura das cartas
    ler_carta(&carta1, 1);
    ler_carta(&carta2, 2);
    
    // Cálculo dos atributos
    calcular_atributos(&carta1);
    calcular_atributos(&carta2);
    
    // Exibição dos dados
    exibir_carta(carta1, 1);
    exibir_carta(carta2, 2);
    
    // Comparação das cartas
    comparar_cartas(carta1, carta2);
    
    return 0;
}