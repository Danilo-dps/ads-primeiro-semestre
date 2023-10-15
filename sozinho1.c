#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	
	int num1, num2, num3, soma;
	char a1 [60];
	
	printf("Insira seu nome completo:\n");
	gets(a1);
	
	printf("Insira um número:\n");
	scanf("%d", &num1);
	
	printf("Insira um número:\n");
	scanf("%d", &num2);
	
	printf("Insira um número:\n");
	scanf("%d", &num3);
	
	soma=num1+num2+num3;

	printf("A soma de %d, %d, %d é:\n", num1, num2, num3);
	printf("%d", soma);
	
	return 0;
	system("pause");
}
