/*Ejercicio 2.9, Unidad 2, Solucion de problemas con estructuras secuenciales,
Luis Jesus Rodriguez Montiel*/

#include <stdio.h>

void dat();
void inf();

int main() {
           dat();
           inf();
           return 0;
           }
int DU;
float CM,TP;

void dat() {
           printf("\n\n¿cuantos minutos duró su llamada? \n");
           scanf("%i",&DU);
           printf("\n\n¿cual es el costo por minuto?\n");
           scanf("%f",&CM);
           }
void inf() {
           TP=DU*CM;
           printf("%s %s %f %s", "\n\nEl costo de la llamada es de: \n","$", TP,"pesos\n\n");
           }

