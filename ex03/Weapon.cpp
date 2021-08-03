#include "Weapon.hpp"

//constructor
Weapon::Weapon( const std::string &type )
	: m_type(type)
{
	// m_type = type;
}

//destructor
Weapon::~Weapon() {};

//setter
void	Weapon::setType( const std::string &type )
{
	m_type = type;
}

//getter
const std::string &	Weapon::getType( void )
{
	std::string &ref = m_type;
	return (ref);
}