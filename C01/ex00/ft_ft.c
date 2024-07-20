#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int a;
	int *nbr;

	a = 21;
	nbr = &a;
	write(1, &nbr, 1);

	return(0);
}
