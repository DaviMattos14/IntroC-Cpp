#include <stdio.h>
 
int main() {
 
    double notas[1024];
    char nomes [1024][1024];

    int i, j;
    double aux;
    int qtd_notas = 0;

    do
    {
        scanf("%lf", &notas[qtd_notas]);
        if (notas[qtd_notas] == -1)
        {
            break;
        }
        
        qtd_notas++;

    } while (notas[qtd_notas-1] != -1);

    for (i = 0; i < qtd_notas; i++)
    {
        for (j = 0; j < (qtd_notas - 1); j++)
        {
            if (notas[j] < notas[j + 1])
            {
                aux = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = aux;
            }
        }
    }
    

    for (i = 0; i <= (qtd_notas-1); i++)
    {
        scanf("%s", nomes[i]);
    }

    for (i = 0; i < qtd_notas; i++)
    {
        printf("%s: %0.2lf\n", nomes[i], notas[i]);
    }
    
    

    return 0;
}