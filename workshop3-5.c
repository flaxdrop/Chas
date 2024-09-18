#include <stdio.h>

int main() {
    int tal1, tal2;
    int sum, diff, prod;
    float div;

    // Fråga efter två heltal
    printf("Ange det första heltalet: ");
    scanf("%d", &tal1);

    printf("Ange det andra heltalet: ");
    scanf("%d", &tal2);

    // Gör beräkningar
    sum = tal1 + tal2;
    diff = tal1 - tal2;
    prod = tal1 * tal2;

    // Snygg utmatning av resultaten
    printf("\nResultat av beräkningar:\n");
    printf("--------------------------\n");
    printf("Addition: %d + %d = %d\n", tal1, tal2, sum);
    printf("Subtraktion: %d - %d = %d\n", tal1, tal2, diff);
    printf("Multiplikation: %d * %d = %d\n", tal1, tal2, prod);

    // Division: Kontrollera om division med noll
    if (tal2 != 0) {
        div = (float)tal1 / tal2;  // Typkonvertering för att få ett flyttal vid division
        printf("Division: %d / %d = %.2f\n", tal1, tal2, div);
    } else {
        printf("Division: Division med noll är inte tillåten.\n");
    }

    return 0;
}
