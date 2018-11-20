#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXCHAR 256

typedef char TipoTexto[10000];
typedef char TipoPadra[30];

void iniciaTexto (TipoTexto t, char *nomeArq);
void ShiftAnd (TipoTexto t, long tamT, TipoPadrao p, long tamP);
void BM (TipoTexto t, long tamT, TipoPadrao p, long tamP);