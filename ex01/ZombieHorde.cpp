#include "Zombie.hpp"

Zombie *zombieHorde( int n, std::string name )
{
	Zombie	*hordeZ = new Zombie[n];
	int		i;
	
	i = 0;
	while (i < n)
	{
		hordeZ[i].nameZ( name );
		i++;
	}
	
	return (hordeZ);
}