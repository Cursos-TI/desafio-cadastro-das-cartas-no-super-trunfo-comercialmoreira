#include <stdio.h>

int main() {
    // Declaração das variáveis carta 1 
    char estado[3] = "A";
    char cod_carta[5] = "A01";
    char nome_cidade[20] = "Fortaleza";
    unsigned long int populacao = 2500000;
    float area = 313.8;
    float pib = 73.4;
    int numpontos_turisticos = 15;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder; 
    // Declaração das variáveis carta 2
    char estado2[3] = "B";
    char cod_carta2[5] = "B01";
    char nome_cidade2[20] = "Maringá";
    unsigned long int populacao2 = 409657; 
    float area2 = 487.9;
    float pib2 = 8.26;
    int numpontos_turisticos2 = 7;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2; 
    
    // Variáveis para armazenar os resultados das comparações (1 = Carta 1 vence, 0 = Carta 2 vence)
    int comp_populacao;
    int comp_area;
    int comp_pib;
    int comp_pontos;
    int comp_densidade; // Lembrar que menor densidade = vitória
    int comp_pib_capita;
    int comp_super_poder;
    
    // Boas-vindas ao jogador
    printf("Bem Vindo ao Super Trunfo - Países (Nível Mestre)\n");
    
    // Coleta e armazenamento de dados carta 1    
    printf("\nDigite o estado da primeira carta: EX.'A' \n");
    scanf(" %s", estado);
    printf("Digite o código da primeira carta: \n");
    scanf(" %s", cod_carta);
    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %s", nome_cidade);
    printf("Digite a população da cidade da primeira carta: \n");
    scanf("%lu", &populacao); // %lu para unsigned long int
    printf("Digite a área da cidade da primeira carta (km2): \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade da primeira carta (bilhões de reais): \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da cidade da primeira carta: \n");
    scanf("%d", &numpontos_turisticos);
    
    // Coleta e armazenamento de dados carta 2
    printf("\nDigite o estado da segunda carta: EX.'B'\n");
    scanf(" %s", estado2);
    printf("Digite o código da segunda carta: \n");
    scanf(" %s", cod_carta2);
    printf("Digite o nome da cidade da segunda carta: \n");
    scanf(" %s", nome_cidade2);
    printf("Digite a população da cidade da segunda carta: \n");
    scanf("%lu", &populacao2); // %lu para unsigned long int
    printf("Digite a área da cidade da segunda carta (km2): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da segunda carta (bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade da segunda carta: \n");
    scanf("%d", &numpontos_turisticos2);
    
    // Cálculo da densidade populacional e PIB per capita para carta 1
    densidade_populacional = (float)populacao / area;
    // Convertendo PIB de bilhões para reais (multiplicando por 1.000.000.000)
    pib_per_capita = (pib * 1000000000.0) / (float)populacao;
    
    // Cálculo da densidade populacional e PIB per capita para carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    // Convertendo PIB de bilhões para reais (multiplicando por 1.000.000.000)
    pib_per_capita2 = (pib2 * 1000000000.0) / (float)populacao2;
    
    // Cálculo do Super Poder para carta 1
    // Somando: população + área + PIB em bilhões + pontos turísticos + PIB per capita + inverso da densidade
    super_poder = (float)populacao + area + pib + (float)numpontos_turisticos + pib_per_capita + (1.0 / densidade_populacional);
    
    // Cálculo do Super Poder para carta 2
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)numpontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);
    
    // Comparando as cartas (1 = Carta 1 vence, 0 = Carta 2 vence)
    comp_populacao = (populacao > populacao2) ? 1 : 0;
    comp_area = (area > area2) ? 1 : 0;
    comp_pib = (pib > pib2) ? 1 : 0;
    comp_pontos = (numpontos_turisticos > numpontos_turisticos2) ? 1 : 0;
    comp_densidade = (densidade_populacional < densidade_populacional2) ? 1 : 0; // Menor densidade ganha
    comp_pib_capita = (pib_per_capita > pib_per_capita2) ? 1 : 0;
    comp_super_poder = (super_poder > super_poder2) ? 1 : 0;
    
    // Exibir na tela as informações cadastradas das 2 cartas
    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numpontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("Super Poder: %.2f\n", super_poder);
    
    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numpontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    // Exibir os resultados das comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", comp_populacao ? 1 : 2, comp_populacao);
    printf("Área: Carta %d venceu (%d)\n", comp_area ? 1 : 2, comp_area);
    printf("PIB: Carta %d venceu (%d)\n", comp_pib ? 1 : 2, comp_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", comp_pontos ? 1 : 2, comp_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", comp_densidade ? 1 : 2, comp_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", comp_pib_capita ? 1 : 2, comp_pib_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", comp_super_poder ? 1 : 2, comp_super_poder);
    
    return 0;
}