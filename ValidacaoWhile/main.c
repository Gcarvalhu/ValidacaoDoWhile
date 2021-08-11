#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Calcula e informa a soma de 2 valores positivos*/

int main() {
	
	int val1;
	int val2;
	int soma;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		
	printf("digite o primeiro valor");
	scanf( "%d" , &val1);//variavel digitada está sendo lida e armazenada na int val1
	printf("\ndigite o segundo valor");
	scanf("%d", &val2);
	}while(val1<0 || val2<0);
	
	soma = val1 + val2;
	
	printf("\n resultado: %d", soma);
	

	
	return 0;
}
