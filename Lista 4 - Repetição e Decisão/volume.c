#include <stdio.h>
#define pi 3.14159
#include <math.h>


int main(void) {
	
	int raio = 5;
	float volume = 0;
	
	volume = (4*(pi*(raio^3)))/3;
	
	printf("%0.2f", volume);
	
	
	
	return 0;
}