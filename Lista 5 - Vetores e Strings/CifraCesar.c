#include <stdio.h>
#include <string.h>

int main() {
 
    char alfabeto[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
    'N', 'O','P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    char string[51];
    int caso_de_testes, qtd_letras, i, j, k, aux = 0;

    scanf("%d", &caso_de_testes);

    for (i = 0; i < caso_de_testes; i++)
    {
        scanf("%s", string);
        scanf("%d", &qtd_letras);

        for (j = 0; j < strlen(string); j++){
            for (k = 0; k < 26; k++)
            {
                if(string[j] == alfabeto[k] && (k - qtd_letras) >= 0){
                    string[j] = alfabeto[k - qtd_letras];
                    break;
                }
                else if(string[j] == alfabeto[k] && (k - qtd_letras) < 0){
                    aux = 26 + (k - qtd_letras);
                    string[j] = alfabeto[aux];
                    break;
                }
            }
        }
        printf("%s\n", string);
    }
    return 0;
}