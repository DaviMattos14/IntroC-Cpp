#include <stdio.h>

int main() {
 
    double matriz[12][12], soma, media;

    int linha_operacao, i, j;  
 
    char operacao[2];

    scanf("%d", &linha_operacao);
    scanf("%s", operacao);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &matriz[i][j]);
            if(j == linha_operacao){
                soma += matriz[i][j];
            }
        }
        
    }

    if(operacao[0] == 'S'){
        printf("%.1lf\n", soma);
    }
    else if (operacao[0] == 'M'){
        media = soma/12;
        printf("%.1lf\n", media);
    }
    return 0;
}