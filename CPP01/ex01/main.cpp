#include "Zombie.hpp"

#define N 3
int main()
{
    if (N > 0)
    {
        Zombie *Horde = zombieHorde(N, "mahmoud");
        for (int i = 0; i < N; i++)
        {
            Horde[i].Announce();
        };
        delete[] Horde;
    }
    else
        std::cout << "Please enter a valid number of Zombies"
                  << std::endl;
}