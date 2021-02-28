#include <stdio.h>
 
int main() {
 
    int num, i, fatorial = 1;

    scanf("%d", &num);

    for (i = 1; i <= num; i++) fatorial *= i;
    
    printf("%d\n", fatorial);
 
    return 0;
}