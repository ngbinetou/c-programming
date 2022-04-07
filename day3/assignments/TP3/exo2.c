#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int i;
	char str[100]; 

}intStr;



void inverser (intStr* pile, intStr* face)
{
	int j;
	intStr pivot={0,""};
	pivot.i=pile->i;
	pile->i=face->i;
	face->i=pivot.i;

	for(j=0;j<100;j++)
		pivot.str[j]==pile->str[j];

	for(j=0;j<100;j++)
		pile->str==face->str;

	for(j=0;j<100;j++)
		face->str==pivot.str;
	return;
}


int main()
{
	intStr pile= {1,"bnfhd"};
	intStr face= {2,"hfuejd"};
	printf("l'ancien nombre de pile:%d\n",pile.i);
	printf("l'ancienne chaine de pile:%s\n",pile.str);
	printf("l'ancien nombre de face:%d\n",face.i);
	printf("l'ancienne chaine de face:%s\n\n",face.str);
	
	inverser(&pile,&face);
	printf("le nouveau nombre de pile:%d\n",pile.i);
	printf("la nouvelle chaine de pile:%s\n",pile.str);
	printf("le nouveau nombre de face:%d\n",face.i);
	printf("la nouvelle chaine de face:%s\n",face.str);
	

}