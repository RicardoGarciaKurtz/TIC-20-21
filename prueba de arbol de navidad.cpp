/*escribe una funcion que te de un arbol de navidad y ponga un mensaje
de feliz navidad
1. se puede intentar poner la mitad de la copa del arbol
    *
   ** 
  ***
 **** 
*****
2. la otra parte
*
**
***
****
*****
3 se intenta la copa del arbol:
para un arbol de 5
fila=1 4 espacios + 1 asterisco
fila=2 3 espacios + 3 asteriscos
fila=3 2 espacios + 5 asteriscos 
fila=4 1 espacio + 7 asteriscos
fila=5 0 espacios + 9 asteriscos
*/
#include<stdio.h>

int main{
	espacios=0;
	asteriscos=0;
	altura=0;
	fila=0;
	for(fila=1;fila<=altura;fila++){
		for(col=1;col<=fila,col++){
			printf("*");
		}
	}
	printf("introduce la altura del arbol");
	scanf("%d",altura)
			
}
