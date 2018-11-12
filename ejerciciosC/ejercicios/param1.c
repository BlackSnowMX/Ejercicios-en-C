#include <stdio.h>
#include <string.h>


int leerCadena(char c_par[100])
{
	char c[100]="";
	scanf("%s",c);
	strcpy(c_par,c);
	return 0;
}

int main(int argc,char *argv[])
{
	char nombre[100];
	leerCadena(nombre);
	printf("%s",nombre);
	return 0;
}
