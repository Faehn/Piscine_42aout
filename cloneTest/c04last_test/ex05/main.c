int	ft_atoi_base(char *str, char *base);
#include <stdio.h>

int main(void)
{
	char str[] = "0123456789";
	char base[] = "0123456789";

	printf("%s\n", str);
	printf("%d", ft_atoi_base(str, base));
	return (0);
}
