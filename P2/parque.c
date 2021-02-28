#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Fim "FIM!"
#define Bate "bate"
#define Roda "roda"
#define Xica "xica"
#define Trem "trem"
#define Mont "mont"
#define Carr "carr"

int main() {
 
    double saldo, desconto = 0;
    char string[5];
    int tentativas = 0;

    scanf("%lf", &saldo);

    if (saldo == 500){
        desconto = 0.25;
    }else if(saldo == 100) desconto = 0.10;

    
    do
    {
        gets(string);
        
        if ((strcmp(string, Roda)) == 0)
        {
            if ((saldo - (3.50 - (3.50 * desconto))) < 0)
            {
                printf("SALDO INSUFICIENTE\n");
                tentativas++;
            }
            else saldo -= (3.50 - (3.50 * desconto));
            
        }
        else if ((strcmp(string, Bate)) == 0)
        {
            if ((saldo - (2.50 - (2.50 * desconto))) < 0)
            {
                printf("SALDO INSUFICIENTE\n");
                tentativas++;
            }
            else saldo -= (2.50 - (2.50 * desconto));
            
        }
        else if ((strcmp(string, Xica)) == 0)
        {
            if ((saldo - (3.00 - (3.00 * desconto))) < 0)
            {
                printf("SALDO INSUFICIENTE\n");
                tentativas++;
            }
            else saldo -= (3.00 - (3.00 * desconto));
            
        }
        else if ((strcmp(string, Trem)) == 0)
        {
            if ((saldo - (4.00 - (4.00 * desconto))) < 0)
            {
                printf("SALDO INSUFICIENTE\n");
                tentativas++;
            }
            else saldo -= (4.00 - (4.00 * desconto));
            
        }
        else if ((strcmp(string, Mont)) == 0)
        {
            if ((saldo - (5.00 - (5.00 * desconto))) < 0)
            {
                printf("SALDO INSUFICIENTE\n");
                tentativas++;
            }
            else saldo -= (5.00 - (5.00 * desconto));
            
        }
        else if ((strcmp(string, Carr)) == 0)
        {
            if ((saldo - (2.00 - (2.00 * desconto))) < 0)
            {
                printf("SALDO INSUFICIENTE\n");
                tentativas++;
            }
            else saldo -= (2.00 - (2.00 * desconto));
            
        }
        else if ((strcmp(string, Fim)) == 0)
        {
            printf("%0.2lf\n", saldo);
            return 0;
        }
    } while (tentativas < 3);

    return 0;
}