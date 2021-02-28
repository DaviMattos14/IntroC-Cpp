#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int linhas, colunas, fileira, coluna, qtd_poltronas, cont, i, j;

    scanf("%d", &linhas);
    scanf("%d", &colunas);

    int cinema[linhas][colunas];

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            cinema[i][j] = 0;
        }
    }
    
    do
    {
        scanf("%d %d", &fileira, &coluna);
        if (fileira < 0){
            break;
        }
        else{
            cinema[fileira][coluna] = 1;
        }

    } while (fileira >= 0);

    scanf("%d", &qtd_poltronas);
    
    for (i = 0; i < linhas; i++)
    {
        cont = 0;

        for (j = 0; j < colunas; j++)
        {
            if (cinema[i][j] == 0){
                cont++;
                if (cont == qtd_poltronas)
                {
                    printf("OK\n");
                    exit(0);
                }
            } 
            else{
                cont = 0;
            }
        }
    }

    if (cont == qtd_poltronas)
    {
        printf("OK\n");
    }
    else
    {
        printf("NOK\n");
    }

    return 0;
}