#include "Zombie.hpp"

//default constructor
Zombie::Zombie( void )
{
	m_name = "average joe";
	std::cout << FGRND_R_GREEN << "I am completely constructed. Faithfully yours, zombie " << m_name << "." << RESET << std::endl;
}

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
void	Zombie::announce( void )
{
	std::cout << FGRND_R_PURPLE << m_name << " BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}