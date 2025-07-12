/*
Question:
Asks the user for the number of rectangular plots they own.

For each plot, asks for the length and width in meters.

Asks for the price per square meter.

Calculates and prints:

The area of each plot

The total area

The total cost of all plots
*/

#include <stdio.h>
#include <math.h>

int main(void) {

    int num = 0;
    float len = 0.0f;
    float brd = 0.0f;
    float price = 0.0f;

    double totalArea = 0.0f;
    double totalPrice = 0.0f;

    printf("How many rectangular plots do you own? ");
    scanf("%d", &num);

    printf("Enter the length of your plots (in meters): ");
    scanf("%f", &len);

    printf("Enter the breadth of your plots (in meters): ");
    scanf("%f", &brd);

    printf("What is the price of plot per square metre? ");
    scanf("%f", &price);

    totalArea = num * len * brd;
    totalPrice = totalArea * price;

    printf("Total Area of land you own: %.2lf square metres\n", totalArea);
    printf("Total price of land you own: %.2lf\n", totalPrice);

    // %lf is the format specifier for double, it can be %f too

    return 0;
}

