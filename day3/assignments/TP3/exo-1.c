#include<stdio.h>
#include<stdlib.h>
#include<math.h>



typedef struct {
	double a;//partie reellle
	double b;//partie imaginaire
} numcomplex;

numcomplex add(numcomplex*q, numcomplex*p)
{
	numcomplex *r1=(numcomplex*)malloc(sizeof(numcomplex));

	r1->a = q->a+p->a;
	r1->b = q->b+p->b; 

	return(*r1);
	

}

numcomplex sub(numcomplex*q, numcomplex*p)
{
	numcomplex *r2=(numcomplex*)malloc(sizeof(numcomplex));

	r2->a = q->a-p->a;
	r2->b = q->b-p->b; 

	return(*r2);

}


numcomplex mul(numcomplex*q, numcomplex*p)
{
	numcomplex *r3=(numcomplex*)malloc(sizeof(numcomplex));
	r3->a = (q->a)*(p->a)-(q->b)*(p->b);
	r3->b = (q->a)*(p->b)+ (p->a)*(q->b);

	return(*r3);
}


numcomplex divi( numcomplex*q, numcomplex*p)
{
	numcomplex *r4=(numcomplex*)malloc(sizeof(numcomplex));
	numcomplex *ps=(numcomplex*)malloc(sizeof(numcomplex));
	ps->a=p->a;
	ps->b=(-(p->b));
	numcomplex qq=mul(q,ps);
	numcomplex pp= mul(p,ps);
	r4->a=(qq.a)/(pp.a);
	r4->b=(qq.b)/(pp.b);

	return(*r4); 

}



// Comment liberrer la memoire??






int main()
{	
	numcomplex result1;
	numcomplex result2;
	numcomplex result3;
	numcomplex result4;
	numcomplex comp= {2,5};
	numcomplex cont= {3,4};
	result1=add(&comp, &cont);
	printf("le resultat de la somme est %.0lf+i%.0lf\n",result1.a,result1.b);
	result2=sub(&comp, &cont);
	printf("le resultat de la soustraction est %.0lf+i%.0lf\n",result2.a,result2.b);
	result3=mul(&comp, &cont);
	printf("le resultat de la multiplication est %.0lf+i%.0lf\n",result3.a,result3.b);
	result4=divi(&comp, &cont);
	printf("le resultat de la division est %.0lf+i%.0lf\n",result4.a,result4.b);


	return 0;
}