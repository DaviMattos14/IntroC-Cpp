#include <stdio.h>
#include <string.h>

int main() {
 
    char A[1001], B[1001];

    int caso_de_testes, i, j, k, contador;

    scanf("%d", &caso_de_testes);

    for (i = 0; i < caso_de_testes; i++)
    {
        scanf("%s %s", A, B);
        contador = 0;

        if(strlen(A) >= strlen(B)){

            for (j = (strlen(B) - 1), k = (strlen(A) - 1); j >= 0 ; j--, k--)
            {
                if(B[j] == A[k]){
                    contador++;
                }
            }
            if(contador == strlen(B)){
                printf("encaixa\n");

            }
            else printf("nao encaixa\n");

        }
        else if(strlen(A) < strlen(B)){
            printf("nao encaixa\n");
        }

    }
 
    return 0;
}