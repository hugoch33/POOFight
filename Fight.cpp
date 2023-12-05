#include "FIght.hpp"

bool CheckIfDead(Personnage character)
{
    if (character.get_pv > 1)
    {
        return true;
    }
    return false;
}

bool EndGame()
{
    if (CheckIfDead(player1))
    {
        cout << "Le joueur 2 a gagné ! \n";
        return true;
    }
    if (CheckIfDead(player2))
    {
        cout << "Le joueur 1 a gagné ! \n";
        return true;
    }
    return false;
}