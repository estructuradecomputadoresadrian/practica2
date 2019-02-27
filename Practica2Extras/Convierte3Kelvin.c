#include <stdio.h>
int main ()
{
int centigrados,kelvin,suma;
suma=273;
printf("Dame tu temperatura en grados centigrados\n");
scanf("%d",&centigrados);
kelvin=centigrados+suma;
printf("Tu temperatura es %d en grados Kelvin\n",kelvin);
return 0;
}

