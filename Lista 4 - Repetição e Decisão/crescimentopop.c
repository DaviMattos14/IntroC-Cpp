#include <stdio.h>
 
int main() {

    int caso_de_testes, pop_A, pop_B, i, anos;
    double taxa_A, taxa_B;

    scanf("%d", &caso_de_testes);

    for (i = 1; i <= caso_de_testes; i++)
    {
        anos = 0;

        scanf("%d %d %lf %lf", &pop_A, &pop_B, &taxa_A, &taxa_B);

        while (pop_A <= pop_B)
        {
            pop_A *= (taxa_A/100) + 1;
            pop_B *= (taxa_B/100) + 1;
            anos++;

            if(anos > 100){ printf("Mais de 1 seculo.\n"); break;}            
        }

        if (anos <= 100){ printf("%d anos.\n", anos);}
    }

    return 0;
}