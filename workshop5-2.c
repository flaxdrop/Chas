#include <stdio.h>

int main() {
    int tal1, tal2, tal3, störst;

    printf("Ange det första heltalet: ");
    scanf("%d", &tal1);

    printf("Ange det andra heltalet: ");
    scanf("%d", &tal2);

    printf("Ange det tredje heltalet: ");
    scanf("%d", &tal3);

    störst = tal1;  

    if (störst < tal2) {
        störst = tal2;  
    }
    
    if (störst < tal3) {
        störst = tal3;  
    }

    
    printf("Det största talet är: %d\n", störst);

    return 0;
}


