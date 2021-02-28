#include <stdio.h>
#define cachorro_quente 4.00;
#define xSalada 4.50;
#define xBacon 5.00;
#define torrada 2.00;
#define refrigerante 1.50;

int main(void) {
	
	int codigo, qtd;
    double valor_total;
	
	scanf("%d %d",&codigo, &qtd);

    switch (codigo)
    {
        case 1:
            valor_total = qtd * cachorro_quente;
            printf("Total: R$ %0.2f\n", valor_total);
        break;
        
        case 2:
        valor_total = qtd * xSalada;
        printf("Total: R$ %0.2f\n", valor_total);
        break;
        
        case 3:
        valor_total = qtd * xBacon;
        printf("Total: R$ %0.2f\n", valor_total);
        break;
        
        case 4:
        valor_total = qtd * torrada;
        printf("Total: R$ %0.2f\n", valor_total);
        break;

        case 5:
        valor_total = qtd * refrigerante;
        printf("Total: R$ %0.2f\n", valor_total);
        break;
    }

	return 0;
}