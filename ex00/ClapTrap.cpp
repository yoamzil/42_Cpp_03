/* ************************************************************************************** */
/*																						  */
/*                                                						d8b		888       */
/*                                                  					Y8P		888       */
/*                                                      						888       */
/*		888  888	  .d88b.   	8888b.  	88888b.d88b.	88888888	888 	888       */
/*		888  888 	d88""88b     	"88b 	888 "888 "88b    	d88P 	888 	888       */
/*		888  888 	888  888 	.d888888 	888  888  888		d88P   	888 	888       */
/*		Y88b 888 	Y88..88P 	888  888 	888  888  888	  d88P    	888 	888       */
/*		"Y88888  	"Y88P"  	"Y888888 	888  888  888	88888888 	888 	888       */
/*	  		 888																          */
/*		Y8b d88P																          */
/*		"Y88P"									By: yoamzil <yoamzil@student.1337.ma>     */
/*																						  */
/* ************************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string NAME)
{
	name = NAME;
}

ClapTrap::ClapTrap(ClapTrap const &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &original)
{
	this->name = original.name;
	this->hitPoints = original.hitPoints;
	this->energyPoints = original.energyPoints;
	this->attackDamage = original.attackDamage;
}

void    ClapTrap::attack(const std::string &target)
{}

void    ClapTrap::takeDamage(unsigned int amount)
{}

void    ClapTrap::beRepaired(unsigned int amount)
{}
