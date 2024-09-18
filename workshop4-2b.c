#include <stdio.h>

int main() 

{
    float num1, num2;

    
    printf("Ange det första flyttalet: ");
    scanf("%f", &num1);  
    printf("Ange det andra flyttalet: ");
    scanf("%f", &num2);  

    
    if (num1 == num2) {
        printf("%.2f är lika med %.2f\n", num1, num2);
    } else {
        printf("%.2f är inte lika med %.2f\n", num1, num2);
    }

    if (num1 != num2) {
        printf("%.2f är inte lika med %.2f\n", num1, num2);
    } else {
        printf("%.2f är lika med %.2f\n", num1, num2);
    }

    if (num1 < num2) {
        printf("%.2f är mindre än %.2f\n", num1, num2);
    } else {
        printf("%.2f är inte mindre än %.2f\n", num1, num2);
    }

    if (num1 > num2) {
        printf("%.2f är större än %.2f\n", num1, num2);
    } else {
        printf("%.2f är inte större än %.2f\n", num1, num2);
    }

    if (num1 <= num2) {
        printf("%.2f är mindre än eller lika med %.2f\n", num1, num2);
    } else {
        printf("%.2f är inte mindre än eller lika med %.2f\n", num1, num2);
    }

    if (num1 >= num2) {
        printf("%.2f är större än eller lika med %.2f\n", num1, num2);
    } else {
        printf("%.2f är inte större än eller lika med %.2f\n", num1, num2);
    }

    return 0;
}
