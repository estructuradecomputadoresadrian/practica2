#include <stdio.h>
int main ()
{
float kilometros,yardas,millas,pies;
printf("Dame una cantidad en kilometros\n");
scanf("%f",&kilometros);
millas= kilometros / 1.60;
pies= kilometros * 100000;
pies= pies / 30.48;
yardas= kilometros * 100000;
yardas= yardas / 91.44;
printf("Las millas son: %.3f.\nLos pies son %.3f.\nLas yardas son %.3f.\n",millas,pies,yardas);
return 0;
}
