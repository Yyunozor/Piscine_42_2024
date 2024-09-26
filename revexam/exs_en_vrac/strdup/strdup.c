
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	
	while(str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int i = 0;
	char *dest;
	int len = ft_strlen(src);

	dest = malloc(sizeof(char) * len + 1);
	if(!dest)
		return NULL;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main(void)
{
	char	*str = "salut les gens!";

	printf("%s", ft_strdup(str));
	printf("%s", strdup(str));
	return 0;

}