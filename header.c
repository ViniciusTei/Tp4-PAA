#include "header.h"

void iniciaTexto (TipoTexto t, char *nomeArq) {
    char *str;
    int i;

    FILE *arq;

    arq = fopen(nomeArq, "r");
    if(arq == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 0;
    } else {
        strcpy(t, fgets(str, sizeof(str), arq));
        while(fgets(str, sizeof(str), arq) != NULL) {
            strcat(t, str);
        }
    }
}

void ShiftAnd (TipoTexto t, long tamT, TipoPadrao p, long tamP)
{ 
    long mascara[MAXCHAR], i, R = 0;
    for (i = 0; i < MAXCHAR; i++) 
        mascara[i] = 0;
    
    for (i = 1; i <= tamT; i++) 
        mascara[p[i-1] + 127] |= 1 << (tamP - i);
    
    for (i = 0; i < tamT; i++) 
    { 
        R = ((((unsigned long)R) >> 1) | (1 << (tamP - 1))) & mascara[t[i] + 127];
        if ((R & 1) != 0)
            printf(" Casamento na posicao %3ld\n", i - tamP + 2);
    }
}

void BM (TipoTexto t, long tamT, TipoPadrao p, long tamP)
{ 
    long i, j, k, d[MAXCHAR + 1];

    for (j = 0; j <= MAXCHAR; j++) 
        d[j] = tamP;
    
    for (j = 1; j < tamP; j++) 
        d[P[j-1]] = tamP - j;
    
    i = tamP;
  
    while (i <= tamT)    /*-- Pesquisa --*/
    { 
        k = i;
        j = tamP;
        
        while (t[k-1] == p[j-1] && j > 0) { 
            k--; j--; 
        }
        
        if (j == 0) 
            printf("Casamento na posicao: %3ld\n", k + 1);
        
        i += d[t[i-1]];
    }
}