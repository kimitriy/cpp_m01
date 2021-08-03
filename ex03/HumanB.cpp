#include "HumanB.hpp"

//constructor
HumanB::HumanB( const std::string &name )
	: m_name(name)
{
	
}

//destructor
HumanB::~HumanB()
{

}

//m-methods
//private
const std::string HumanB::toUpperCase(const std::string &str)
{
	std::string tmp;
	int	i = 0;

	while(str[i])
	{
		tmp.push_back( static_cast<char>(toupper(str[i])) );
		i++;
	}
	return (tmp);
}

//public
void	HumanB::setWeapon( Weapon &wpn )
{
	m_weapon = &wpn;
}

void	HumanB::attack( void )
{
	std::cout << FGRND_B_PURPLE << toUpperCase(m_name) << FGRND_R_GREEN << " attacks with his " << FGRND_B_PURPLE << toUpperCase(m_weapon->getType()) << RESET << std::endl;
}