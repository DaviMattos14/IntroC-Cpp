#include <stdio.h>

int main() {
 
    double matriz[12][12], soma, media;

    int i, j, cont = 1, cont2 = 11;
 
    char operacao[2];

    scanf("%s", operacao);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &matriz[i][j]);
            if (j >= cont &&  j > cont2){
                soma += matriz[i][j];
            }
        }
        cont++;
        cont2--;
    }

    if(operacao[0] == 'S'){
        printf("%.1lf\n", soma);
    }
    else if (operacao[0] == 'M'){
        media = soma/66.0;
        printf("%.1lf\n", media);
    }
    return 0;
}