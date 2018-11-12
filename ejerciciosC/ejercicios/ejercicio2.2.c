/*Ejercicio 2.2, Unidad 2, Solucion de problemas com estructuras secuenciales,
Luis Jesus Rodriguez Montiel*/

#include <stdio.h>

float C_P;

int main() {
             const float P_D=19.45;
                   float T_D;
             printf("Dame la cantidad de pesos que quiera convetir a dolare\n");
             scanf("%f",&C_P);
             T_D=(C_P/P_D);
             printf("%s %f %s", "Cantidad de dolares conseguidos\n",T_D,"Dolares\n");
             return 0;
            } 
