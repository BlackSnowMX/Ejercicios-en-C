/*Ejercicio 2.7, Unidad 2, Solucion de problemas con estructuras secuenciales,
Luis Jesus Rodriguez Montiel*/

#include <stdio.h>
void var();
void op();
int main() {
           var();
           op();
           return 0;
           }
int km;
float ckm,tc;
void var() {
           printf("\n\n¿Cuantos km usted recorrerá?\n");
           scanf("%i",&km);
           printf("\n\n¿cual es el precio por km?\n");
           scanf("%f",&ckm);
            }
void op() {
          tc=(km*ckm);
          printf("%s %s %f %s","\n\nEl precio del boleto es de:\n","$",tc,"pesos\n");
          } 
