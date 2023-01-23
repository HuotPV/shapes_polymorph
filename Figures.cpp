#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include "Figures.hpp"

using namespace std;

int Figures::compteur = 0; // initialisation de l'attribut statique compteur.

// Constructeurs pour tout le monde 
Figures::Figures(){++compteur;} // on incrémente compteur à chaque création d'une instance de Figures
Carre::Carre(int cote) : Figures(), m_cote(cote){}; // attention ! Il ne faut pas incrémenter le compteur ici car il l'est déjà dans le constructeur de Figures
Rectangle::Rectangle(int longueur, int largeur) : m_longueur(longueur), m_largeur(largeur){}; // et ce, même si on appelle pas explicitement le constructeur de Figures ici ...
Triangle::Triangle(int base, int hauteur) : Figures(), m_base(base), m_hauteur(hauteur){};
Cercle::Cercle(int rayon) : Figures(), m_rayon(rayon){};

// Destructeur pour tout le monde
Figures::~Figures(){--compteur;} // on décrémente compteur à chaque destruction d'une instance de Figures.
Carre::~Carre(){} // Comme précédement, il ne faut pas décrementer compteur dans les destructeurs des classes filles, il est déjà décrementé dans le destructeur de Figures.
Rectangle::~Rectangle(){}
Triangle::~Triangle(){;}
Cercle::~Cercle(){}

// Methode afficher pour tout le mone:

int Figures::nombreFigures()
{
    return compteur;
}

void Figures::afficher() const
{
    cout << "Je suis une figure inconnue" << endl;
}
void Rectangle::afficher() const
{
    cout << "Je suis un rectangle de longueur: " << m_longueur << " et de largeur: " << m_largeur << "." << endl;
}
void Carre::afficher() const
{
    cout << "Je suis un carre de coté: " << m_cote << "." << endl;
}
void Triangle::afficher() const
{
    cout << "Je suis un triangle de base: " << m_base << " et de hauteur: " << m_hauteur << "." << endl;
}
void Cercle::afficher() const
{
    cout << "Je suis un cercle de rayon: " << m_rayon << "." << endl;
}


// Methode GetPerimetre pour tout le monde

double Rectangle::getPerimetre() const
{
    
    double perimetre(2 * m_largeur + 2 * m_longueur);
    return perimetre;
}

double Carre::getPerimetre() const
{
    
    double perimetre(4 * m_cote);
    return perimetre;
}

double Cercle::getPerimetre() const
{
    
    double perimetre(2 * 3.1415 * m_rayon);
    return perimetre;
}

double Triangle::getPerimetre() const
{
    double hypothenus(sqrt(m_base*m_base + m_hauteur*m_hauteur));
    double perimetre(2 * hypothenus + m_base);
    return perimetre;
}


// Methode GetAire pour tout le monde

double Rectangle::getAire() const
{
    
    double aire(m_largeur*m_longueur);
    return aire;
}

double Carre::getAire() const
{
    
    double aire(m_cote * m_cote);
    return aire;
}


double Triangle::getAire() const
{
    
    double aire(m_base * m_hauteur/2);
    return aire;
}

double Cercle::getAire() const
{
    double aire(3.1415 * m_rayon * m_rayon);
    return aire;
}

