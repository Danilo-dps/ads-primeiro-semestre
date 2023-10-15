#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main(void){
	setlocale (LC_ALL, "Portuguese");
	struct meus_dados
	{
		char nome [100];
		char nome_mae[100];
		char nome_pai[100];
		int cpf[100];
		int rg[100];
		int celular[100];
	};
	
	struct meus_dados dados;
	
	printf("\n----------------- Cadastro de dados -------------\n\n\n");
	
	printf("Nome.............................:\n");
	fflush(stdin);
	scanf(dados.nome,100,stdin);

	printf("Nome da mãe.......................:\n");
	fflush(stdin);
	scanf(dados.nome_mae,100,stdin);
	
	printf("Nome do pai........................:\n");
	fflush(stdin);
	scanf(dados.nome_pai,100,stdin);
	
	printf("Insira o CPF.......................:\n");
	fflush(stdin);
	scanf(dados.cpf,100,stdin);
	
	printf("Insira o RG.........................:\n");
	fflush(stdin);
	fgets(dados.rg,100,stdin);
	
	printf("Insira o número de celular..........:\n");
	scanf(&dados.celular);
	
	printf("\n\n-------------Lendo os dados da Struct--------------\n\n");
	
	printf("Nome................: %s\n", dados.nome);
	printf("Nome da Mãe.........: %s\n", dados.nome_mae);
	printf("Nome do Pai.........: %s\n", dados.nome_pai);
	printf("Número do CPF.......: %s\n", dados.cpf);
	printf("Número do RG........: %d\n", dados.rg);
	printf("Número do Celular...: %d\n", dados.celular);
	
	return 0;
}

