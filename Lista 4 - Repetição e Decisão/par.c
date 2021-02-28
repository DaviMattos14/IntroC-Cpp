#include <stdio.h>
#include <math.h>

int main(void) {
	
	int num, i, aux;
	
	scanf("%d", &num);
	
	for (i = 1; i<= num; i++){
		if (i%2 == 0){aux = pow (i,2); printf("%d^2 =%d\n", i, aux);}
	}

	return 0;
}