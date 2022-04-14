#include <stdio.h>
#include<string.h>


int main()
{
//1
	char s[]={'H','e','l','l','o','\0'};

//2
	char c[6]="";
	c[0]="W";
	c[1]="o";
	c[2]="r";
	c[3]="l";
	c[4]="d";

//3
	char cs[12]="";
	cs[0]=s[0];
	cs[1]=s[1];
	cs[2]=s[2];
	cs[3]=s[3];
	cs[4]=s[4];
	cs[5]=" ";
	cs[6]=c[0];
	cs[7]=c[1];
	cs[8]=c[2];
	cs[9]=c[3];
	cs[10]=c[4];
	cs[11]={'\0'};

//4
	strcat(s," World");


//5 
	css[12]="";
	strcpy(css,"Hello World");


//6
/*
char s1[ ] = "Hello"; returns Hello
char s2[ ] = "hello"; returns hello
char s3[ ] = {'h', 'e', 'l' , 'l', '\0'} //";" is forgotten
strcmp(s1, s2); returns >0
strcmp(s2, s1); returns <0
strcmp(s1, s3); no return
strcmp(s2, s3); no return
*/


//7 rewritte gets using getchar
	char test[]="djfeimfnhfj"
	int i;
	for(i=0; i< strlen(test)-1;i++)
		getchar(test[i])
	return;



//8 rewritte puts using putchar
	char test[]="djfeimfnhfj"
	int i;
	for(i=0; i< strlen(test)-1;i++)
		putchar(test[i])
	printf();



//9
	int max=100;
	char obs[102];
	int len; 
	char pivot []="secret";
	char succeed []="success";
	char failure []="failed";


	printf("entrez une chaine de caracteres")
	fgets(obs,102,stdin);

	len = strlen(obs);
	if (obs(len-1)=='\n');
		obs(len-1)='\0';

	if (strcmp(obs,secret)==0)
		fput(success,stdout)
	fput(failed,stdout);



//level 01
	












	




	return 0;
}