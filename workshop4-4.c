#include <stdio.h>

int main() {
    int a = 2;
    int r = a;

    printf("\nR är %i", r);


    // Addition
    r += a;  
    printf("\nEfter addition (r += a): R är %i", r);
    r = a;
    // Subtraktion
    r -= a;  
    printf("\nEfter subtraktion (r -= a): R är %i", r);
    r = a;
    // Multiplikation
    r *= a;  
    printf("\nEfter multiplikation (r *= a): R är %i", r);
    r = a;
    // Division
    r /= a;  
    printf("\nEfter division (r /= a): R är %i", r);
    r = a;
    // Modulus (rest efter division)
    r %= a;  
    printf("\nEfter modulus (r %%= a): R är %i", r);
    r = a;
    // Bitvis och (&=)
    r &= a; 
    printf("\nEfter bitvis och (r &= a): R är %i", r);
    r = a;
    // Bitvis eller (|=)
    r |= a;  
    printf("\nEfter bitvis eller (r |= a): R är %i", r);
    r = a;
    // Bitvis exklusivt eller (^=)
    r ^= a;  
    printf("\nEfter bitvis exklusivt eller (r ^= a): R är %i", r);
    r = a;
    // Vänsterskiftning (<<=)
    r <<= 1;  
    printf("\nEfter vänsterskiftning (r <<= 1): R är %i", r);
    r = a;
    // Högerskiftning (>>=)
    r >>= 1;  
    printf("\nEfter högerskiftning (r >>= 1): R är %i", r);
    r = a;
    return 0;
}
