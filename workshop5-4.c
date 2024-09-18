#include <stdio.h>

int main() {
    // Deklarera variabel
    int tal;

    // Fråga efter ett heltal
    printf("Ange ett heltal: ");
    scanf("%d", &tal);

    // Kontrollera om talet är jämnt eller udda
    if (tal % 2 == 0) {
        printf("%d är ett jämnt tal.\n", tal);
    } else {
        printf("%d är ett udda tal.\n", tal);
    }

    return 0;
}
