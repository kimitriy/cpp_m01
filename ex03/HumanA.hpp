#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		m_weapon;
		std::string	m_name;

		const std::string toUpperCase(const std::string &str);
	public:
		//constructor
		HumanA();
		HumanA( const std::string &name, class Weapon &wpn );
		
		//destructor
		~HumanA();

		//m-methods
		void	attack( void );
};
