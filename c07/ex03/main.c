char *ft_strjoin(int size, char **strs, char *sep);
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	char *str;
	char *sep;

	sep = "";
	str = ft_strjoin(ac -1 , av + 1, sep);
	printf("%s", str);
	free(str);
	return (0);
}
