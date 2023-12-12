#include "Fight.hpp"

int main()
{
    Personnage* player1 = new KyllianMbaccle();
    Personnage* player2 = new KyllianMbaccle();
    while (CheckIfDead(player1) || CheckIfDead(player2))
    {
        NewRound(player1,player2);
    }

    EndGame(player1, player2);
}