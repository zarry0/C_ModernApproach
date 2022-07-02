// Computes the dimensional weight of a box from inpt provided from the user

#include <stdio.h>

int main (void) {
    int height, length, width, volume, weight;

    printf("Enter the height of the box: ");
    scanf("%d", &height);
    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the width of the box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume: %d\n", volume);
    printf("Dimensional weight: %d\n", weight);
    return 0;
}