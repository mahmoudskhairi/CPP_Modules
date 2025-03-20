#include "Zombie.hpp"

#define N 3
void ll()
{
    system("leaks -q Zombie");
}
int main()
{
    atexit(ll);
        Zombie *Horde = zombieHorde(N, "mahmoud");
        for (int i = 0; i < N; i++)
        {
            Horde[i].Announce();
        };
        delete[] Horde;
    }
