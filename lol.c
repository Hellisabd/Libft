#include <stdlib.h>
#include <stdio.h>
#define malloc ft_failloc
#define CRASH 5



void *ft_failloc(int size)
{
	static int i = 0;
	if (i >= CRASH)
		return (NULL);
	i++;
	return(calloc(1, size));
}