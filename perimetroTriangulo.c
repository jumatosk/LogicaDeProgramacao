#include<stdio.h>
#include<stdlib.h>

int getPerimetro(int lado1, int lado2, int lado3);

int main(){
	int lado1, lado2, lado3;
	
	printf("Lado 1:" );
	scanf("%d", &lado1);
	printf("\nLado 2: " );
	scanf("%d", &lado2);
	printf("\nLado 3: " );
	scanf("%d", &lado3);
		
	printf("\nPerimetro: %d", getPerimetro(lado1, lado2, lado3));
}

int getPerimetro(int lado1, int lado2, int lado3){
	return lado1 + lado2 + lado3;
}
