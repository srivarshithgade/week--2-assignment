//Question 2 - Distance & Unit Expander

#include <stdio.h>

int main() {

    float speed;
    float time;
    float distance;
    float meters;
    float centimeters;
    float millimeters;

    printf("Enter speed in km/h: ");
    scanf("%f", &speed);

    printf("Enter time in hours: ");
    scanf("%f", &time);

    distance = speed * time;

    meters = distance * 1000;
    centimeters = distance * 100000;
    millimeters = distance * 1000000;

    printf("\n--- Conversion Results ---\n");
    printf("Distance in Meters: %.2f m\n", meters);
    printf("Distance in Centimeters: %.2f cm\n", centimeters);
    printf("Distance in Millimeters: %.2f mm\n", millimeters);

    return 0;
}