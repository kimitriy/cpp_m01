#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*m_weapon;
		std::string	m_name;

		const std::string toUpperCase(const std::string &str);
	public:
		//constructor
		HumanB( const std::string &name );
		
		//destructor
		~HumanB( void );

		//m-methods
		void	setWeapon( Weapon &wpn );
		void	attack( void );
};
