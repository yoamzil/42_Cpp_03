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
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("Hmad");

	std::cout << std::endl;
	std::cout << "Name: " << a.getName() << ". Hit points: " << a.getHit() << ". Energy points: " << a.getEnergy() << ". Attack damage: " << a.getAttack() << std::endl
			  << std::endl;

	a.attack("Ali");
	std::cout << "Name: " << a.getName() << ". Hit points: " << a.getHit() << ". Energy points: " << a.getEnergy() << ". Attack damage: " << a.getAttack() << std::endl
			  << std::endl;
	a.takeDamage(4);
	std::cout << "Name: " << a.getName() << ". Hit points: " << a.getHit() << ". Energy points: " << a.getEnergy() << ". Attack damage: " << a.getAttack() << std::endl
			  << std::endl;
	a.beRepaired(2);
	std::cout << "Name: " << a.getName() << ". Hit points: " << a.getHit() << ". Energy points: " << a.getEnergy() << ". Attack damage: " << a.getAttack() << std::endl
			  << std::endl;
	//=========================================================================================================================
	ScavTrap b("Hassan");

	std::cout << std::endl;
	std::cout << "Name: " << b.getName() << ". Hit points: " << b.getHit() << ". Energy points: " << b.getEnergy() << ". Attack damage: " << b.getAttack() << std::endl
			  << std::endl;

	b.attack("Mohmmad");
	std::cout << "Name: " << b.getName() << ". Hit points: " << b.getHit() << ". Energy points: " << b.getEnergy() << ". Attack damage: " << b.getAttack() << std::endl
			  << std::endl;
	b.takeDamage(75);
	std::cout << "Name: " << b.getName() << ". Hit points: " << b.getHit() << ". Energy points: " << b.getEnergy() << ". Attack damage: " << b.getAttack() << std::endl
			  << std::endl;
	b.beRepaired(20);
	std::cout << "Name: " << b.getName() << ". Hit points: " << b.getHit() << ". Energy points: " << b.getEnergy() << ". Attack damage: " << a.getAttack() << std::endl
			  << std::endl;
	//=========================================================================================================================
	
	b.guardGate();
	// ClapTrap *test = new ScavTrap;
	// delete test;

	return (0);
}
