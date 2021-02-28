#include <stdio.h>

int main(void) {

    int j = 60;
    int i = 1;

    do{ printf("I=%d J=%d\n", i, j); i += 3; j -= 5;} 
    while (j >= 0);

	return 0;
}