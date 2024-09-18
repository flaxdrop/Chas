#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    float result1 = a + (float)b / c + d;           // a + (b / c) + d
    float result2 = (float)(a + b) / c + d;         // ((a + b) / c) + d
    float result3 = a + (float)b / (c + d);         // a + (b / (c + d))
    float result4 = (float)(a + b) / (c + d);       // ((a + b) / (c + d))

    printf("Utvärdering av operatorprioritet:\n");
    printf("1. a + b / c + d = %d + %d / %d + %d = %.2f\n", a, b, c, d, result1);
    printf("2. (a + b) / c + d = (%d + %d) / %d + %d = %.2f\n", a, b, c, d, result2);
    printf("3. a + b / (c + d) = %d + %d / (%d + %d) = %.2f\n", a, b, c, d, result3);
    printf("4. (a + b) / (c + d) = (%d + %d) / (%d + %d) = %.2f\n", a, b, c, d, result4);

    return 0;
}
