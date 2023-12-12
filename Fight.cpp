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
        return player1;
    }
    Personnage player2 = KyllianMbaccle();
    
}

void NewRound(Personnage* player1, Personnage* player2)
{
    int choiceA;
    cin >> choiceA;

    cout << player1->get_nom() << " : " << player1->get_pv() << "HP" << endl;
    cout << player2->get_nom() << " : " << player2->get_pv() << "HP" << endl;

    while (true)
    {
        player1->m_pv -= 10;
        if (choiceA == 1)
        {
            player1->Protection1();
            break;
        }
        if (choiceA == 2)
        {
            player1->Protection2();
            break;
        }
        if (choiceA == 3)
        {
            player1->Protection3();
            break;
        }
    }
    int choiceB;
    cin >> choiceB;

    while (true)
    {
        player2->Attaque1(player1);
        if (choiceB == 1)
        {
            if (player1->protection == 1)
            {
                cout << "Le joueur s'est protégé de cette attaque ! \n";
                break;
            }
            player2->Attaque1(player1);
            cout << "Ben";
            break;
        }
        if (choiceB == 2)
        {
            if (player1->protection == 2)
            {
                cout << "Le joueur s'est protégé de cette attaque ! \n";
                break;
            }
            player2->Attaque2(player1);
            break;
        }
        if (choiceB == 3)
        {
            if (player1->protection == 3)
            {
                cout << "Le joueur s'est protégé de cette attaque ! \n";
                break;
            }
            player2->Attaque3(player2);
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

bool CheckIfDead(Personnage* character)
{
    if (character->get_pv() > 0)
    {
        return true;
    }
    return false;
}

bool EndGame(Personnage* player1, Personnage* player2)
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
    protection = 1;
}

void Personnage::Protection2()
{
    protection = 2;
}

void Personnage::Protection3()
{
    protection = 3;
}

void Personnage::Attaque1(Personnage* cible)
{
    cible->setstats(cible->get_pv()-30, cible->get_nom(), cible->get_def(), cible->get_def());
    cout << "Palbo";
}

void Personnage::Attaque2(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 40, cible->get_nom(), cible->get_def(), cible->get_def());
    cout << "Palbo";
}
void Personnage::Attaque3(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 40, cible->get_nom(), cible->get_def(), cible->get_def());
    cout << "Palbo";
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

KyllianMbaccle::KyllianMbaccle() : Personnage("KyllianMbaccle", 190, 50, 50)
{
}

void KyllianMbaccle::Attaque1(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 40, cible->get_nom(), cible->get_def(), cible->get_def());
    cout << "Palbo";
}

void KyllianMbaccle::Attaque2(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 40, cible->get_nom(), cible->get_def(), cible->get_def());
    cout << "Palbo";
}

void KyllianMbaccle::Attaque3(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 40, cible->get_nom(), cible->get_def(), cible->get_def());
    cout << "Palbo";
}