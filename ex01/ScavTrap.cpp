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

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    name = "NO NAME FOUND!";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
    name = Name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &original)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = original;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &original)
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

void ScavTrap::attack(const std::string &target)
{
    if (hitPoints >= 0 || energyPoints >= 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }
    else
        std::cout << "Not enough points to attack!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl
              << std::endl;
}