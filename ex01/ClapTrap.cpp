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

std::string		ClapTrap::getName()
{
	return (name);
}

int		ClapTrap::getHit()
{
	return (hitPoints);
}

int		ClapTrap::getEnergy()
{
	return (energyPoints);
}

int		ClapTrap::getAttack()
{
	return (attackDamage);
}

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	name = "NO NAME FOUND!";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string NAME)
{
	std::cout << "Parameterized constructor called" << std::endl;
	name = NAME;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &original)
{
	if (this != &original)
	{
		this->name = original.name;
		this->hitPoints = original.hitPoints;
		this->energyPoints = original.energyPoints;
		this->attackDamage = original.attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (hitPoints >= 0 || energyPoints >= 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "Not enough points to attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		std::cout << "ClapTrap " << name << " takes damage and loses " << amount << " hits points." << std::endl;
		hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << name << " Can't take anymore damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints >= 0 || energyPoints >= 0)
	{
		std::cout << "ClapTrap " << name << " repairs itself and gets " << amount << " hit points back." << std::endl;
		hitPoints += amount;
		energyPoints--;
	}
	else
		std::cout << "Not enough points to be repaired!" << std::endl;
}
