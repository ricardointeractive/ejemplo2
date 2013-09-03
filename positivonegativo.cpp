#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
	{
	int numero,papa;
	printf("Inserte su numero: ");
	scanf("%d",&numero);
	if(numero==0)
	printf("El numero %d es NULO",numero);
	else
		{
			if(numero<0)
				printf("El numero %d es NEGATIVO",numero);
			else
				printf("El numero %d es POSITIVO",numero);
		}
	return 0;
}

