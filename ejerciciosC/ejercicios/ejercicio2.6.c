/*Ejercicio 2.6, Unidad 2, Solucion de problemas secuenciales, 
Luis Jesus Rodriguez Montiel*/

#include <stdio.h>
#include <math.h>
void var();
void cal();
int main() {
           var();
           cal();
           return 0; 
           }
/*se le piden los datos al usuario*/
float altura,base,hip,h;
void var() {
           printf("\n\nDame la altura del triangulo\n");
           scanf("%f",&altura);
           printf("\n\nDame la base del triangulo\n");
           scanf("%f",&base);
           } 
/*operacion*/
void cal() {
           hip=((altura*altura)+(base*base));
           h=(hip);
           printf("%s %f %s","\n\nLa hipotenusa del triangulo es:\n",h,"Metros cuadrados\n");
           } 
