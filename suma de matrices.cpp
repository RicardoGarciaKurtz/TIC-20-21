//trabajo con matrices    
#include<stdio.h>

int main(){
	int matriz_1[3][3];
	int matriz_2[3][3];
	int matriz_suma[3][3];
	int fil,col;
	//leo las matrices
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("\nfila %d, columna %d: ",fil+1,col+1);
			scanf("%d",&matriz_1[fil][col]);
		}
	}
	//muestro la matriz
	printf("\n has introducido la matriz: \n");
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("%d ",matriz_1[fil][col]);
		}
		printf("\n");
	}
		for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("\nfila %d, columna %d: ",fil+1,col+1);
			scanf("%d",&matriz_2[fil][col]);
		}
	}
		printf("\n has introducido la matriz: \n");
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("%d ",matriz_2[fil][col]);
	}
		printf("\n");
}
	//sumo matrices
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			matriz_suma[fil][col]=matriz_1[fil][col]+matriz_2[fil][col];
		}
	}	
	//muestro la matriz suma
	printf("\n suma: \n");
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("%d",matriz_suma[fil][col]);
		}
		printf("\n");
	}
	
}



