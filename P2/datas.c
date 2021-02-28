#include <stdio.h>
 
int main() {
 
    int dia, mes, ano, ANO;

    scanf("%d", &ANO);
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (dia > 28 && mes == 2)
    {
        printf("-2\n");
    }
    else if (dia > 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))
    {
        printf("-2\n");
    }
    else if (dia > 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
    {
        printf("-2\n");
    }
    else{
        if ((dia + mes + ano) == 2000)
        {
            printf("%d\n", (ANO - ano)); /* imprime a idade */
        }
        else
        {
            printf("-1\n"); 
        }
    }
    return 0;
}