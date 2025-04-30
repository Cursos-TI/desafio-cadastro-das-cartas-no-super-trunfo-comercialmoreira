#include <stdio.h>

int main() {
    // declaração das variáveis carta 1 
    char estado[3] = "A";
    char cod_carta[5] = "A01";
    char nome_cidade[20] = "Fortaleza";
    int populacao = 2500000;
    float area = 313.8;
    float pib = 73.4;
    int numpontos_turisticos = 15;
    float densidade_populacional; 
    float pib_per_capita; 
    
    // declaração das variáveis carta 2
    char estado2[3] = "B";
    char cod_carta2[5] = "B01";
    char nome_cidade2[20] = "Maringá";
    int populacao2 = 409657;
    float area2 = 487.9;
    float pib2 = 8.26;
    int numpontos_turisticos2 = 7;
    float densidade_populacional2; 
    float pib_per_capita2; 
    
    // Boas-vindas ao jogador

    printf("Bem Vindo ao Super Trunfo - Países\n");
    
    // coleta e armazenamento de dados carta 1    

    printf("\nDigite o estado da primeira carta: EX.'A' \n");
    scanf(" %s", estado);

    printf("Digite o código da primeira carta: \n");
    scanf(" %s", cod_carta);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %s", nome_cidade);

    printf("Digite a população da cidade da primeira carta: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade da primeira carta (km2): \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade da primeira carta (bilhões de reais): \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade da primeira carta: \n");
    scanf("%d", &numpontos_turisticos);
    
    // coleta e armazenamento de dados carta 2
    printf("\nDigite o estado da segunda carta: EX.'B'\n");
    scanf(" %s", estado2);

    printf("Digite o código da segunda carta: \n");
    scanf(" %s", cod_carta2);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf(" %s", nome_cidade2);

    printf("Digite a população da cidade da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade da segunda carta (km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da segunda carta (bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade da segunda carta: \n");
    scanf("%d", &numpontos_turisticos2);
    
    // Cálculo da densidade populacional e PIB per capita para carta 1
    densidade_populacional = (float)populacao / area;

    // Convertendo PIB de bilhões para reais (multiplicando por 1.000.000.000)
    pib_per_capita = (pib * 1000000000.0) / populacao;
    
    // Cálculo da densidade populacional e PIB per capita para carta 2
    densidade_populacional2 = (float)populacao2 / area2;

    // Convertendo PIB de bilhões para reais (multiplicando por 1.000.000.000)
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;
    
    // exibir na tela as informações cadastradas das 2 cartas
    
    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numpontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    
    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numpontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    return 0;
}