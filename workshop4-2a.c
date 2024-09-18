#include <stdio.h>

int main()

{

int num1, num2;

printf("Ange det första heltalet: ");
scanf("%d", &num1);
printf("Ange det andra heltalet: ");
scanf("%d", &num2);

if (num1 == num2)
{
    printf("%d är lika med %d\n", num1, num2);
}
    else
    {
        printf("%d är inte lika med %d\n",num1,num2);
    }
    
if (num1 != num2)
{
    printf("%d är inte lika med %d\n", num1, num2);
} else
{
    printf("%d är lika med %d\n", num1,num2);
}

if (num1 < num2)
{
    printf("%d är mindre än %d\n", num1 ,num2);
} else
{
    printf("%d är inte mindre än %d\n",num1 ,num2);
}

if (num1 > num2)
{
    printf("%d är större än %d\n", num1, num2);
} else
{
    printf("%d är inte större än %d\n", num1 ,num2);
}
if (num1 <= num2)
{
    printf("%d är mindre än eller lika med %d\n", num1,num2);
} else
{
    printf("%d är inte mindre än eller lika med %d\n",num1,num2);
}

if (num1 >= num2)
{
    printf("%d är större än eller lika med %d\n",num1,num2);

} else
{
    printf("%d är inte större än eller lika med %d\n",num1,num2);

}




return 0;


}