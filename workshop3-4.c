#include <stdio.h>

int main() {
    
    float längd, bredd, area, omkrets;

    // Fråga efter längd och bredd
    printf("Ange längden på rektangeln (i meter): ");
    scanf("%f", &längd);

    printf("Ange bredden på rektangeln (i meter): ");
    scanf("%f", &bredd);

    // Beräkna area och omkrets
    area = längd * bredd;
    omkrets = 2 * (längd + bredd);

    // Mata ut resultaten
    printf("Arean av rektangeln är: %.2f kvadratmeter\n", area);
    printf("Omkretsen av rektangeln är: %.2f meter\n", omkrets);

 
    return 0;
}
