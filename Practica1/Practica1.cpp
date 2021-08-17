#include <stdio.h>
#include <stdlib.h>


//FUNCIÓN PRNCIPAL
int main(){
	
	int tamNum,lista[10000],numaux;
	
	 printf( "\nCuantos numeros se reordenaran: " );
	 scanf( "%d", &tamNum );
	 
	 //Llenamos el arreglo de forma aleatoria
	 for(int i=0;i<tamNum;i++){
	 	lista[i]=rand() % 10000;
	 }
	 
	 //Ordenamos los valores que tenemos en nuestra lista
	for(int j=0;j<tamNum;j++){
		for(int k=0;k<tamNum;k++){
			if(lista[k]!=lista[tamNum-1]){
				if(lista[k]>lista[k+1]){
					numaux=lista[k];
					lista[k]=lista[k+1];
					lista[k+1]=numaux;
				}
			}
		}
	}
	 
	for(int l=0;l<tamNum;l++){
		printf( "\n%d",lista[l] );
	}



	return 0;
	
}
