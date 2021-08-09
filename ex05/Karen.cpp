#include "Karen.hpp"

//private m-methods
void Karen::debug( void )
{
	std::cout << FGRND_R_CYAN << m_debug << RESET << std::endl;
}

void Karen::info( void )
{
	std::cout << FGRND_R_BLUE << m_info << RESET << std::endl;
}

void Karen::warning( void )
{
	std::cout << FGRND_R_PURPLE << m_warning << RESET << std::endl;
}

void Karen::error( void )
{
	std::cout << FGRND_R_RED << m_error << RESET << std::endl;
}

//constructor
Karen::Karen( void )
	: m_debug("I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"),
	m_info("I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"),
	m_warning("I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."),
	m_error("This is unacceptable, I want to speak to the manager now.")
{
	fArr[0] = &Karen::debug;
	fArr[1] = &Karen::info;
	fArr[2] = &Karen::warning;
	fArr[3] = &Karen::error;
}

//destructor
Karen::~Karen() {};

//public m-methods
void Karen::complain( std::string level )
{
	std::string lvl[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		if (lvl[i] == level)
		{
			(this->*fArr[i])();
			return ;
		}
	}
}