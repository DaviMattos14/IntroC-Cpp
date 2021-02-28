#include <stdio.h>
 
int main() {
 
   int qtd, i, num, soma, j;

   scanf("%d", &qtd);

   for (i = 0; i < qtd; i++)
   {
       scanf("%d", &num);
       soma = 0;

       for (j = 1; j < num; j++)
       {
           if (num % j == 0) soma += j;
       }
       
       if( soma == num) { printf("%d eh perfeito\n", num);}
       else printf("%d nao eh perfeito\n", num);

   }
   
    return 0;
}