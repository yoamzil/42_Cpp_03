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

int main(void)
{
	ClapTrap a;
	ClapTrap b("Hmad");
	ClapTrap c = b;
	
	std::cout << std::endl;
	std::cout << "a's name is: " << a.getName() << ", his hit points: " << a.getHit() << ", his energy points: " << a.getEnergy() << ", his attack damage: " << a.getAttack() << std::endl;
	std::cout << "b's name is: " << b.getName() << ", his hit points: " << b.getHit() << ", his energy points: " << b.getEnergy() << ", his attack damage: " << b.getAttack() << std::endl;
	std::cout << "c's name is: " << c.getName() << ", his hit points: " << c.getHit() << ", his energy points: " << c.getEnergy() << ", his attack damage: " << c.getAttack() << std::endl
			  << std::endl;

	b.attack("c");
}
