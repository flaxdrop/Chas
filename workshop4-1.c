#include <stdio.h>


int main()

{

const float PI = 3.1416;
float radie = 0.0;
float diameter = 0.0;
float area = 0.0;
float omkrets = 0.0;
int val = 0;

printf("Vill du mata in radien eller diametern på cirkeln?\n");
printf("1 för radie eller 2 för diametern");
scanf("%d", &val);

if (val == 1)
{
  printf("ange radien på cirkeln : ");
  scanf("%f", &radie);
  diameter = 2 * radie;
}

else if (val == 2)
{
  printf("ange diametern på cirkeln :");
  scanf("%f", &diameter);
  radie = diameter / 2;

}

else
{
    printf("Detta går inte att skriva! Programmet avslutas");
    return 1;
}

area = PI * radie * radie;
omkrets = PI * diameter;


printf(" Cirkels area är : %.4f kvadratmeter\n", area);
printf(" Cirkelns omkrets är : %.4f meter", omkrets);

return 0;

}