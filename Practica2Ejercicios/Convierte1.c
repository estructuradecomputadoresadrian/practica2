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
printf("%.3f kilometros es igual a %.3f yardas\n",kilometros,yardas);
printf("%.3f kilometros es igual a %.3f millas\n",kilometros,millas);
printf("%.3f kilometros es igual a %.3f pies\n",kilometros,pies);
return 0;
}





