#include <stdio.h>


const float PI = 3.1416;

int main() {
    
    float diameter, radius, height, volume;

 
    printf("Ange diametern på cylindern i meter: ");
    scanf("%f", &diameter);
    
    radius = diameter / 2; 

    printf("Ange höjden på cylindern i meter: ");
    scanf("%f", &height);

    
    volume = PI * radius * radius * height; 

    
    printf("Cylinderns volym är %.4f kubik meter.\n", volume);

    return 0;
}
