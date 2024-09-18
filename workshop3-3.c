#include <stdio.h>

int main() {

    int num1, num2, sum;

    
    printf("Ange det första heltalet: ");
    scanf("%d", &num1);

    printf("Ange det andra heltalet: ");
    scanf("%d", &num2);

    
    sum = num1 + num2;

    
    printf("Summan av %d plus %d är: %d\n", num1, num2, sum);

    return 0;
}
