#include <stdio.h>


float calcularDensidadePopulacional(long populacao, float area) {
    return (float)populacao / area;
}

double calcularPibPerCapita(double pibBilhoes, long populacao) {
    return (pibBilhoes * 1e9) / populacao;
}

void compararValores(float firstValue, float secondValue, char* atributo) {
    printf("%s: ", atributo);
    if (firstValue > secondValue) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
}

void compararDensidade(float primeiraDensidade, float segundaDensidade) {
    printf("Densidade Populacional: ");
    if(primeiraDensidade < segundaDensidade) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
}

void compararValoresIndividuais(float firstValue, float secondValue, char* nomeDaCidade1, char* nomeDaCidade2) {
    printf("Resultado: ");
    if (firstValue > secondValue) {
        printf("Carta 1 (%s) venceu\n", nomeDaCidade1);
    } else {
        printf("Carta 2 (%s) venceu\n", nomeDaCidade2);
    }
}


int main() {
   
    char primeiroEstado;
    int numeroPrimeiraCarta;
    char codigoPrimeiroEstado[4];
    char nomePrimeiraCidade[50];
    unsigned long populacaoPrimeiraCidade;
    float primeiraArea;
    double pibPrimeiraCidade;
    int pontosTuristicosPrimeiraCidade;
    float primeiraDensidadePopulacional;
    double primeiroPibPerCapita;
    float primeiroSuperPoder;

    char segundoEstado;
    int numeroSegundaCarta;
    char codigoSegundoEstado[4];
    char nomeSegundaCidade[50];
    unsigned long populacaoSegundaCidade;
    float segundaArea;
    double pibSegundaCidade;
    int pontosTuristicosSegundaCidade;
    float segundaDensidadePopulacional;
    double segundoPibPerCapita;
    float segundoSuperPoder;


    printf("Cadastro da primeira carta:\n");
    printf("Escolha um estado entre A-H: ");
    scanf(" %c", &primeiroEstado);

    printf("Número da carta (1-4): ");
    scanf("%d", &numeroPrimeiraCarta);
    sprintf(codigoPrimeiroEstado, "%c%02d", primeiroEstado, numeroPrimeiraCarta); 
    

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomePrimeiraCidade);

    printf("Número da população: ");
    scanf(" %lld", &populacaoPrimeiraCidade);

    printf("Área(km²): ");
    scanf(" %f", &primeiraArea);

    printf("PIB (Bilhões de reais): ");
    scanf(" %lf", &pibPrimeiraCidade);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicosPrimeiraCidade);

    primeiraDensidadePopulacional = calcularDensidadePopulacional(populacaoPrimeiraCidade, primeiraArea);
    primeiroPibPerCapita = calcularPibPerCapita(pibPrimeiraCidade, populacaoPrimeiraCidade);
    primeiroSuperPoder = populacaoPrimeiraCidade + primeiraArea + pibPrimeiraCidade + pontosTuristicosPrimeiraCidade + primeiroPibPerCapita + (1.0 / primeiraDensidadePopulacional); 



    // Segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Escolha um estado entre A-H: ");
    scanf(" %c", &segundoEstado);

    printf("Número da carta (1-4): ");
    scanf("%d", &numeroSegundaCarta);
    sprintf(codigoSegundoEstado, "%c%02d", segundoEstado, numeroSegundaCarta); 

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeSegundaCidade);

    printf("Número da população: ");
    scanf(" %lld", &populacaoSegundaCidade);

    printf("Área(km²): ");
    scanf(" %f", &segundaArea);

    printf("PIB (Bilhões de reais): ");
    scanf(" %lf", &pibSegundaCidade);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicosSegundaCidade);

    segundaDensidadePopulacional = calcularDensidadePopulacional(populacaoSegundaCidade, segundaArea);
    segundoPibPerCapita = calcularPibPerCapita(pibSegundaCidade, populacaoSegundaCidade);
    segundoSuperPoder = populacaoSegundaCidade + segundaArea + pibSegundaCidade + pontosTuristicosSegundaCidade + segundoPibPerCapita + (1.0 / segundaDensidadePopulacional); 


    // Exibição
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", primeiroEstado);
    printf("Código: %s\n", codigoPrimeiroEstado);
    printf("Nome da cidade: %s\n", nomePrimeiraCidade);
    printf("População: %lld\n", populacaoPrimeiraCidade);
    printf("Área: %.2f\n", primeiraArea);
    printf("PIB: %.2lf\n", pibPrimeiraCidade);
    printf("Numero de Pontos Turísticos: %d\n", pontosTuristicosPrimeiraCidade);
    printf("Densidade populacional: %.2f hab/km²\n", primeiraDensidadePopulacional);
    printf("PIB per Capita: %.2lf:", primeiroPibPerCapita);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", segundoEstado);
    printf("Código: %s\n", codigoSegundoEstado);
    printf("Nome da cidade: %s\n", nomeSegundaCidade);
    printf("População: %lld\n", populacaoSegundaCidade);
    printf("Área: %.2f\n", segundaArea);
    printf("PIB: %.2lf\n", pibSegundaCidade);
    printf("Numero de Pontos Turísticos: %d\n", pontosTuristicosSegundaCidade);
    printf("Densidade populacional: %.2f hab/km²\n", segundaDensidadePopulacional);
    printf("PIB per Capita: %.2lf\n:", segundoPibPerCapita);

    // Resultados da comparação

    printf("\nComparação de cartas (Atributo: População)\n");
    printf("Carta 1 - %s: %lld\n", nomePrimeiraCidade, populacaoPrimeiraCidade);
    printf("Carta 2 - %s: %lld\n", nomeSegundaCidade, populacaoSegundaCidade);
    compararValoresIndividuais(populacaoPrimeiraCidade, populacaoSegundaCidade, nomePrimeiraCidade, nomeSegundaCidade);

    printf("\nComparação de cartas (Atributo: Área)\n");
    printf("Carta 1 - %s: %.2f\n", nomePrimeiraCidade, primeiraArea);
    printf("Carta 2 - %s: %.2f\n", nomeSegundaCidade, segundaArea);
    compararValoresIndividuais(primeiraArea, segundaArea, nomePrimeiraCidade, nomeSegundaCidade);

    printf("\nComparação de cartas (Atributo: PIB)\n");
    printf("Carta 1 - %s: %.2lf\n", nomePrimeiraCidade, pibPrimeiraCidade);
    printf("Carta 2 - %s: %.2lf\n", nomeSegundaCidade, pibSegundaCidade);
    compararValoresIndividuais(pibPrimeiraCidade, pibSegundaCidade, nomePrimeiraCidade, nomeSegundaCidade);

    printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
    printf("Carta 1 - %s: %d\n", nomePrimeiraCidade, pontosTuristicosPrimeiraCidade);
    printf("Carta 2 - %s: %d\n", nomeSegundaCidade, pontosTuristicosSegundaCidade);
    compararValoresIndividuais(pontosTuristicosPrimeiraCidade, pontosTuristicosSegundaCidade, nomePrimeiraCidade, nomeSegundaCidade);

    printf("\nComparação de cartas (Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s: %.2f\n", nomePrimeiraCidade, primeiraDensidadePopulacional);
    printf("Carta 2 - %s: %.2f\n", nomeSegundaCidade, segundaDensidadePopulacional);
    if(primeiraDensidadePopulacional < segundaDensidadePopulacional) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomePrimeiraCidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeSegundaCidade);
    }


    printf("\nComparação de cartas (Atributo: PIB per capita)\n");
    printf("Carta 1 - %s: %.2lf\n", nomePrimeiraCidade, primeiroPibPerCapita);
    printf("Carta 2 - %s: %.2lf\n", nomeSegundaCidade, segundoPibPerCapita);
    compararValoresIndividuais(primeiroPibPerCapita, segundoPibPerCapita, nomePrimeiraCidade, nomeSegundaCidade);
    return 0;
}


 