/*Ejercicio 2.3, unidad 2, Solucion de problemas con estructuras secuenciales,
Luis Jesus Rodriguez Montiel*/

#include <stdio.h>

int A_N;
int main () {
            const int A_C=2018;
            int E;
            printf("Dame el año de nacimiento\n");
            scanf("%d",&A_N);
            E=(A_C-A_N);
            printf("%s %d %s","La edad del empleado es\n", E, "años\n");
            return 0;
            } 
