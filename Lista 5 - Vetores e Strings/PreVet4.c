#include <stdio.h>
 
int main() {
 
    int par[5], impar[5];

    int i, j, num, count_par = 0, count_impar = 0;


    for (i = 0; i < 15; i++)
    {
        scanf("%d", &num);

        if(num % 2 == 0){
            
            par[count_par] = num; 
            count_par++;

            if(count_par == 5){
                for (j = 0; j < count_par; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                }
                count_par = 0;
            }
        } 
        else{
            
            impar[count_impar] = num; 
            count_impar++;

            if(count_impar == 5){
                for (j = 0; j <count_impar; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                count_impar = 0;
            }
        }
    }

    for (j = 0; j < count_impar; j++){
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for (i = 0; i < count_par; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}