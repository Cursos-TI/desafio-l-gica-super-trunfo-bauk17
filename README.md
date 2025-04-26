# Cartas Super Trunfo

Este projeto é um programa em C que cadastra informações de duas cidades, gera cartas para cada cidade e realiza comparações entre seus atributos, como população, área, PIB, pontos turísticos e densidade populacional.

Como Funciona
### Cadastro da primeira carta:

`Estado (letra A-H)`

`Número da carta (1-4)`

`Nome da cidade`

`População`

`Área em km²`

`PIB em bilhões de reais`

`Número de pontos turísticos`



### Cadastro da segunda carta:

Mesmo processo acima.



### Cálculo de atributos adicionais:

`Densidade Populacional: População ÷ Área.`

`PIB per Capita: (PIB × 1 bilhão) ÷ População.`

`Super Poder: Soma da população, área, PIB, pontos turísticos, PIB per capita e o inverso da densidade populacional.`

### Exibição das cartas:

Exibe todos os atributos cadastrados e calculados.

### Menu de Comparação:

Usuário pode escolher qual atributo comparar entre as duas cartas.

#### Estrutura do Código


`calcularDensidadePopulacional(long populacao, float area): Calcula a densidade populacional.`

`calcularPibPerCapita(double pibBilhoes, long populacao): Calcula o PIB per capita.`

`compararValores(float firstValue, float secondValue, char* atributo): Compara dois valores e indica qual carta venceu.`

`compararDensidade(float primeiraDensidade, float segundaDensidade): Compara densidades (vencendo a menor).`

`compararValoresIndividuais(float firstValue, float secondValue, char* nomeDaCidade1, char* nomeDaCidade2): Compara e exibe qual cidade venceu.`



## Compilação

```
gcc -o logicaSuperTrunfo logicaSuperTrunfo.c
```

## Parar rodar

```
./logicaSuperTrunfo
```
