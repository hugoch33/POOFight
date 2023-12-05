#include "Fight.hpp"

void StartGame()
{
    cout << "Joueur 1, veuillez choisir un héro \n";
    void PrintHeroList();
    int choice;
    cin >> choice;
}

void PrintHeroList()
{
    cout << "1. Ben \n 2. Ben \n 3. Ben \n"
}

bool CheckIfDead(Personnage character)
{
    if (character.get_pv > 1)
    {
        return true;
    }
    return false;
}

bool EndGame(Personnage player1, Personnage player2)
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

// Gestion Personnage

int Personnage::get_pv()
{
    return m_pv
}

int Personnage::get_nom()
{
    return m_nom
}

int Personnage::get_def()
{
    return m_def
}

int Personnage::get_stamina()
{
    return m_stamina
}

void setstats : Personnage(int, string, int, int)