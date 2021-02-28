#include <stdio.h>
 
int main() {

    int qtd, num, i, j, count;

    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &num);
        count = 0;

        for (j = 1; j <= num; j++)
        {
            if(num % j == 0) count++;
        }

        if(count == 2) printf("%d eh primo\n",num);
        else if (count > 2) printf("%d nao eh primo\n",num);
        

    }
    
 
    return 0;
}