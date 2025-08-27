#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    int codigo_carta1;
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    int codigo_carta2;
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Bem-vindo ao Super Trunfo - Países - Nível Novato\n");
    printf("--------------------------------------------------\n");

    // --- CADASTRO DA PRIMEIRA CARTA ---
    printf("CADASTRO DA CARTA 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (1-4): ");
    scanf("%d", &codigo_carta1);
    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // --- CADASTRO DA SEGUNDA CARTA ---
    printf("CADASTRO DA CARTA 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (1-4): ");
    scanf("%d", &codigo_carta2);
    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // --- EXIBIÇÃO DOS DADOS DAS CARTAS ---
    printf("----------------------------------\n");
    printf("DADOS DAS CIDADES CADASTRADAS:\n");
    printf("----------------------------------\n");

    printf("CARTA 1 (%c%02d) - %s:\n", estado1, codigo_carta1, nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("\n");

    printf("CARTA 2 (%c%02d) - %s:\n", estado2, codigo_carta2, nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("\n");

    // --- COMPARAÇÃO DAS CARTAS (Regra de Exemplo: POPULAÇÃO) ---
    printf("--- RESULTADO DA COMPARACAO ---\n");
    printf("Atributo escolhido para comparacao: POPULACAO\n");

    if (populacao1 > populacao2) {
        printf("A CARTA 1 (%s) vence a comparacao de Populacao!\n", nome_cidade1);
    } else if (populacao2 > populacao1) {
        printf("A CARTA 2 (%s) vence a comparacao de Populacao!\n", nome_cidade2);
    } else {
        printf("Empate! As populacoes sao iguais.\n");
    }

    printf("-------------------------------\n");

    return 0;
}