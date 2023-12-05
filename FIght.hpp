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
    int get_def ();
};



class Vilain : public Personnage {

public:
	
    Vilain();

};


class Hero : public Personnage {

public:
	
    Hero();

};


#endif