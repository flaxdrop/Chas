#include <stdio.h>

int main()
{

int tal1, tal2;

printf("Vänligen ange det första heltalet :");
scanf("%d", &tal1);
printf("Vänligen ange det andra heltalet : ");
scanf("%d", &tal2);

if (tal1 > tal2)
{
    printf("%d är störst\n",tal1);
} else if (tal2 > tal1)
{
    printf("%d är störst\n",tal2);
} else
{
    printf("Talen är lika stora\n");
}


return 0;

}




/*#include <stdio.h>

int main() {
    int tal1, tal2;

    printf("Ange det första heltalet: ");
    scanf("%d", &tal1);
    
    printf("Ange det andra heltalet: ");
    scanf("%d", &tal2);

    (tal1 > tal2) ? printf("%d är störst.\n", tal1) :
    (tal2 > tal1) ? printf("%d är störst.\n", tal2) :
    printf(" talen är lika stora.\n");

    return 0;
}*/
