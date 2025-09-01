#include <stdio.h>
#include <ctype.h>

void convertToUpperCase( char *sPtr);

int main(void){

	char string[] = "caracteres incriveis";
	convertToUpperCase( string);
	
	printf("O valor depois da conversão é: %s", string);
	printf("\n");
	return 0;
}

void convertToUpperCase(char *sPtr){
	while( *sPtr != '\0'){
		*sPtr = toupper(*sPtr);
		sPtr ++;
		*sPtr = toupper(*sPtr);
	}

}
