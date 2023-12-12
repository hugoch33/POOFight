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
	Personnage(string nom, int pv, int stamina, int def);
	~Personnage();

	int protection;
	virtual void Attaque1(Personnage cible);
	virtual void Attaque2(Personnage cible);
	virtual void Attaque3(Personnage cible);

	virtual void Protection1();
	virtual void Protection2();
	virtual void Protection3();

	void setstats(int pv, string nom, int def, int stamina);
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

	void Attaque1(Personnage cible);
	void Attaque2(Personnage cible);
	void Attaque3(Personnage cible);

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
};

bool EndGame(Personnage player1, Personnage player2);
Personnage StartGame();
void NewRound(Personnage player1, Personnage player2);
bool CheckIfDead(Personnage character);

#endif