#include <stdio.h>

int main() {
    // Deklarera variabler
    int tal1, tal2, val;
    float resultat;

    // Fråga efter två heltal
    printf("Ange det första heltalet: ");
    scanf("%d", &tal1);

    printf("Ange det andra heltalet: ");
    scanf("%d", &tal2);

    // Presentera menyn med räknesätt
    printf("\nVälj ett räknesätt:\n");
    printf("1. Addition\n");
    printf("2. Subtraktion\n");
    printf("3. Multiplikation\n");
    printf("4. Division\n");
    printf("Ange ditt val (1-4): ");
    scanf("%d", &val);

    // Switch-sats för att hantera användarens val
    switch(val) {
        case 1:
            resultat = tal1 + tal2;
            printf("Resultat: %d + %d = %.2f\n", tal1, tal2, resultat);
            break;
        case 2:
            resultat = tal1 - tal2;
            printf("Resultat: %d - %d = %.2f\n", tal1, tal2, resultat);
            break;
        case 3:
            resultat = tal1 * tal2;
            printf("Resultat: %d * %d = %.2f\n", tal1, tal2, resultat);
            break;
        case 4:
            if (tal2 != 0) {
                resultat = (float)tal1 / tal2;
                printf("Resultat: %d / %d = %.2f\n", tal1, tal2, resultat);
            } else {
                printf("Fel: Division med 0 är inte tillåten.\n");
            }
            break;
        default:
            printf("Not a valid operation. Sorry, can not perform the calculation.\n");
    }

    return 0;
}
