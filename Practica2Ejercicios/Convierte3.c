#include <stdio.h>
int main (){
float celsius, farenheit;
printf("Introduce una temperatura en grados celsius\n");
scanf("%f",&celsius);
farenheit = celsius * 9;
farenheit = farenheit / 5;
farenheit = farenheit + 32;
printf("%.3f grados centigrados equivalen a %.3f grados farenheit.\n",celsius, farenheit);
return 0;
}
