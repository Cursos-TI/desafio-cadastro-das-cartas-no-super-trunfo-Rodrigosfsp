#include <stdio.h>

int main (){
    
    char estado [15];
    char cidade [20];        //Informacões
    int populacao;
    int pontos;
    float area;
    float pib;

    // Leitura de dados do usuario via entrada padrão
    
    printf("Dados da carta 01\n");

    printf("Digite o estado:\n");
    scanf("%s", &estado);

    printf("Nome da capital:\n");
    scanf ("%s", &cidade);

    printf("População atual da capital:\n");
    scanf ("%d", &populacao);

    printf("Quantidade de pontos turísticos na capital:\n");
    scanf ("%d", &pontos);

    printf("Área da capital em km²:\n");
    scanf ("%f", &area);

    printf("PIB:\n");
    scanf ("%f", &pib);

 // Segunda leitura de dados do usuario via entrada padrão
    
    printf("Dados da carta 02\n");

    printf("Digite o estado:\n");
    scanf("%s", &estado);

    printf("Nome da capital:\n");
    scanf ("%s", &cidade);

    printf("População atual da capital:\n");
    scanf ("%d", &populacao);

    printf("Quantidade de pontos turísticos na capital:\n");
    scanf ("%d", &pontos);

    printf("Área da capital em km²:\n");
    scanf ("%f", &area);

    printf("PIB:\n");
    scanf ("%f", &pib);

    float densidade = (float) populacao / area;
    float pibpercapita = (float) pib * 1000000000 / populacao;

    //Resultado da primeira leitura
    printf("Carta 01\n");
    printf("Código: A01\n");
    printf("Estado: %s\n", estado);
    printf("Cidade capital: %s\n", cidade);
    printf("Pontos turísticos: %d\n", pontos);
    printf("Populacão atual da capital: %d de habitantes\n ", populacao);
    printf("Área da capital: %.3fkm²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("PIBperCapita: %.2f\n", pibpercapita);
    printf("Densidade populacional: %.2f\n", densidade);

    //Resultado da segunda leitura 

    printf("Carta 02\n");
    printf("Código: A02\n");
    printf("Estado: %s\n", estado);
    printf("Cidade capital: %s\n", cidade);
    printf("Pontos turísticos: %d\n", pontos);
    printf("Populacão atual da capital: %d de habitantes\n ", populacao);
    printf("Área da capital: %.3fkm²\n", area);
    printf("PIB:%.2f bilhões de reais\n", pib);
    printf("PIBperCapita: %.2f\n", pibpercapita);
    printf("Densidade populacional: %.2f\n", densidade);

    return 0;
}