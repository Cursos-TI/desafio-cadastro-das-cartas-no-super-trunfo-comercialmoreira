#include <stdio.h>
#include <stdlib.h> 
int main() {
    // Declaração das variáveis carta 1 
    char estado[3] = "A";
    char cod_carta[5] = "A01";
    char nome_cidade[50] = "Fortaleza";
    unsigned long int populacao = 2500000;
    float area = 313.8;
    float pib = 73.4;
    int numpontos_turisticos = 15;
    float densidade_populacional;
    float pib_per_capita;
    
    // Declaração das variáveis carta 2
    char estado2[3] = "B";
    char cod_carta2[5] = "B01";
    char nome_cidade2[50] = "Maringá";
    unsigned long int populacao2 = 409657;
    float area2 = 487.9;
    float pib2 = 8.26;
    int numpontos_turisticos2 = 7;
    float densidade_populacional2;
    float pib_per_capita2;
    
    // Variável para escolha do menu
    int opcao;
    
    // Boas-vindas ao jogador
    printf("=== Bem Vindo ao Super Trunfo - Países (Nível Aventureiro) ===\n");
    
    // Coleta e armazenamento de dados carta 1    
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado da primeira carta: EX.'A' \n");
    scanf(" %s", estado);
    printf("Digite o código da primeira carta: \n");
    scanf(" %s", cod_carta);
    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %49[^\n]", nome_cidade); // Permite nomes com espaços até 49 caracteres
    printf("Digite a população da cidade da primeira carta: \n");
    scanf("%lu", &populacao);
    printf("Digite a área da cidade da primeira carta (km2): \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade da primeira carta (bilhões de reais): \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da cidade da primeira carta: \n");
    scanf("%d", &numpontos_turisticos);
    
    // Coleta e armazenamento de dados carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado da segunda carta: EX.'B'\n");
    scanf(" %s", estado2);
    printf("Digite o código da segunda carta: \n");
    scanf(" %s", cod_carta2);
    printf("Digite o nome da cidade da segunda carta: \n");
    scanf(" %49[^\n]", nome_cidade2); // Permite nomes com espaços até 49 caracteres
    printf("Digite a população da cidade da segunda carta: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade da segunda carta (km2): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da segunda carta (bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &numpontos_turisticos2);
    
    // Cálculo da densidade populacional e PIB per capita para carta 1
    densidade_populacional = (float)populacao / area;
    // Convertendo PIB de bilhões para reais (multiplicando por 1.000.000.000)
    pib_per_capita = (pib * 1000000000.0) / (float)populacao;
    
    // Cálculo da densidade populacional e PIB per capita para carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    // Convertendo PIB de bilhões para reais (multiplicando por 1.000.000.000)
    pib_per_capita2 = (pib2 * 1000000000.0) / (float)populacao2;
    
    // Limpar a tela (Windows: "cls", Linux/Mac: "clear")
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    // Exibir na tela as informações cadastradas das 2 cartas
    printf("\n=== Cartas Cadastradas ===\n");
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
    
    // Menu interativo usando switch
    printf("\n=== Menu de Comparação ===\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("0 - Sair\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);
    
    // Processar a escolha do usuário com switch
    switch (opcao) {
        case 1: // População
            // Limpar a tela
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            
            printf("\n=== Comparação de Cartas ===\n");
            printf("Atributo escolhido: População\n\n");
            printf("Carta 1 - %s (%s): %lu habitantes\n", nome_cidade, estado, populacao);
            printf("Carta 2 - %s (%s): %lu habitantes\n\n", nome_cidade2, estado2, populacao2);
            
            // Lógica de comparação usando if-else aninhado
            if (populacao > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
                printf("A população de %s é maior que a de %s.\n", nome_cidade, nome_cidade2);
            } else if (populacao < populacao2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
                printf("A população de %s é maior que a de %s.\n", nome_cidade2, nome_cidade);
            } else {
                printf("Resultado: Empate!\n");
                printf("Ambas as cidades têm a mesma população.\n");
            }
            break;
            
        case 2: // Área
            // Limpar a tela
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            
            printf("\n=== Comparação de Cartas ===\n");
            printf("Atributo escolhido: Área\n\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", nome_cidade, estado, area);
            printf("Carta 2 - %s (%s): %.2f km²\n\n", nome_cidade2, estado2, area2);
            
            // Lógica de comparação usando if-else aninhado
            if (area > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
                printf("A área de %s é maior que a de %s.\n", nome_cidade, nome_cidade2);
            } else if (area < area2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
                printf("A área de %s é maior que a de %s.\n", nome_cidade2, nome_cidade);
            } else {
                printf("Resultado: Empate!\n");
                printf("Ambas as cidades têm a mesma área.\n");
            }
            break;
            
        case 3: // PIB
            // Limpar a tela
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            
            printf("\n=== Comparação de Cartas ===\n");
            printf("Atributo escolhido: PIB\n\n");
            printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", nome_cidade, estado, pib);
            printf("Carta 2 - %s (%s): %.2f bilhões de reais\n\n", nome_cidade2, estado2, pib2);
            
            // Lógica de comparação usando if-else aninhado
            if (pib > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
                printf("O PIB de %s é maior que o de %s.\n", nome_cidade, nome_cidade2);
            } else if (pib < pib2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
                printf("O PIB de %s é maior que o de %s.\n", nome_cidade2, nome_cidade);
            } else {
                printf("Resultado: Empate!\n");
                printf("Ambas as cidades têm o mesmo PIB.\n");
            }
            break;
            
        case 4: // Pontos Turísticos
            // Limpar a tela
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            
            printf("\n=== Comparação de Cartas ===\n");
            printf("Atributo escolhido: Pontos Turísticos\n\n");
            printf("Carta 1 - %s (%s): %d pontos\n", nome_cidade, estado, numpontos_turisticos);
            printf("Carta 2 - %s (%s): %d pontos\n\n", nome_cidade2, estado2, numpontos_turisticos2);
            
            // Lógica de comparação usando if-else aninhado
            if (numpontos_turisticos > numpontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
                printf("%s tem mais pontos turísticos que %s.\n", nome_cidade, nome_cidade2);
            } else if (numpontos_turisticos < numpontos_turisticos2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
                printf("%s tem mais pontos turísticos que %s.\n", nome_cidade2, nome_cidade);
            } else {
                printf("Resultado: Empate!\n");
                printf("Ambas as cidades têm o mesmo número de pontos turísticos.\n");
            }
            break;
            
        case 5: // Densidade Populacional (REGRA INVERSA: menor valor vence)
            // Limpar a tela
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            
            printf("\n=== Comparação de Cartas ===\n");
            printf("Atributo escolhido: Densidade Populacional\n\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", nome_cidade, estado, densidade_populacional);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n\n", nome_cidade2, estado2, densidade_populacional2);
            
            // Lógica de comparação usando if-else aninhado
            // IMPORTANTE: Regra inversa - menor valor vence
            if (densidade_populacional < densidade_populacional2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
                printf("%s tem menor densidade populacional que %s.\n", nome_cidade, nome_cidade2);
                printf("(No caso de densidade populacional, menor valor vence)\n");
            } else if (densidade_populacional > densidade_populacional2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
                printf("%s tem menor densidade populacional que %s.\n", nome_cidade2, nome_cidade);
                printf("(No caso de densidade populacional, menor valor vence)\n");
            } else {
                printf("Resultado: Empate!\n");
                printf("Ambas as cidades têm a mesma densidade populacional.\n");
            }
            break;
            
        case 6: // PIB per Capita
            // Limpar a tela
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            
            printf("\n=== Comparação de Cartas ===\n");
            printf("Atributo escolhido: PIB per Capita\n\n");
            printf("Carta 1 - %s (%s): %.2f reais\n", nome_cidade, estado, pib_per_capita);
            printf("Carta 2 - %s (%s): %.2f reais\n\n", nome_cidade2, estado2, pib_per_capita2);
            
            // Lógica de comparação usando if-else aninhado
            if (pib_per_capita > pib_per_capita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
                printf("O PIB per Capita de %s é maior que o de %s.\n", nome_cidade, nome_cidade2);
            } else if (pib_per_capita < pib_per_capita2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
                printf("O PIB per Capita de %s é maior que o de %s.\n", nome_cidade2, nome_cidade);
            } else {
                printf("Resultado: Empate!\n");
                printf("Ambas as cidades têm o mesmo PIB per Capita.\n");
            }
            break;
            
        case 0: // Sair
            printf("\nObrigado por jogar Super Trunfo!\n");
            break;
            
        default: // Opção inválida
            printf("\nOpção inválida! Por favor, escolha uma opção entre 0 e 6.\n");
            break;
    } 
    
    return 0;
}