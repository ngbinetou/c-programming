#include <stdio.h>
#include<stdlib.h>

void* al_memchr (const void *s, int c, size_t n)
{
	char *p=(char *)s;
	for (i=0;i<n;i++)
	{
		if (*p==(char)c)
			return p;
		p+=1;

	}
	return NULL;

}

void *al_memset (void* s,int c, size_t n)
{
	int i;
	//char *p=(char*)s
	for(i=0;i<n;i++)
	{
		*(((char*)s)+i)=(char)c;
		//p[i]=(char)c;
	}
	return s;
}

void* al_memcpy(void *dest, const void *src, size_t n) 
{
	for(i=0;i<n;i++)
	{
		*(((char*)dest)+i)=*(((char*)src)+i);
	}
	return dest;
}


void* al_memmove(void *dest, const void *src, size_t n)
{
	for(i=n-1;i>=0;i--)
	{
		*(((char*)dest)+i)=*(((char*)src)+i);
	}

	return dest;
}






int main()
{


	return 0;
}