#include <stdio.h>

int main() {
    int units;
    float totalcost = 0.0;

    printf("Ange antal units konsumerade: ");
    scanf("%d", &units);

    if (units <= 100) 
        totalcost = units * 0.25;
     else if (units <= 200) {
        totalcost = (100 * 0.25) + ((units - 100) * 0.75);
    } else if (units <= 500) {
        totalcost = (100 * 0.25) + (100 * 0.75) + ((units - 200) * 1.50);
    } else {
        totalcost = (100 * 0.25) + (100 * 0.75) + (300 * 1.50) + ((units - 500) * 4.0);
    }

    printf("Den totala elräkningen är: %.2f kr\n", totalcost);

    return 0;
}
