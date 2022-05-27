#include <stdio.h>
#include<stdlib.h>
#include<string.h>



//affichage map
struct map
{
	unsigned ligne;
	unsigned colonne;
	int** tete;

};

typedef struct map map;

struct piece
{
	map m;
};
typedef struct piece piece;


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
	M=createmap(3,3);
	int i;
	While (j<M.ligne);
	{
		for (i=0;i<strlen(ch);i++)
		{
			while(ch[i]!="\n")
			{
				if(ch[i]==0)
					M.tete[i]=M.tete[i]+1;
				M.tete[i]=1;
				i++;
			}
			i++;
			j++;
		}
	}
	return M;
}


piece createpiece(char Ch)
{
	piece p;

	p.m=createmap(3,3);
	int i=0;
	int j=0;;
	int k;
	for (k=0;k<strlen(ch);k++)
	{
		if(ch[k]=="0")
			p.m.tete[i][j]=0;

		if(ch[k]=="*")
			p.m.tete[i][j]==1;
		j++
		if (ch[k]=="\n")
			i++;
			j=0;	
	}
	return p;
}



//la fonction verifier
void check(map M,piece P,int i, int j)
{
	int i;
	int j;
	int k=0;
	int l=0;

	//iterer et garder les max
	// regerder si les max + i et j inferieur aux colonnes et lignes et appliquer la boucler sino  return 0
	
	for(i=0;i<M.ligne && k < 3;i++)
	{
		
		for (j=0;j<M.colonne && l < 3;j++)
		{

			if(p.m.tete[k][l]=="*")
				if(M.tete[i][j]=="*")
					return 0;
		l++;
				
		}
	k++;
	} 
	return 1;

}



//placer la piece dans la map si check =0; 
void PlacerPiece(map M, piece P)
{
	int i;
	int j;
	for(i=0;i<M.ligne;i++)
	{
		for (j=0;j<M.colonne;j++)
			M.tete[i][j]=P.m.tete[i][j];
	} 
	return;
}







//Placer toutes les pieces





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
 