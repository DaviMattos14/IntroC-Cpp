#include <stdio.h>
#include <math.h>
 
int main() {
 
    int i, j, count, numX, numY, soma;

    scanf("%d", &count);

    for (i = 0; i < count; i++)
    {
        soma = 0;
        scanf("%d %d", &numX, &numY);

        if (numX > numY) {
            for (j = numY + 1; j < numX; j++) { if (j % 2 != 0) soma += j; }
        }
        else if (numY > numX) {
            for (j = numX + 1; j < numY; j++) { if (j % 2 != 0) soma += j; }
        }
        else soma = 0;

        printf("%d\n", soma);
    }
    
 
    return 0;
}