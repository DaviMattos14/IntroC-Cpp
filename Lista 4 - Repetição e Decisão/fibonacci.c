#include <stdio.h>
 
int main() {

    int num, i, fib[61];
    fib[0] = 0;
    fib[1] = 1;

    scanf("%d", &num);

    for (i = 2; i < num; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (i = 0; i < num - 1; i++)
    {
        printf("%d ", fib[i]);
    }
    
    printf("%d\n", fib[num-1]);
    
    return 0;
}