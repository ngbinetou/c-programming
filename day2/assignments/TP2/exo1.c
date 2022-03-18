#include<stdio.h>
#include<stdlib.h>

int main()
{
	double A;
	double B;
	printf("entrer les nombres A et B" );
	scanf("%lf%lf",&A,&B);
	printf("le resultat du produit de A et B est:%.2f",A*B);
	
	return 0;
}