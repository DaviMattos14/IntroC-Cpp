#include <stdio.h>
 
int main() {

    int i;
    double vetor[100];

    scanf("%lf", &vetor[0]);

    for (i = 0; i < 100; i++)
    {
        if(i > 0){
            vetor[i] = (vetor[i-1]/2);    
        }
        printf("N[%d] = %0.4lf\n", i, vetor[i]);
    }
    
    return 0;
}