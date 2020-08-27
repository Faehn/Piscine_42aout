int	ft_atoi(char *str);
#include <stdio.h>

int main(void)
{
	char str[] = "  \t\v\r \t\n \f\t \f\n \f+----+-+--+4672fekfhegf348764fjehg734";

	printf("%s\n", str);
	printf("%d", ft_atoi(str));
	return (0);
}
