#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include "Figures.hpp"

using namespace std;

// Constructeurs pour tout le monde 
Figures::Figures(){}
Carre::Carre(int cote) : Figures(), m_cote(cote){};
Rectangle::Rectangle(int longueur, int largeur) : Figures(), m_longueur(longueur), m_largeur(largeur){};
Triangle::Triangle(int base, int hauteur) : Figures(), m_base(base), m_hauteur(hauteur){};
Cercle::Cercle(int rayon) : Figures(), m_rayon(rayon){};

// Destructeur pour tout le monde
Figures::~Figures(){}
Carre::~Carre(){}
Rectangle::~Rectangle(){}
Triangle::~Triangle(){}
Cercle::~Cercle(){}

// Methode afficher pour tout le mone:

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

