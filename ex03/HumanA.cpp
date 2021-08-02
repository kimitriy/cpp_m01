#include "HumanA.hpp"

//default constructor
HumanA::HumanA()
{
	m_name = "\0";
}

//constructor
HumanA::HumanA( const std::string &name, Weapon &wpn )
{
	m_weapon = Weapon(wpn);
	m_name = name;
}

//destructor
HumanA::~HumanA()
{

}

//m-methods
//private
const std::string HumanA::toUpperCase(const std::string &str)
{
	std::string tmp;
	int	i = 0;

	while(str[i])
	{
		tmp[i] = static_cast<char>(toupper(str[i]));
		i++;
	}
	return (tmp);
}

//public
void	HumanA::attack( void )
{
	std::cout << FGRND_B_PURPLE << m_name << FGRND_R_GREEN << " attacks with his " << FGRND_B_PURPLE << m_weapon.getType() << RESET << std::endl;
}