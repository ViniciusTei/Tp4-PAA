#include "header.h"

void iniciaTexto (TipoTexto t, char *nomeArq) {
    char str[MAXCHAR];
    int i;

    FILE *arq;

    arq = fopen(nomeArq, "r");
    if(arq == NULL) {
        printf("Erro ao abrir o arquivo!");
        return;
    } else {
        strcpy(t, fgets(str, sizeof(str), arq));
        while(fgets(str, sizeof(str), arq) != NULL) {
            strcat(t, str);
        }
    }
}

int BoyerMoore (TipoTexto t, long tamT, TipoPadrao p, long tamP)
{
    long i, j, k, d[MAXCHAR + 1];
    int cont = 0;

    for (j = 0; j <= MAXCHAR; j++)
        d[j] = tamP;

    for (j = 1; j < tamP; j++)
        d[p[j-1]] = tamP - j;

    i = tamP;

    while (i <= tamT)    /*-- Pesquisa --*/
    {
        k = i;
        j = tamP;

        while (t[k-1] == p[j-1] && j > 0) {
            k--;
            j--;
            cont++;
        }

        if (j == 0)
            printf("Casamento na posicao: %3ld\n", k + 1);
        else
          cont++;

        i += d[t[i-1]];
    }

    return cont;
}

int ForcaBruta (char* T, int n, char* P, int m)
{
	int i,j,k;
	int count = 0;
	for(i = 0; i <= n-m; i++)
	{
		for(j = 0; j < m; j++)
		{
			count++;   // benchmark
			if(P[j] != T[i+j])
				break;
		}
		if(j == m) // MATCH!
		{
      printf("Casamento na posicao: %d\n", i+1);
		}
		else
			count++;
	}
	return count;
}
