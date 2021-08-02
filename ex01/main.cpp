#include "Zombie.hpp"

int		main()
{
	int	i = 0;
	int	n = 100;

	Zombie	*hordeBobZ = zombieHorde(n, "Bob");
	
	while (i < n)
	{
		hordeBobZ[i].announce( i + 1 );
		i++;
	}
	
	delete [] hordeBobZ;
	
	return (0);
}