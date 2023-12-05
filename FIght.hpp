#ifndef FIGHT
#define FIGHT

#include <iostream>
using namespace std;

class Personnage {
private:
	string m_nom;
	int m_pv;
    int m_stamina;
    int m_def;
public:
	Personnage(string nom, int pv, int stamina, int def) ;
	~Personnage();

	int get_pv ();
	string get_nom() const;
    int get_stamina ();

};

#endif


class Vilain {
private:
	string m_nom;
	int m_pv;
    int m_stamina;
    int m_def;

public:
	Personnage(string nom, int pv, int stamina, int def) ;
	~Personnage();

	int get_pv ();
	string get_nom() const;
    int get_stamina ();

};