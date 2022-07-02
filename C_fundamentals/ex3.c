#include <stdio.h>

#define PI 3.1415f
#define FACTOR (4.0f / 3.0f)

int main (void) {
	float r;
	
	printf("Enter the radius of the sphere: ");
	scanf("%f", &r);

	float volume = FACTOR * PI * (r * r * r);
	printf("Volume: %.2f\n", volume);
	return 0;
}
