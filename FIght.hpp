#ifndef FIGHT
#define FIGHT

#include <iostream>
using namespace std;

class Personnage
{
private:
	int m_pv;
	int m_stamina;
	int m_def;
	string m_nom;

public:
	Personnage(int pv, int stamina, int def);
	~Personnage();

	virtual void Attaque1();
	virtual void Attaque2();
	virtual void Attaque3();

	void setstats(int pv, int def, int stamina);
	int get_pv();
	int get_stamina();
	int get_def();
	string get_nom();
};

class KyllianMbaccle : public Personnage
{
public:
	// Gestion Attaque :
	KyllianMbaccle();
	~KyllianMbaccle();

	Attaque1();
	Attaque2();
	Attaque3();

	/* string attaque1_nom = "Moi on me parle pas d'age";
	int attaque1_degats = 30;

	string attaque2_nom = "Le Football il a changé";
	int attaque2_degats = 40;

	string attaque3_nom = "10 avec le joueur de Gibraltar";
	int attaque3_degats = 50; */
};

class Luffy : public Personnage
{
public:
	Luffy();
	~Luffy();
	
	Attaque1();
	Attaque2();
	Attaque3();
	
};

bool EndGame(Personnage player1, Personnage player2);
void StartGame();
void NewRound(Personnage player1, Personnage player2);
bool CheckIfDead(Personnage character);

#endif