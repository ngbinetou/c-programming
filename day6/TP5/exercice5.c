#include <stdio.h>
#include<stdlib.h>
#include<string.h>



//La fonction strsplit

int countchar (char* str, char delim )
{
	int c;
	int i;
	for (i=0;i<strlen(str);i++)
	{
		if (str[i]==delim)
			return i;
	}
	return i;

} 


int countstring (char* str, char delim)
{
	int s;
	int i=0;
	int j;
	while (i<strlen(str))
	{
		j=0;
		if (str[i]==delim)
			i+=1;
		else
		{
			for(j=i+1;j<strlen(str);j++)
			{
				if(str[j]==delim)
				{
					s+=1;
					break;
				}
				if (str[j]=='\0')
				{
					s+=1;
					break;
				}
					
			}
		}
		i+=j+1;
	}
	return s;
} 


char** al_strsplit(char* str,char delim)
{
	
    int j=0;
    int k=0;
    int k1=0;
    int i= countstring (str,' ') + 1;
    printf("%d\n", i);
    char** W=malloc (i*(sizeof(char*)));

    while (j<strlen(str))
    {
  
        while (str[j]==delim)
            j++;
        int e = countchar(&str[j],' ');
        if (e==0)
        	break;
        W[k] = malloc(countchar(&str[j],' ')*(sizeof(char)));
       	while (str[j]!=delim && str[j]!='\0')
        {
        	W[k][k1]=str[j];
            k1++, j++;
        }
        W[k][k1]= '\0';
        k1= 0;
        k++;
    }
    return (W);
}



int main()
{
	
    char string[]="hdfyhds dyhdbvjhd fdhsbvgc duyd ";
    char** D= al_strsplit(string,' ');
    printf("%s\n",D[0]);
    printf("%s\n",D[1]);
    printf("%s\n",D[2]);
    printf("%s\n",D[3]);
	return 0;
}
