/*Ejercicio 2.1 Unidad 2, Solucion de problemas con estructuras secuenciales.
Luis Jesus Rodriguez Montiel*/ 

#include <stdio.h>
         float Base_t;
         float Altura_t;

int main () {
         float area;
         printf("¿cual es la Base del triangulo?\n");
         scanf("%f",&Base_t);
         printf("¿cual es la Altura del triangulo?\n");
         scanf("%f",&Altura_t);
         area=(Base_t*Altura_t)/2;
         printf("%s %f %s", "El area del triangulo es\n",area, "Metros cuadrados\n");
         return 0; 
} 

