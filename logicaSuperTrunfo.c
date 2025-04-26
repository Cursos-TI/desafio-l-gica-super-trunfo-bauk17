#include <stdio.h>

float calcularDensidadePopulacional(long populacao, float area) {
    return (float)populacao / area;
}

double calcularPibPerCapita(double pibBilhoes, long populacao) {
    return (pibBilhoes * 1e9) / populacao;
}

void compararValores(double firstValue, double secondValue, char* atributo) {
    printf("%s:\n", atributo);
    printf("Carta 1: %.2lf\n", firstValue);
    printf("Carta 2: %.2lf\n", secondValue);
    if (firstValue > secondValue) {
        printf("Carta 1 venceu!\n");
    } else if (firstValue < secondValue) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
}

void compararDensidade(float primeiraDensidade, float segundaDensidade) {
    printf("Densidade Populacional:\n");
    printf("Carta 1: %.2f hab/km²\n", primeiraDensidade);
    printf("Carta 2: %.2f hab/km²\n", segundaDensidade);
    if (primeiraDensidade < segundaDensidade) {
        printf("Carta 1 venceu! (menor densidade)\n");
    } else if (primeiraDensidade > segundaDensidade) {
        printf("Carta 2 venceu! (menor densidade)\n");
    } else {
        printf("Empate!\n");
    }
}

int main() {
    char primeiroPais, segundoPais;
    int numeroPrimeiraCarta, numeroSegundaCarta;
    char codigoPrimeiroEstado[4], codigoSegundoEstado[4];
    char nomePrimeiraCidade[50], nomeSegundaCidade[50];
    unsigned long populacaoPrimeiraCidade, populacaoSegundaCidade;
    float primeiraArea, segundaArea;
    double pibPrimeiraCidade, pibSegundaCidade;
    int pontosTuristicosPrimeiraCidade, pontosTuristicosSegundaCidade;
    float primeiraDensidadePopulacional, segundaDensidadePopulacional;
    double primeiroPibPerCapita, segundoPibPerCapita;
    float primeiroSuperPoder, segundoSuperPoder;
    int option1, option2;

    printf("Cadastro da primeira carta:\n");
    printf("Escolha um estado entre A-H: ");
    scanf(" %c", &primeiroPais);

    printf("Número da carta (1-4): ");
    scanf("%d", &numeroPrimeiraCarta);
    sprintf(codigoPrimeiroEstado, "%c%02d", primeiroPais, numeroPrimeiraCarta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomePrimeiraCidade);

    printf("Número da população: ");
    scanf("%lu", &populacaoPrimeiraCidade);

    printf("Área(km²): ");
    scanf("%f", &primeiraArea);

    printf("PIB (Bilhões de reais): ");
    scanf("%lf", &pibPrimeiraCidade);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosPrimeiraCidade);

    primeiraDensidadePopulacional = calcularDensidadePopulacional(populacaoPrimeiraCidade, primeiraArea);
    primeiroPibPerCapita = calcularPibPerCapita(pibPrimeiraCidade, populacaoPrimeiraCidade);
    primeiroSuperPoder = populacaoPrimeiraCidade + primeiraArea + pibPrimeiraCidade + pontosTuristicosPrimeiraCidade + primeiroPibPerCapita + (1.0 / primeiraDensidadePopulacional);

    printf("\nCadastro da segunda carta:\n");
    printf("Escolha um estado entre A-H: ");
    scanf(" %c", &segundoPais);

    printf("Número da carta (1-4): ");
    scanf("%d", &numeroSegundaCarta);
    sprintf(codigoSegundoEstado, "%c%02d", segundoPais, numeroSegundaCarta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeSegundaCidade);

    printf("Número da população: ");
    scanf("%lu", &populacaoSegundaCidade);

    printf("Área(km²): ");
    scanf("%f", &segundaArea);

    printf("PIB (Bilhões de reais): ");
    scanf("%lf", &pibSegundaCidade);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosSegundaCidade);

    segundaDensidadePopulacional = calcularDensidadePopulacional(populacaoSegundaCidade, segundaArea);
    segundoPibPerCapita = calcularPibPerCapita(pibSegundaCidade, populacaoSegundaCidade);
    segundoSuperPoder = populacaoSegundaCidade + segundaArea + pibSegundaCidade + pontosTuristicosSegundaCidade + segundoPibPerCapita + (1.0 / segundaDensidadePopulacional);

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", primeiroPais);
    printf("Código: %s\n", codigoPrimeiroEstado);
    printf("Nome da cidade: %s\n", nomePrimeiraCidade);
    printf("População: %lu\n", populacaoPrimeiraCidade);
    printf("Área: %.2f\n", primeiraArea);
    printf("PIB: %.2lf bilhões\n", pibPrimeiraCidade);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosPrimeiraCidade);
    printf("Densidade Populacional: %.2f hab/km²\n", primeiraDensidadePopulacional);
    printf("PIB per Capita: %.2lf\n", primeiroPibPerCapita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", segundoPais);
    printf("Código: %s\n", codigoSegundoEstado);
    printf("Nome da cidade: %s\n", nomeSegundaCidade);
    printf("População: %lu\n", populacaoSegundaCidade);
    printf("Área: %.2f\n", segundaArea);
    printf("PIB: %.2lf bilhões\n", pibSegundaCidade);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosSegundaCidade);
    printf("Densidade Populacional: %.2f hab/km²\n", segundaDensidadePopulacional);
    printf("PIB per Capita: %.2lf\n", segundoPibPerCapita);

    // Menu
    printf("\nEscolha uma opção para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &option1);

    printf("\nAgora escolha OUTRA opção para comparar (diferente da anterior):\n");
    do {
        printf("Opção: ");
        scanf("%d", &option2);

        if (option2 == option1) {
            printf("Você já escolheu essa opção! Escolha uma diferente.\n");
        }
    } while (option2 == option1);


    switch (option1) {
        case 1:
            compararValores((double)populacaoPrimeiraCidade, (double)populacaoSegundaCidade, "População");
            break;
        case 2:
            compararValores((double)primeiraArea, (double)segundaArea, "Área");
            break;
        case 3:
            compararValores(pibPrimeiraCidade, pibSegundaCidade, "PIB");
            break;
        case 4:
            compararValores((double)pontosTuristicosPrimeiraCidade, (double)pontosTuristicosSegundaCidade, "Pontos Turísticos");
            break;
        case 5:
            compararDensidade(primeiraDensidadePopulacional, segundaDensidadePopulacional);
            break;
        case 6:
            compararValores(primeiroPibPerCapita, segundoPibPerCapita, "PIB per Capita");
            break;
        default:
            printf("Escolha uma opção válida entre 1 - 6!\n");
            break;
    }


    // Comparação do segundo atributo
    switch (option2) {
        case 1:
            compararValores((double)populacaoPrimeiraCidade, (double)populacaoSegundaCidade, "População");
            break;
        case 2:
            compararValores((double)primeiraArea, (double)segundaArea, "Área");
            break;
        case 3:
            compararValores(pibPrimeiraCidade, pibSegundaCidade, "PIB");
            break;
        case 4:
            compararValores((double)pontosTuristicosPrimeiraCidade, (double)pontosTuristicosSegundaCidade, "Pontos Turísticos");
            break;
        case 5:
            compararDensidade(primeiraDensidadePopulacional, segundaDensidadePopulacional);
            break;
        case 6:
            compararValores(primeiroPibPerCapita, segundoPibPerCapita, "PIB per Capita");
            break;
        default:
            printf("Escolha uma opção válida entre 1 - 6!\n");
            break;
    }

    return 0;
}
