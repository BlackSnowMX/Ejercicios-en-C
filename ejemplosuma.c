#include <stdio.h>

int sumar (int a, int b)
{
return (a+b);
}

int main ()
{
          int x,y;
          printf("introduce el valor del numero a sumar ");
          scanf("%d",&x);
          printf("introduce el valor del numero a sumar ");
          scanf("%d",&y);
          printf("%d\n",sumar(x,y));
          return 0;
}  
