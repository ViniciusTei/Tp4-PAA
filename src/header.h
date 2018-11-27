#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAXCHAR 256

typedef char TipoTexto[10000];
typedef char TipoPadrao[30];

void iniciaTexto (TipoTexto t, char *nomeArq);
int BoyerMoore (TipoTexto t, long tamT, TipoPadrao p, long tamP);
int ForcaBruta (char* T, int n, char* P, int m);
