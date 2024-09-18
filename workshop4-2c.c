#include <stdio.h>

int main() 

{
    char char1, char2;

    
    printf("Ange det första tecknet: ");
    scanf(" %c", &char1);  
    printf("Ange det andra tecknet: ");
    scanf(" %c", &char2);

    
    if (char1 == char2) {
        printf("Tecknet '%c' är lika med tecknet '%c'\n", char1, char2);
    } else {
        printf("Tecknet '%c' är inte lika med tecknet '%c'\n", char1, char2);
    }

    if (char1 != char2) {
        printf("Tecknet '%c' är inte lika med tecknet '%c'\n", char1, char2);
    } else {
        printf("Tecknet '%c' är lika med tecknet '%c'\n", char1, char2);
    }

    if (char1 < char2) {
        printf("Tecknet '%c' kommer före tecknet '%c' i ASCII-tabellen\n", char1, char2);
    } else {
        printf("Tecknet '%c' kommer inte före tecknet '%c' i ASCII-tabellen\n", char1, char2);
    }

    if (char1 > char2) {
        printf("Tecknet '%c' kommer efter tecknet '%c' i ASCII-tabellen\n", char1, char2);
    } else {
        printf("Tecknet '%c' kommer inte efter tecknet '%c' i ASCII-tabellen\n", char1, char2);
    }

    if (char1 <= char2) {
        printf("Tecknet '%c' är mindre än eller lika med tecknet '%c'\n", char1, char2);
    } else {
        printf("Tecknet '%c' är inte mindre än eller lika med tecknet '%c'\n", char1, char2);
    }

    if (char1 >= char2) {
        printf("Tecknet '%c' är större än eller lika med tecknet '%c'\n", char1, char2);
    } else {
        printf("Tecknet '%c' är inte större än eller lika med tecknet '%c'\n", char1, char2);
    }

    return 0;
}
