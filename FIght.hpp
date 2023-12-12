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

	string nom_attaque1;
	string nom_attaque2;
	string nom_attaque3;
	Personnage(string nom, int pv, int stamina, int def, string att1, string att2, string att3);
	//~Personnage();

	int protection;
	virtual void Attaque1(Personnage* cible);
	virtual void Attaque2(Personnage* cible);
	virtual void Attaque3(Personnage* cible);

	virtual void Protection1();
	virtual void Protection2();
	virtual void Protection3();

	virtual void printAttacklist();

	virtual void setstats(int pv, string nom, int def, int stamina);
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
	//~KyllianMbaccle();


	void Attaque1(Personnage* cible);
	void Attaque2(Personnage* cible);
	void Attaque3(Personnage* cible);



};

class Emiliano_Martiguez : public Personnage
{
public:
	Emiliano_Martiguez();
	//~Emiliano_martiguez();

	void Attaque1(Personnage* cible);
	void Attaque2(Personnage* cible);
	void Attaque3(Personnage* cible);

};

class TBM : public Personnage
{
public:
	TBM();
	//~TBM();

	void Attaque1(Personnage* cible);
	void Attaque2(Personnage* cible);
	void Attaque3(Personnage* cible);


};

class Po : public Personnage
{
public:
	Po();
	//~Po();

	void Attaque1(Personnage* cible);
	void Attaque2(Personnage* cible);
	void Attaque3(Personnage* cible);

	string nom_attaque1 = "guerier dragon";

	string nom_attaque2 = "skadoosh";

	string nom_attaque3 = "cours de (PO)O";

};

bool EndGame(Personnage* player1, Personnage* player2);
Personnage* StartGamePlayer1();
Personnage* StartGamePlayer2();
void PrintHeroList();
void PrintVilainList();
void NewRoundPlayer1(Personnage* player1, Personnage* player2);
void NewRoundPlayer2(Personnage* player1, Personnage* player2);
bool CheckIfDead(Personnage* character);

#endif