#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		m_weapon;
		std::string	m_name;

		const std::string toUpperCase(const std::string &str);
	public:
		//constructor
		HumanB();
		HumanB( const std::string &name );
		
		//destructor
		~HumanB();

		//m-methods
		void	setWeapon( const Weapon &wpn );
		void	attack( void );
};
