
char    *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char tmp;

	while(str[i])
		i++;
	i--;
	while(j < i)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] =  tmp;
		i--;
		j++;
	}
	return str;
}
