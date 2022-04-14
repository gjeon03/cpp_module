#include "Zombie.hpp"

int main()
{
	Zombie *zombies = zombieHorde(NUM_OF_ZOMBIES, "jeon");

	for (int i = 0; i < NUM_OF_ZOMBIES; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}