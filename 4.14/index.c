#include <stdio.h>
#include <stdlib.h>

long int fatorial(long int);

int main(void){
	long int numero;
	scanf("%ld", &numero);
	printf("%ld", fatorial(numero));
}

long int fatorial(long int value){
	long int result;
	if ( value == 1){
		result = 1;
	}else{
		result = fatorial(value -1)* value;
	}
	return result;
}
