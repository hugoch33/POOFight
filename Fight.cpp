#include "Fight.hpp"

Personnage* StartGamePlayer1()
{


    while (true) {
        cout << "Joueur 1, veuillez choisir un héro \n";
        PrintHeroList();
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            Personnage* player1 = new KyllianMbaccle();
            return player1;
        }
        if (choice == 2)
        {
            Personnage* player1 = new Po();
            return player1;
        }
    }


}

Personnage* StartGamePlayer2()
{


    while (true) {
        cout << "Joueur 2, veuillez choisir un villain \n";
        PrintVilainList();
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            Personnage* player2 = new Emiliano_Martiguez();
            return player2;
        }
        if (choice == 2)
        {
            Personnage* player1 = new TBM();
            return player1;
        }
    }


}

void NewRoundPlayer1(Personnage* player1, Personnage* player2)
{


    cout << player1->get_nom() << " : " << player1->get_pv() << "HP" << endl;
    cout << player2->get_nom() << " : " << player2->get_pv() << "HP" << endl;

    while (true)
    {
        cout << player1->get_nom() << " choissit une protection ! (un chiffre entre 1 et 3) \n";
        int choiceA;
        cin >> choiceA;
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


    while (true)
    {
        cout << player2->get_nom() << " choissit une attaque ! (un chiffre entre 1 et 3) \n";
        player2->printAttacklist();
        int choiceB;
        cin >> choiceB;
        if (choiceB == 1)
        {
            if (player1->protection == 1)
            {
                cout << "Le joueur s'est protégé de cette attaque ! \n";
                break;
            }
            player2->Attaque1(player1);
            cout << "l'attaque touche l'adversaire ! \n";
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
            cout << "l'attaque touche l'adversaire ! \n";
            break;
        }
        if (choiceB == 3)
        {
            if (player1->protection == 3)
            {
                cout << "Le joueur s'est protégé de cette attaque ! \n";
                break;
            }
            player2->Attaque3(player1);
            cout << "l'attaque touche l'adversaire ! \n";
            break;
        }
    }
}

void NewRoundPlayer2(Personnage* player1, Personnage* player2)
{



    cout << player1->get_nom() << " : " << player1->get_pv() << "HP" << endl;
    cout << player2->get_nom() << " : " << player2->get_pv() << "HP" << endl;

    while (true)
    {
        cout << player2->get_nom() << " choissit une protection ! (un chiffre entre 1 et 3) \n";


        int choiceA;
        cin >> choiceA;

        if (choiceA == 1)
        {
            player2->Protection1();
            break;
        }
        if (choiceA == 2)
        {
            player2->Protection2();
            break;
        }
        if (choiceA == 3)
        {
            player2->Protection3();
            break;
        }
    }


    while (true)
    {
        cout << player1->get_nom() << " choissit une attaque ! (un chiffre entre 1 et 3) \n";
        player1->printAttacklist();
        int choiceB;
        cin >> choiceB;
        if (choiceB == 1)
        {
            if (player2->protection == 1)
            {
                cout << "Le joueur s'est protégé de cette attaque ! \n";
                break;
            }
            player1->Attaque1(player2);
            cout << "l'attaque touche l'adversaire ! \n";
            break;
        }
        if (choiceB == 2)
        {
            if (player2->protection == 2)
            {
                cout << "Le joueur s'est protégé de cette attaque ! \n";
                break;
            }
            player1->Attaque2(player2);
            cout << "l'attaque touche l'adversaire ! \n";
            break;
        }
        if (choiceB == 3)
        {
            if (player2->protection == 1)
            {
                cout << "Le joueur s'est protégé de cette attaque ! \n";
                break;
            }
            player1->Attaque3(player2);
            cout << "l'attaque touche l'adversaire ! \n";
            break;
        }
    }
}



void PrintHeroList()
{
    cout << "1. Kyllian Mbaccle \n 2. Po, le Guerrier Dragon \n";
}

void PrintVilainList()
{
    cout << "1. Emiliano Martiguez \n 2. Tram TBM \n";
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

void Personnage::printAttacklist()
{
    cout << get_nom() << ": \n 1." << nom_attaque1 << "\n 2." << nom_attaque2 << "\n 3." << nom_attaque3 << "\n";
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
    cible->setstats(cible->get_pv() - 30, cible->get_nom(), cible->get_def(), cible->get_def());
}

void Personnage::Attaque2(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 40, cible->get_nom(), cible->get_def(), cible->get_def());
}
void Personnage::Attaque3(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 40, cible->get_nom(), cible->get_def(), cible->get_def());
}

void Personnage::setstats(int hp, string nom, int def, int stamina)
{
    m_nom = nom;
    m_pv = hp;
    m_def = def;
    m_stamina = stamina;
}

// Gestion Heros

Personnage::Personnage(string nom, int pv, int stamina, int def, string att1, string att2, string att3) : m_nom(nom), m_pv(pv), m_stamina(stamina), m_def(def), nom_attaque1(att1), nom_attaque2(att2), nom_attaque3(att3)
{

}

KyllianMbaccle::KyllianMbaccle() : Personnage("KyllianMbaccle", 190, 50, 50, "Moi on me parle pas d'age", "Le football il a changé", "10 avec le joueur de Gibraltar")
{

}

void KyllianMbaccle::Attaque1(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 30, cible->get_nom(), cible->get_def(), cible->get_def());
}

void KyllianMbaccle::Attaque2(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 40, cible->get_nom(), cible->get_def(), cible->get_def());
}

void KyllianMbaccle::Attaque3(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 50, cible->get_nom(), cible->get_def(), cible->get_def());
}





Emiliano_Martiguez::Emiliano_Martiguez() : Personnage("Emiliano Martiguez", 150, 50, 50, "Entrejambe doree", "What a Save", "Campeon del Mundo")
{

}

void Emiliano_Martiguez::Attaque1(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 25, cible->get_nom(), cible->get_def(), cible->get_def());
}

void Emiliano_Martiguez::Attaque2(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 30, cible->get_nom(), cible->get_def(), cible->get_def());
}

void Emiliano_Martiguez::Attaque3(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 40, cible->get_nom(), cible->get_def(), cible->get_def());
}

TBM::TBM() : Personnage("Tram TBM", 180, 50, 50, "Malaise voyageur", "Heure de pointe", "Tram B")
{
}

void TBM::Attaque1(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 25, cible->get_nom(), cible->get_def(), cible->get_def());
}

void TBM::Attaque2(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 35, cible->get_nom(), cible->get_def(), cible->get_def());
}

void TBM::Attaque3(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 40, cible->get_nom(), cible->get_def(), cible->get_def());
}


Po::Po() : Personnage("Po, le guerier dragon", 210, 50, 50, "La soupe de Sang Ping", "Skadoosh", "Cours de PO(O) avec maitre Shifu ")
{
}

void Po::Attaque1(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 35, cible->get_nom(), cible->get_def(), cible->get_def());
}

void Po::Attaque2(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 35, cible->get_nom(), cible->get_def(), cible->get_def());
}

void Po::Attaque3(Personnage* cible)
{
    cible->setstats(cible->get_pv() - 50, cible->get_nom(), cible->get_def(), cible->get_def());
}