#include <stdio.h>
#include<stdlib.h>
#include<string.h>



//La structure map
struct map
{
	unsigned ligne;
	unsigned colonne;
	char** tete;

};
typedef struct map map;




//La fonction create map
map createmap(unsigned l, unsigned c)
{
	map M={0,0,NULL};
	M.ligne=l;
	M.colonne=c;
	M.tete=(char**)malloc(l*sizeof(char*));
	for(int i=0;i<M.ligne;i++)
	{
		M.tete[i]=(char*)malloc(c*sizeof(char));
		memset(M.tete[i],46,(c*sizeof(char)));
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
			printf("%c ",M.tete[i][j] );
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


//la fonction heatmap
void heatmap(map T,char x)
{
	char p='0';
	int i;
	int j;
	char k=x;

	for (i=0;i<T.ligne;i++)
	{
		for (j=0;j<T.colonne;j++)

		{
			if (T.tete[i][j]==k)
			{
				if((j-1)>=0 && (T.tete[i][j-1]=='.' ))
				{
					

					T.tete[i][j-1]=p;
				}

				if((j+1)<T.colonne && (T.tete[i][j+1]=='.' ))
					T.tete[i][j+1]=p;

				if((i-1)>=0 && (j-1)>=0 && (T.tete[i-1][j-1]=='.' ))
					T.tete[i-1][j-1]=p;

				if((i-1)>=0 && (T.tete[i-1][j]=='.' ))
					T.tete[i-1][j]=p;

				if(i-1>=0 && j+1<T.colonne && (T.tete[i-1][j+1]=='.' ))
					T.tete[i-1][j+1]=p;

				if(i+1<T.ligne && j-1>=0 && (T.tete[i+1][j-1]=='.' ))
					T.tete[i+1][j-1]=p;

				if(i+1<T.ligne && (T.tete[i+1][j]=='.' ))
					T.tete[i+1][j]=p;

				if(i+1<T.ligne && j+1<T.colonne && (T.tete[i+1][j+1]=='.' ))
					T.tete[i+1][j+1]=p;	
			}
		}
	}

	char kk='0';
	char pp='1';
	int l;
	int m;
	for(l=0;l<T.ligne;l++) 
	{
		for(m=0;m<T.ligne;m++)
		{
			if(T.tete[l][m]=='.')
			{
				for (i=0;i<T.ligne;i++)
				{
					for (j=0;j<T.colonne;j++)
					{
						if (T.tete[i][j]==kk)
						{
							if((j-1)>=0 && (T.tete[i][j-1]=='.' ))
								T.tete[i][j-1]=pp;

							if((j+1)<T.colonne && (T.tete[i][j+1]=='.' ))
								T.tete[i][j+1]=pp;

							if((i-1)>=0 && (j-1)>=0 && (T.tete[i-1][j-1]=='.' ))
								T.tete[i-1][j-1]=pp;

							if((i-1)>=0 && (T.tete[i-1][j]=='.' ))
								T.tete[i-1][j]=pp;

							if(i-1>=0 && j+1<T.colonne && (T.tete[i-1][j+1]=='.' ))
								T.tete[i-1][j+1]=pp;

							if(i+1<T.ligne && j-1>=0 && (T.tete[i+1][j-1]=='.' ))
								T.tete[i+1][j-1]=pp;

							if(i+1<T.ligne && (T.tete[i+1][j]=='.' ))
								T.tete[i+1][j]=pp;

							if(i+1<T.ligne && j+1<T.colonne && (T.tete[i+1][j+1]=='.' ))
								T.tete[i+1][j+1]=pp;	
						}
					}
				}
				kk=kk+1;
				pp=pp+1;
			}
		}
	}
}

	

int main()
{
	map T= createmap(20,20);
	char x='x';
	char y='y';
	T.tete[2][3]=x;
	T.tete[18][17]=y;
	heatmap(T,x);
	affichagemap(T);
	printf("\n\n");


}



//FIN DU PROJET


