#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int V1=7;
	int aux, i, j;
	int Vetor[V1];

	printf("Digite %d numeros para serem organizados em ordem crescente", V1);
	for(i=0; i<V1; i++){
	printf("\nnumero %d: ", i + 1);
	scanf("%d", & Vetor[i]);
	}

	for(i=0;i<V1;i++){
		for(j=0;j<V1 - i - 1; j++){
		if(Vetor[j]>Vetor[j+1]){
		aux=Vetor[j];
		Vetor[j]=Vetor[j+1];
		Vetor[j+1]=aux;
		}
		}
	}
	for(i=0; i<V1; i++){
	printf("\n%d: %d", i + 1, Vetor[i]);
	}

}
