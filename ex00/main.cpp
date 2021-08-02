#include "Zombie.hpp"

int		main()
{
	Zombie joeZ("Joe");
	joeZ.announce();

	Zombie	*bobZ = newZombie("Bob");
	bobZ->announce();

	randomChump("Jack");

	delete bobZ;
	
	return (0);
}