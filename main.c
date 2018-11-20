#include "header.h"

int main () {
    TipoTexto texto;
    TipoPadrao padrao;
    char textoIn[20];

    printf("Entre com o nome do arquivo do texto: ");
    scanf("%s", &textoIn);

    printf("Entre com o padrao: ");
    scanf("%s", &padrao);

    iniciaTexto(texto, textoIn);
    ShiftAnd(texto, strlen(texto), padrao, strlen(padrao));
    BM (texto, strlen(texto), padrao, strlen(padrao));
    
    return 0;
}