#include "Fight.hpp"

int main()
{
    Personnage* player1 = StartGamePlayer1();
    Personnage* player2 = StartGamePlayer2();
    while (CheckIfDead(player1) && CheckIfDead(player2))
    {
        NewRoundPlayer1(player1, player2);
        if (CheckIfDead(player1) == false || CheckIfDead(player2) == false)
        {
            break;
        }
        NewRoundPlayer2(player1, player2);
    }

    EndGame(player1, player2);
}