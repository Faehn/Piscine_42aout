#include <unistd.h>

void ft_putchar(char a)
{
	a += 48;
	write(1, &a, 1);
}

int	main(void)
{
	ft_putchar(-648 % 10);
	return (0);
}
