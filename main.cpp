#include "Fight.hpp"

int main()
{
    Personnage player1 = StartGame();
    Personnage player2 = KyllianMbaccle();
    while (CheckIfDead(player1) || CheckIfDead(player2))
    {
        NewRound(player1, player2);
    }

    EndGame(player1, player2);
}