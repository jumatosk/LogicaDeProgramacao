#include<stdio.h>
#include<stdlib.h>

typedef struct{
	double nota1;
	double nota2;
}Bimestre[2];

typedef struct{
	Bimestre b1;
	Bimestre b2;
}aluno;

int main(){
	printf("Informe a nota 1 do Bimestre 1: ");
	scanf("%d", &aluno.b1);
}