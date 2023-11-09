#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int V1=10;
	float Vetor[V1];
	int i;


	printf("insira %d para serem multiplicado por 2\n", V1);

	for(i=0;i<V1;i++){
	printf("\nvalor %d:", i+1);
	scanf("%f", & Vetor[i]);
	}

	for(i=0;i<V1;i++){
	Vetor[i]=Vetor[i]*2;
	}

	for(i=0;i<V1;i++){
	printf("Resultado do %d: %.2f\n", i + 1, Vetor[i]);
	}
}
