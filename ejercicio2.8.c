/*Ejercicio 2.8, Unidad 2, Solucion de problemas con estructuras secuenciales,
Luis Jesus Rodriguez Montiel*/

#include <stdio.h>

void dat();
void op();

int main() {
           dat();
           op();
           return 0;
           }
float dkm,h;
int vc;
void dat() {
           printf("\n\nDame la cantidad de km que hay hasta la cuidad a la que quiere ir\n");
           scanf("%f",&dkm);
           printf("\n\nDeme la velocidad a la que recorrerá la distacia en km/h\n");
           scanf("%i",&vc);
           }
void op() {
          h=dkm/vc;
          printf("%s %f %s", "las horas que tardará son:\n",h,"horas\n");
          } 
