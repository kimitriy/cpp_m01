#include "Zombie.hpp"

//default constructor
Zombie::Zombie( void ) {};

//constructor
Zombie::Zombie( std::string name )
{
	m_name = name;
	std::cout << FGRND_R_GREEN << "I am completely constructed. Faithfully yours, zombie " << m_name << "." << RESET << std::endl;
}

//destructor
Zombie::~Zombie()
{
	std::cout << FGRND_R_RED << "I am completely destructed. Faithfully yours, zombie " << m_name << "." << RESET << std::endl;
}

//m-method
void	Zombie::announce( int i )
{
	std::cout << FGRND_R_GREEN << m_name << " " << i << ":" << FGRND_R_PURPLE << " BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void	Zombie::nameZ( std::string name )
{
	m_name = name;
	std::cout << FGRND_R_GREEN << "I am completely constructed. Faithfully yours, zombie " << m_name << "." << RESET << std::endl;
}