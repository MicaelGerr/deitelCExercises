#include <stdio.h>
#include <stdlib.h>

int trianEmPeContrario(int);
int trianEmPeReverso(int);
int trianEmPe(int);

int main(void){
	int tamanho = 10;
	trianEmPeContrario(tamanho);
	return 0;
}

int trianEmPe(int tamanho){
	int cont, contAsterisco;
	for( int cont = 0; cont< tamanho; cont++){
		for (int contAsterisco = 0; contAsterisco < cont +1; contAsterisco ++){
			printf("*");
		}
		printf("\n");
	}

}

int trianEmPeContrario(int tamanho){
        int cont, contAsterisco, espaco;
        for( cont = 0; cont< tamanho; cont++){
		espaco = tamanho - cont;	
		for ( int contespaco  = 0; contespaco <  espaco; contespaco++){
			printf(" ");
		}
                	for ( contAsterisco = 0; contAsterisco < cont +1; contAsterisco ++){	
           			printf("*");
               	}
		printf("\n");
	}
}


int trianEmPeReverso(int tamanho){
        int cont, contAsterisco;
        for( int cont = tamanho; cont> 0; cont--){
                for (int contAsterisco = 0; contAsterisco < cont; contAsterisco ++){
                        printf("*");
                }
                printf("\n");
        }

}
