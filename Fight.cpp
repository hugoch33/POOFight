#include "Fight.hpp"

Personnage StartGame()
{
    cout << "Joueur 1, veuillez choisir un héro \n";
    void PrintHeroList();
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        Personnage player1 = KyllianMbaccle();
    }
    Personnage player2 = KyllianMbaccle();
}

void NewRound(Personnage player1, Personnage player2)
{
    int choiceA;
    cin >> choiceA;

    while (true)
    {
        if (choiceA == 1)
        {
            player1.Protection1();
            break;
        }
        if (choiceA == 2)
        {
            player1.Protection2();
            break;
        }
        if (choiceA == 3)
        {
            player1.Protection3();
            break;
        }
    }
    int choiceB;
    cin >> choiceB;

    while (true)
    {
        if (choiceB == 1)
        {
            if (player1.protection == 1)
            {
                cout << "Le joueur s'est protégé de cette attaque ! \n";
                break;
            }
            player2.Attaque1(player2);
            break;
        }
        if (choiceB == 2)
        {
            if (player1.protection == 2)
            {
                cout << "Le joueur s'est protégé de cette attaque ! \n";
                break;
            }
            player2.Attaque2(player2);
            break;
        }
        if (choiceB == 3)
        {
            if (player1.protection == 3)
            {
                cout << "Le joueur s'est protégé de cette attaque ! \n";
                break;
            }
            player2.Attaque3(player2);
            break;
        }
    }
}

void PrintHeroList()
{
    cout << "1. Monkey D Luffy \n 2. Ben \n 3. Ben \n";
}

void PrintVilainList()
{
    cout << "1. Kyllian Mbaccle \n 2. unboug \n 3.unboug";
}

bool CheckIfDead(Personnage character)
{
    if (character.get_pv() > 0)
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
    return m_pv;
}

string Personnage::get_nom()
{
    return m_nom;
}

int Personnage::get_def()
{
    return m_def;
}

int Personnage::get_stamina()
{
    return m_stamina;
}

void Personnage::Protection1()
{
}

void Personnage::setstats(int hp, string nom, int def, int stamina)
{
    m_nom = nom;
    m_pv = hp;
    m_def = def;
    m_stamina = stamina;
}

// Gestion Heros

Personnage::Personnage(string nom, int pv, int stamina, int def) : m_nom(nom), m_pv(pv), m_stamina(stamina), m_def(def)
{
}

KyllianMbaccle::KyllianMbaccle() : Personnage("KyllianMbaccle", 150, 50, 50)
{
}