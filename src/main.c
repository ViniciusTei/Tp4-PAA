#include "header.h"

int Indexhash[26];
int SIGMA = 2;

int main () {
    TipoTexto texto;
    TipoPadrao padrao;
    char textoIn[20];

    printf("Entre com o nome do arquivo do texto: ");
    scanf("%s", &textoIn);

    printf("Entre com o padrao: ");
    scanf("%s", &padrao);

    iniciaTexto(texto, textoIn);

    //printf("Shift-And:\n");
    //ShiftAnd(texto, strlen(texto), padrao, strlen(padrao));

    printf("Boyer-Moore: \n");
    BoyerMoore (texto, strlen(texto), padrao, strlen(padrao));

    printf("Forca bruta:\n" );
    ForcaBruta (texto, strlen(texto), padrao, strlen(padrao));

    return 0;
}
