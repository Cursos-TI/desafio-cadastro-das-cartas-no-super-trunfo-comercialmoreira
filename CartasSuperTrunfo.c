#include <stdio.h>
int main() {
// declaração das variáveis carta 1 
    char estado[30] = "Ceará";
    char cod_carta[5] = "A5R";
    char nome_cidade[20] = "Fortaleza";
    int populacao = 2500000;
    float area = 313.8;
    float pib = 73.4;
    int numpontos_turisticos = 15;
// declaração das variaveis carta 2
    char estado2[30] = "Paraná";
    char cod_carta2[5] = "BT2";
    char nome_cidade2[20] = "Maringá";
    int populacao2 = 409657;
    float area2 = 487.9;
    float pib2 = 8.26;
    int numpontos_turisticos2 = 7;

//coleta e armazenamento de dados carta 1    

    printf("Digite o estado da primeira carta: \n");
    scanf(" %s", estado);

    printf("Digite o código da primeira carta: \n");
    scanf(" %s", cod_carta);

    printf("Digite o número de pontos turístico da cidade da primeira carta: \n");
    scanf("%d", &numpontos_turisticos);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %s", nome_cidade);

    printf("Digite a população da cidade da primeira carta: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade da primeira carta (km2): \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade da primeira carta: \n");
    scanf("%f", &pib);

// coleta e armazenamento de dados carta 2

    printf("Digite o estado da segunda carta: \n");
    scanf(" %s", estado2);

    printf("Digite o código da segunda carta: \n");
    scanf(" %s", cod_carta2);

    printf("Digite o número de pontos turístico da cidade da segunda carta: \n");
    scanf("%d", &numpontos_turisticos2);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf(" %s", nome_cidade2);

    printf("Digite a população da cidade da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade da segunda carta (km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da segunda carta: \n");
    scanf("%f", &pib2);
    
    // exibir na tela as informações cadastradas das 2 cartas
    
    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos turísticos: %d\n", numpontos_turisticos);

    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos turísticos: %d\n", numpontos_turisticos2);

    return 0;
}