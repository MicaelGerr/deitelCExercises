#include <stdio.h>
#include <ctype.h>

void spacement(const char *);

int main(void){
	char words[] = "salve galerinha do youtube";
	spacement(words);

	printf("\n");

	return 0;
}

void spacement(const  char *cPtr){
	for( ; *cPtr != '\0';cPtr++){
		*cPtr = toupper(*cPtr);
		printf("%c", *cPtr);
	}
}
