#include <stdio.h>

int main() {
    float radius, surfaceArea;
    float pi = 3.14159;

    // Take radius as input
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate surface area (4 * pi * r * r)
    surfaceArea = 4 * pi * radius * radius;

    // Display the results
    printf("Surface Area = %.2f\n", surfaceArea);

    return 0;
}
