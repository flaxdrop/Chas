#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Ange temperaturen i Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9; 

    
    printf("%.2f Fahrenheit är lika med %.2f Celsius.\n", fahrenheit, celsius);

    return 0;
}
