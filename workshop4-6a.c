#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Ange temperaturen i Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32; 

    printf("%.2f Celsius är lika med %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
