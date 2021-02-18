//cadenas 3
#include<stdio.h>
int main(){
	char nombre[3][20]={"Antonio", "Pedro", "Jose Juan"};
	int cont;
	printf("lista de nombres leidos:\n");
	for(cont=0;cont<3;cont++){
		printf("%s \n",nombre[cont]);
	}
	
	return 0;
	
	
}
