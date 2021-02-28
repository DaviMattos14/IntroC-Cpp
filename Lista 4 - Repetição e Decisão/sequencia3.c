#include <stdio.h>

int main(void) {

    int i = 1;
    int j = 7;

    do
    {
        printf("I=%d J=%d\n", i, j--);
        printf("I=%d J=%d\n", i, j--);
        printf("I=%d J=%d\n", i, j--);

        i += 2;
        j += 5;

    } while (i <= 9);
    

	return 0;
}