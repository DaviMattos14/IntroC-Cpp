#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Fim "FIM"
 
int main() {

    char nome[1024][1024];
    int altura[1024];
    double peso[1024];
    int identificacao[5];

    int media_altura = 0, menor_A = 1000, maior_A = 0, clientes = 0;
    double media_peso = 0, menor_p = 2000, maior_p = 0;
 
    while (strcmp(nome[clientes - 1], Fim))
    {
        gets(nome[clientes]);
        if ((strcmp(nome[clientes], Fim)) == 0)
        {
            break;
        }
        else{
            scanf("%d", &altura[clientes]);
            scanf("%lf", &peso[clientes]);

            media_altura += altura[clientes];
            media_peso += peso[clientes];

            if (altura[clientes] > maior_A)
            {
                maior_A = altura[clientes];
                identificacao[0] = clientes;
            }
            if (altura[clientes] < menor_A)
            {
                menor_A = altura[clientes];
                identificacao[1] = clientes;
            }
            if (peso[clientes] > maior_p)
            {
                maior_p = peso[clientes];
                identificacao[2] = clientes;
            }
            if (peso[clientes] < menor_p)
            {
                menor_p = peso[clientes];
                identificacao[3] = clientes;
            }
            clientes++;
        }
    }

    media_altura /= clientes;
    media_peso /= clientes;
    
    printf("Maior Peso: %s - %0.1lf kg\n", nome[identificacao[2]], maior_p);
    printf("Menor Peso: %s - %0.1lf kg\n", nome[identificacao[3]], menor_p);
    printf("Maior Altura: %s - %d cm\n", nome[identificacao[0]], maior_A);
    printf("Menor Altura: %s - %d cm\n", nome[identificacao[1]], menor_A);
    printf("Media Peso: %0.1lf kg\n", media_peso);
    printf("Media Altura: %d cm\n", media_altura);
    printf("Num Clientes: %d\n", clientes);
 
    return 0;
}