#include<stdio.h>

typedef struct
{
	char name[50];
	char number[15];
	int id;

}personne;


void add_personne (personne* p)
{
	printf("enter the full name\n");
	scanf("%s",p->name);
	printf("enter the phone number\n");
	scanf("%s",p->number);
		
}

void list(personne CB[])
{
	for (i=0;i<8;i++)
	{
		add_personne(&CB[i]);
	}
}

void affichage(personne CB[])
{
	int i;
	for (i=0;i<8,i++)
	{
		printf("le nom est %s et le numero est %s\n",CB[i].name,CB[i].number)
	}

}

void QUIT()
{
	printf("Nous avez enregistrez ce contact avez succes.BYE");
	return;
}





int main()
{
	personne CB[8];
	int choix;
	list (CB[8]);
	affichage (CB[8]);
	return 0;
}