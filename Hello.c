#include <stdio.h>

int main() {
    char choice;
    double temp, convertedTemp;

    printf("Enter 'c' to convert from Celsius to Fahrenheit, or 'f' to convert from Fahrenheit to Celsius: ");
    scanf(" %c", &choice);

    if (choice == 'c' || choice == 'C') {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temp);
        convertedTemp = (temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2lf\n", convertedTemp);
    } else if (choice == 'f' || choice == 'F') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temp);
        convertedTemp = (temp - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2lf\n", convertedTemp);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
