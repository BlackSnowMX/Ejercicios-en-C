#include <stdio.h>

#define ZERO 100
#define OK_FLAG 0
#define ERR_FLAG -1

int leerOperadores()
{
	printf("\n\tLectura de datos");
	return OK_FLAG;
} 
  /* Este programa se usa para resolver el area de un triangulo*/ 
float base, altura,area;

int capturar()
{
           printf("\n\n Escriba el valor de la base\n");     
           scanf("%f",&base);
           printf("\n\n Escriba el valor de la altura\n"); 
           scanf("%f",&altura);
         if (base>0 && altura>0)
             return OK_FLAG;
         else 
         {
             printf ("valores incorrectos\n");
             return ERR_FLAG;
         } 
} 
int informar() 
{ 
           area=(base*altura) /2;
           printf("%s %f %s","su area es",area,"Metros cuadrados\n");   
           return OK_FLAG;
}

