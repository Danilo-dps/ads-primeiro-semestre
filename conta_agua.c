#include <stdio.h>

int main()
{
	int n, conta, excedente;
	scanf("%d", &n);
	
	if(n <= 10)
	{
		conta = 7;
	}
	else if(n > 10 && n <= 30)
	{
		excedente = n - 10; 
		conta = 7 + (excedente * 1);
	}
	else if(n > 30 && n <= 100)
	{
		excedente = n - 30; 
		conta = 7 + 20 + (excedente * 2); 
    }
	else if(n > 100)
	{
		excedente = n - 100; 
		conta = 7 + 20 + 140 + (excedente * 5); 
	}
	printf("\n%d", conta);
	return 0;
}

