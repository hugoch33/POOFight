#ifndef FIGHT
#define FIGHT

#include <iostream>
using namespace std;

class Personnage
{
private:
	string m_nom;
	int m_pv;
	int m_stamina;
	int m_def;

public:
	Personnage(string nom, int pv, int stamina, int def);
	~Personnage();

	void setstats(int hp, string name, int def, int stamina);
	int get_pv();
	string get_nom() const;
	int get_stamina();
	int get_def();
};

class Vilain : public Personnage
{
public:
	void Vilain();
};

class Hero : public Personnage
{

public:
	void Hero();
};

class KyllianMbaccle : public Hero
{
public:
	// Gestion Attaque :
	setstats(100, "Kyllian Mbaccle", 10, 50);
	string attaque1_nom = "Moi on me parle pas d'age";
	int attaque1_degats = 30;

	string attaque2_nom = "Le Football il a changé";
	int attaque2_degats = 40;

	string attaque2_nom = "10 avec le joueur de Gibraltar";
	int attaque2_degats = 50;
}
#endif