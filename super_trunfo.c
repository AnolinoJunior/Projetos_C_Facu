#include <stdio.h>
#include <string.h> // Para strcmp()

int main() {
    // Dados da carta 1
    char estado1;
    char codigoDaCarta1[10];
    char nomeDaCidade1[30];
    int populacao1;
    float areaKm1;
    float pib1;
    int qtdPontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapital1;

    // Dados da carta 2
    char estado2;
    char codigoDaCarta2[10];
    char nomeDaCidade2[30];
    int populacao2;
    float areaKm2;
    float pib2;
    int qtdPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapital2;

    // Cadastro Carta 1
    printf("\nDigite os dados da carta 1:\n");
    
    printf("Digite a inicial do estado: ");
    scanf(" %c", &estado1); // Espaço antes do %c para consumir quebras de linha
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%9s", codigoDaCarta1); // Limita a 9 caracteres + \0
    
    printf("Digite o nome da cidade: ");
    scanf("%29s", nomeDaCidade1); // Limita a 29 caracteres + \0
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área em km²: ");
    scanf("%f", &areaKm1);
    
    printf("Digite o PIB em milhões: ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &qtdPontosTuristicos1);

    // Cadastro Carta 2
    printf("\nDigite os dados da carta 2:\n");
    
    printf("Digite a inicial do estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta: ");
    scanf("%9s", codigoDaCarta2);
    
    printf("Digite o nome da cidade: ");
    scanf("%29s", nomeDaCidade2);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área em km²: ");
    scanf("%f", &areaKm2);
    
    printf("Digite o PIB em milhões: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &qtdPontosTuristicos2);

    // Cálculos
    densidadePopulacional1 = (float)populacao1 / areaKm1;
    pibPerCapital1 = (pib1 * 1e6) / populacao1; // Convertendo para reais
    
    densidadePopulacional2 = (float)populacao2 / areaKm2;
    pibPerCapital2 = (pib2 * 1e6) / populacao2;

    // Exibição
    printf("\n\n=== Cartas Cadastradas ===\n");
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaKm1);
    printf("PIB: R$ %.2f milhões\n", pib1);
    printf("Pontos Turísticos: %d\n", qtdPontosTuristicos1);
    printf("Densidade: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapital1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: R$ %.2f milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", qtdPontosTuristicos2);
    printf("Densidade: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapital2);

    // Sistema de comparação
    printf("\n=== Resultados da Comparação ===\n");
    
    // 1. Comparação por população
    printf("\n[População]");
    printf("\n%s: %d vs %s: %d\n", nomeDaCidade1, populacao1, nomeDaCidade2, populacao2);
    if(populacao1 > populacao2) {
        printf("Vencedor: %s (%c)\n", nomeDaCidade1, estado1);
    } else if(populacao2 > populacao1) {
        printf("Vencedor: %s (%c)\n", nomeDaCidade2, estado2);
    } else {
        printf("Empate!\n");
    }

    // 2. Comparação por área
    printf("\n[Área]");
    printf("\n%s: %.2f km² vs %s: %.2f km²\n", nomeDaCidade1, areaKm1, nomeDaCidade2, areaKm2);
    if(areaKm1 > areaKm2) {
        printf("Vencedor: %s (%c)\n", nomeDaCidade1, estado1);
    } else if(areaKm2 > areaKm1) {
        printf("Vencedor: %s (%c)\n", nomeDaCidade2, estado2);
    } else {
        printf("Empate!\n");
    }

    // 3. Comparação por PIB
    printf("\n[PIB]");
    printf("\n%s: R$ %.2f mi vs %s: R$ %.2f mi\n", nomeDaCidade1, pib1, nomeDaCidade2, pib2);
    if(pib1 > pib2) {
        printf("Vencedor: %s (%c)\n", nomeDaCidade1, estado1);
    } else if(pib2 > pib1) {
        printf("Vencedor: %s (%c)\n", nomeDaCidade2, estado2);
    } else {
        printf("Empate!\n");
    }

    // 4. Comparação por pontos turísticos
    printf("\n[Pontos Turísticos]");
    printf("\n%s: %d vs %s: %d\n", nomeDaCidade1, qtdPontosTuristicos1, nomeDaCidade2, qtdPontosTuristicos2);
    if(qtdPontosTuristicos1 > qtdPontosTuristicos2) {
        printf("Vencedor: %s (%c)\n", nomeDaCidade1, estado1);
    } else if(qtdPontosTuristicos2 > qtdPontosTuristicos1) {
        printf("Vencedor: %s (%c)\n", nomeDaCidade2, estado2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}