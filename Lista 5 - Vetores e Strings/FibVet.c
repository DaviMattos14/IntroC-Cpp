#include <stdio.h>
 
int main() {
 
    int i, teste, num;
    
    unsigned long long int fib[61];

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i <= 60; i++){
        fib[i] = fib[i - 1] + fib[i - 2];}
    
    scanf("%d", &teste);

    for (i = 0; i < teste; i++)
    {
        scanf("%d", &num);
        printf("Fib(%d) = %lld\n", num, fib[num]);
    }
    

    return 0;
}