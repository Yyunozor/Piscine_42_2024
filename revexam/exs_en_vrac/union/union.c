/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_union(char *s1, char *s2)
{
	int i = 0;
	int ascii[128] = {0};

	while(s1[i])
	{
		if (ascii[(unsigned char)s1[i]] == 0)
		{
			ft_putchar(s1[i]);
			ascii[(unsigned char)s1[i]] = 1;
		}
		i++;
	}
	while(s2[i])
	{
		if(ascii[(unsigned char)s2[i]] == 0)
		{
			ft_putchar(s2[i]);
			ascii[(unsigned char)s1[i]] = 1;
		}
	i++;
	}
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	else
		ft_putchar('\n');
	return 0;

}