#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade1, densidade2;
    float percapta1, percapta2;
    float inversodensi1, inversodensi2;
    float superPoder1, superPoder2;

    printf("Boas-vindas ao Super Trunfo de Cidades!\n");
    printf("Cadastre agora os dados da CARTA 1:\n");

    printf("Informe a letra do Estado (A até H, exceto F): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Lê string com espaço

    printf("Informe o número de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nAgora cadastre os dados da CARTA 2:\n");

    printf("Informe a letra do Estado (A até H, exceto F): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Informe o número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    percapta1 = pib1 / populacao1;
    percapta2 = pib2 / populacao2;
    inversodensi1 = area1 / populacao1;
    inversodensi2 = area2 / populacao2;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + percapta1 + inversodensi1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + percapta2 + inversodensi2;

    // Exibição dos dados da carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", percapta1);
    printf("Super Poder: %.2f \n", superPoder1);

    // Exibição dos dados da carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", percapta2);
    printf("Super Poder: %.2f \n", superPoder2);

    // Comparações
    printf("\n--------- COMPARAÇÃO --------------\n");
    printf("1 para vitória da CARTA 1 e 0 para vitória CARTA 2:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional (menor é melhor): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", percapta1 > percapta2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
