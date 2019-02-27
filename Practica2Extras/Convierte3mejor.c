#include <stdio.h>
int main (){
int confirmacion;
float temperatura1,temperaturafinal;
printf("Introduce una temperatura:\n");
scanf("%f", &temperatura1);
printf("¿Es una temperatura en grados centigrados (1) o en grados farenheit (2)?\n");
scanf("%i",&confirmacion);
if (confirmacion == 1){
temperaturafinal = temperatura1 * 9;
temperaturafinal = temperaturafinal / 5;
temperaturafinal = temperaturafinal + 32;
printf("%.3f grados centigrados equivalen a %.3f grados farenheit.\n" ,temperatura1, temperaturafinal);
}
else{
if (confirmacion == 2){
temperaturafinal = temperatura1 - 32;
temperaturafinal = temperaturafinal * 5;
temperaturafinal = temperaturafinal / 9;
printf("%.3f grados farenheit equivalen a %.3f grados celsius.\n", temperatura1, temperaturafinal);
}
else{
printf("Parametro no contemplado, cerrando aplicacion.\n");
}
}
return 0;
}
