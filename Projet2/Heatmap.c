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






//la fonction smallerpath1 trouve le chemin le plus petit mais ne prend pas en compte les obstacles. C'est un algorithme qui ne fonctionne que dans le cas ou il n'y a pas d'obstacles.
void smallerpath1 (map T, int x, int y)
{
	int i;
	int j;
	int k;
	int l;
	int o;
	int u;
	char xx=x;
	char yy=y;

	for (i=0;i<T.ligne;i++)
	{
		for (j=0;j<T.colonne;j++)
		{
			for (k=0;k<T.ligne;k++)
			{
				for (l=0;l<T.colonne;l++)
				{
					if (T.tete[i][j]==xx)
					{
						if (T.tete[k][l]==yy)
						{
							if(j-l<0)
							{
								int m= l-j;
								for (o=j+1; o<=m; o++)
									T.tete[i][o]='*';
							}
							if (j-l>0)
							{
								int m=j-l;
								for (o=l+1; o<=m; o++)
								{
									T.tete[i][o]='*';
								}

							}
							if (i-k<0)
							{
								int n=k-i;
								for(u=i+1;u<=n;u++)
									T.tete[n][l]=='*';
							}	

							if (i-k>0)
							{
								int n=i-k;
								for(u=k+1;u<=n;u++)
									T.tete[n][l]=='*';
							}		
				
						}
					}
				}
			}	

		}
	}


}






void smallerpath2(map T, int x, int y)
{
	T.tete[2][3]=x;
	T.tete[18][17]=y;
	map Tt= heatmap(T,x);
	char yy=y;
	int i;
	int j;
	int m;
	int n;
	int k;
	int l;
	char s;
	for (m=0;m<T.ligne;m++)
	{
		for (n=0;n<j.colonne;n++)

		{
			if (T.tete[m][n]==yy)
			{
				for (i=0;i<T.ligne;i++)
				{
					for (j=0;j<T.colonne;j++)
					{
						if((j-1)>=0)
							s=T.tete[i][j-1];

						if((j+1)<T.colonne && T.tete[i][j+1]<s)
							k=i;
							l=j+1;

						if((i-1)>=0 && (j-1)>=0 && (T.tete[i-1][j-1]<s))
							k=i-1;
							l=j-1;

						if((i-1)>=0 && (T.tete[i-1][j]<s ))
							k=i-1;
							l=j;

						if(i-1>=0 && j+1<T.colonne && (T.tete[i-1][j+1]<s))
							k=i-1;
							l=j+1;

						if(i+1<T.ligne && j-1>=0 && (T.tete[i+1][j-1]<s ))
							k=i+1;
							l=j-1;

						if(i+1<T.ligne && (T.tete[i+1][j]<s))
							k=i+1;
							l=j;

						if(i+1<T.ligne && j+1<T.colonne && (T.tete[i+1][j+1]<s))
							k=i+1;
							l=j+1;

						T[k][l]='*';

					}
				}
			}
			yy=yy-1;

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






