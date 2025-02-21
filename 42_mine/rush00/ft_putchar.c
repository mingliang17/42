#include <unistd.h>

void	ft_putchar(char item)
{
	write(1, &item, 1);
}

int	main(void)
{
	char	item;
	
	item = 'A';
	ft_putchar(item);
	return 0;
}
