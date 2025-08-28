#include <stdio.h>
#include <stdlib.h>

int maior(int,int);

int main(void){
	int value0, value1;
	scanf("%d %d", &value0, &value1);
	maior(value0, value1);
	return 0;
}

int maior(int value0, int value1){
	if (value0>value1){
		printf("%d é o maior", value0);
	}
	else if (value0 < value1){
		printf("%d é o maior", value1);
	}else{
		printf("Os valores são iguais");
	}
	printf("\n");

}
