#include <stdio.h>
int main ()
{
float kilometros,yardas,millas,pies;
int consultorio;
printf("Dame una cantidad en kilometros\n");
scanf("%f",&kilometros);
printf("¿Quieres convertirlo a yardas(1), millas(2) o pies(3)?\n");
scanf("%i",&consultorio);
millas= kilometros / 1.60;
pies= kilometros * 100000;
pies= pies / 30.48;
yardas= kilometros * 100000;
yardas= yardas / 91.44;
if (consultorio == 1) {
printf("%.3f kilometros es igual a %.3f yardas\n",kilometros,yardas);
}
else if (consultorio == 2){
printf("%.3f kilometros es igual a %.3f millas\n",kilometros,millas);
}
else if (consultorio == 3){
printf("%.3f kilometros es igual a %.3f pies\n",kilometros,pies);
}
else {
printf("No te entiendo, cerrando.");
}
return 0;
}





