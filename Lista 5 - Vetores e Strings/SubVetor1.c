#include <stdio.h>
 
int main() {
 
    int vetor[10];

    int i, num;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        vetor[i] = num; 
    }

    for (i = 0; i < 10; i++)
    {
        if(vetor[i] <= 0) vetor[i] = 1;
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("X[%d] = %d\n", i, vetor[i]);
    }
    
    

    return 0;
}