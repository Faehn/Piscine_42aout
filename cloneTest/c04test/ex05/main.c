int	ft_atoi_base(char *str, char *base);
#include <stdio.h>

int main(void)
{
	char str[] = "   \n \v \t \f \r  +--++--+---104134211162\ndjfbdiuh";
	char base[] = "0123456";

	printf("%s\n", str);
	printf("%d", ft_atoi_base(str, base));
	return (0);
}
