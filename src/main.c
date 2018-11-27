#include "header.h"

int main () {
    TipoTexto texto;
    TipoPadrao padrao;
    char textoIn[MAXCHAR];

    clock_t t, tB, tF;
    double tempo, tempoB, tempoF;

    printf("*****************************************\n");
    printf("*          Trabalho Pratico 4           *\n");
    printf("*****************************************\n");
    printf("\n");

    printf("Entre com o nome do arquivo do texto: ");
    scanf("%s", &textoIn);

    printf("Entre com o padrao: ");
    scanf("%s", &padrao);

    iniciaTexto(texto, textoIn);
    printf("\n");

    t = clock();
    printf("Boyer-Moore: \n");

    tB = clock();
    int compB = BoyerMoore (texto, strlen(texto), padrao, strlen(padrao));
    tB = clock() - tB;

    printf("\n");
    printf("Forca bruta:\n" );

    tF = clock();
    int compF = ForcaBruta (texto, strlen(texto), padrao, strlen(padrao));
    tF = clock() - tF;
    t = clock() - t;

    tempo = ((double)t)/CLOCKS_PER_SEC;
    tempoB = ((double)tB)/CLOCKS_PER_SEC;
    tempoF = ((double)tF)/CLOCKS_PER_SEC;

    printf("\n\n");
    printf("-------------------- DEBUG -------------------\n");
    printf("Algoritmo BoyerMoore:\n");
    printf("Tempo gasto na execucao do BoyerMoore: %lf segundos\n", tempoB);
    printf("Numero de comparacoes feitas no BoyerMoore: %d\n\n", compB);
    printf("Algoritmo ForcaBruta:\n");
    printf("Tempo gasto na execucao do ForcaBruta: %lf segudos\n", tempoF);
    printf("Numero de comparacoes feitas no ForcaBruta: %d\n", compF);

    printf("\n");
    printf("Tempo gasto na execucao total: %.4lf segundos\n", tempo);
    printf("Total de comparacoes feitas:  %d\n", compB+compF);

    return 0;
}
