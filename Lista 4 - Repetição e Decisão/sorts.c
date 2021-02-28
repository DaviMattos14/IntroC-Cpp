#include <stdio.h>

int main(void) {
	
	int A, B, C;
	int x, y, z;
	int aux;

	scanf("%d %d %d", &A, &B, &C);

	x = A; y = B; z = C;
	
	if (x > y){	aux = x; x = y; y = aux;}
	if (x > z){	aux = x; x = z; z = aux;}
	if (y > z){	aux = y; y = z; z = aux;}

	printf("%d\n%d\n%d\n", x, y, z);
	printf("\n");
	printf("%d\n%d\n%d\n", A, B, C);

	return 0;
}