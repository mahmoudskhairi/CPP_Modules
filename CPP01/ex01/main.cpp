#include "Zombie.hpp"

#define N 3
int main()
{
    Zombie *Horde = zombieHorde(N, "mahmoud");
    for (int i = 0; i < N; i++)
    {
        Horde[i].Announce();
    };
    delete[] Horde;
}