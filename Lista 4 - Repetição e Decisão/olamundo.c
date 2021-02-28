#include <stdio.h>

#define idade 10
#define nome "GLaDOS"

int main(void) {

	printf("Ola Mundo \nMe chamo %s e tenho %d anos\n \n", nome, idade);

	int dia, mes, ano;

	printf("Insira a data de hoje: ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	printf("Hoje e dia: %d/%d/%d", dia, mes, ano);

	return 0;
}