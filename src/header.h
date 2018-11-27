#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXCHAR 256

typedef char TipoTexto[10000];
typedef char TipoPadrao[30];

void iniciaTexto (TipoTexto t, char *nomeArq);
void BoyerMoore (TipoTexto t, long tamT, TipoPadrao p, long tamP);
void ForcaBruta (char* T, int n, char* P, int m);
