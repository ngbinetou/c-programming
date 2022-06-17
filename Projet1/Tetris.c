#include <stdio.h>
#include<stdlib.h>
#include<string.h>



//La structure map
struct map
{
	unsigned ligne;
	unsigned colonne;
	int** tete;

};

typedef struct map map;



//la structure piece
struct piece
{
	map m;
	int maxLigne ;
	int maxColonne;
	//declarer un tableau de piece
	piece tabPiece[10];
};
typedef struct piece piece;



//La fonction creer map
map createmap(unsigned l, unsigned c)
{
	map M={0,0,NULL};
	M.ligne=l;
	M.colonne=c;
	M.tete=(int**)malloc(l*sizeof(int*));
	for(int i=0;i<M.ligne;i++)
	{
		M.tete[i]=(int*)malloc(c*sizeof(int));
		memset(M.tete[i],0,(c*sizeof(int)));
	}
	return M;
}



//La fonction afficher map
void affichagemap(map M)
{
	int i;
	int j;
	for (i=0;i<M.ligne;i++)
	{
		for(j=0;j<M.colonne;j++)
			printf("%d ",M.tete[i][j] );
		printf("\n");
	}
	return;
}


//La fonction liberer map
void libererMap(map M)
{
    if(M.tete!=NULL)
    {
    	int i;
        for(i=0;i<M.colonne;i++)
        {
            if(M.tete[i]!=NULL)
                free(M.tete[i]);
        }
        free(M.tete);
    }
    return;
}





//creer piece
piece createpiece(char Ch)
{
	piece p;
	p.m=createmap(3,3);
	p.maxLigne=0;
	p.maxColonne=0;

	int i=0;
	int j=0;;
	int k;
	for (k=0;k<strlen(ch);k++)
	{
		if(ch[k]=="0")
			p.m.tete[i][j]=0;

		if(ch[k]=="*")
		{
			p.m.tete[i][j]==1;
			
			if (k/4 > p.maxLigne)
				p.maxLigne=k/4;

			if (k%4 > p.maxColonne)
				p.maxColonne=k%4;
		}
		j++;
		
		if(ch[k]=="\n")
			i++;
			j=0;
	}

	return p;
}








//la fonction verifier
void Check(map M,piece P,int i, int j)
{
	int i;
	int j;
	int k=0;
	int l=0;
	
	if((p.maxLigne + i)<M.ligne  && (p.maxColonne+j)<M.colonne)
	{
		for(i=0;i<M.ligne && k<3;i++)
		{
		
			for (j=0;j<M.colonne && l<3;j++)
			{

				if(p.m.tete[k][l]=="*")
					if(M.tete[i][j]=="*")
						return 1;
			l++;
				
			}
		k++;
		}
	}
	return 0;

}





//placer la piece dans la map si check =1; 
int PlacerPiece(map M, piece P,int i, int j)
{
	int k;
	int l;
	if (Check(map M, piece P,int i, int j)==1)
	{	
		for(k=i;k<M.ligne;k++)
		{
			for (l=j;l<M.colonne;l++)
				M.tete[k][l]=P.m.tete[k-i][l-i];			
		}
		return 1;

	} 
	return 0;
}



//La fonction Backtraking

void Backtraking(Map M,Piece P)
{
	int k;
	int l;
	for(k=i;k<M.ligne;k++)
		{
			for (l=j;l<M.colonne;l++)
			{
				if(PlacerPiece(map M, piece P,int i, int j)==1)
					for(n=1;n<10;n++)
						Backtraking(Map M, P.tabPiece[n])
			}
		}


}






//Placer toutes les pieces
void tetris()
{





}





int main()
{
	char ps[] = "*00\n*00\n**0\n\n**0\n0*0\n000\n\n";
	map P=createmap(3,3);
	affichagemap(P);
	printf("\n\n");
	map q=createpiece(3,3);
	affichagemap(q);

	return 0;
}
 