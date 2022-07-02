// Computing the Dimensional Weight of a Box 

// Shipping companies don't especially like boxes that arc large but very light, since they take up valuable space in a truck or airplane. 
// In fact, companies often charge extra for such a box, basing the fee on its volume instead of its weight. In the United States. 
// the usual method is to divide the volume by 166 (the allowable number of cubic inches per pound). If this number --the box's "dimensional" or "volumetric" 
// weight-- exceeds its actual weight, the shipping fee is based on the dimensional weight. 
// The 166 divisor is for international shipments; the dimensional weight of a domestic shipment is typically calculated using 194 instead.) 

// Let's say that you've been hired by a shipping company to write a program that computes the dimensional weight of a box. 
// Since you're new to C, you decide to start off by writing a program that calculates the dimensional weight of a particular box that's 12" x 10" x 8". 

#include <stdio.h>

int main (void) {
    int height = 8, length = 12, width = 10, volume, weight;
    volume = height * length * width;
    weight = (volume + 165) / 166;
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume: %d\n", volume);
    printf("Dimensional weight: %d\n", weight);
    return 0;
}