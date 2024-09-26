/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t  ft_strspn(const char *s, const char *accept);
*/


int	ft_strcspn(const char *s, const char *charset)
{
	int	i = 0;

	while(s[i])
	{
		int j = 0;
		while(charset[j])
		{
			if(s[i] == charset[j])
			{
				j++;
				return i;
			}
		}
		i++;
	}
	return i;
}


#include <libc.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int	main(void)
{
	printf("ft_strcspn\t%lu\n", strcspn("j'aime les fraizes 9", "cb9"));
	printf("strcspn lib\t%lu\n", strcspn("j'aime les fraizes 9", "cb9"));
	return 0;
}