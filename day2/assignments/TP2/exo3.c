#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
	int   i =  8;
	int   j =  5;
	float x =  0.005f;
	float y = -0.01f;
	char  c = 'c';
	char  d = 'd';


	int result1=(int)(3*i-2*j)%(2*d-c); 
	int result2=2*((i/5) + (4*(j-3))%(i + j - 2));
	

	printf(" le premier resultat est:%d\n",result1);
	printf(" le deuxieme resultat est:%d\n",result2);

//verifions si i<=j
	if (i<=j)
		printf("(3eme result)True\n");
	else
		printf("(3eme result)False\n");


//verifions si j!=6
	if (j!=6)
		printf("(4eme result)True\n");
	else
		printf("(4eme result)False\n");

//verifions si c==99
	if (c==99)
		printf("(5eme result)True\n");
	else
		printf("(5eme result)False\n");    


//verifions si 5*(i + j) > 'c'
	if (5*(i + j) > 'c')
		printf("(6eme result)True\n");
	else
		printf("(6eme result)False\n");


//verifions si (i > 0) && (j < 5)
	if ((i > 0) && (j < 5))    
		printf("(7eme result)True\n");
	else
		printf("(7eme result)False\n");



//verifions si (i > 0) || (j < 5)
	if ((i > 0) || (j < 5))     
		printf("(8eme result)True\n");
	else
		printf("(8eme result)False\n");



//verifions si (x > y) && (i > 0) || (j < 5)
	if ((x > y) && (i > 0) || (j < 5))    
		printf("(9eme result)True\n");
	else
		printf("(9eme result)False\n");


//verifions si (x > y) && (i > 0) && (j < 5)
	if ((x > y) && (i > 0) && (j < 5))    
		printf("(10eme result)True\n");
	else
		printf("(10eme result)False\n");



	return 0;
}