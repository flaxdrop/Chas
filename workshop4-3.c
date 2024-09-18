#include <stdio.h>

int main() {
    
    int a = 24;
    int b = 15;
    int c = 33;

    
    int expr1 = (a > b) && (a < c);        
    int expr2 = (a < b) || (a > c);        
    int expr3 = !(a < b && a > c);         
    int expr4 = !(a > b || a < c);         

    printf("Uttrycket a < b AND a > c slutresultat: %d\n", expr1);
    printf("Uttrycket a < b OR a > c slutresultat: %d\n", expr2);
    printf("Uttrycket NOT (a < b AND a > c) slutresultat: %d\n", expr3);
    printf("Uttrycket NOT (a < b OR a > c) slutresultat: %d\n", expr4);

    return 0;
}



