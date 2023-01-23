#ifndef FIGURES_H_INCLUDED
#define FIGURES_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include <vector>



class Figures
{
    public:
    Figures();
    virtual void afficher() const;
    virtual double getPerimetre() const = 0;
    virtual double getAire() const = 0;
    virtual ~Figures();


    protected:

};


class Triangle : public Figures
{
    public:
    Triangle(int base,int hauteur);
    virtual void afficher() const;
    virtual double getPerimetre() const;
    virtual double getAire() const;
    virtual ~Triangle();

    protected:
    int m_base;
    int m_hauteur;
};

class Carre : public Figures
{
    public:
    Carre(int cote);
    virtual void afficher() const;
    virtual double getPerimetre() const;
    virtual double getAire() const;
    virtual ~Carre();

    protected:
    int m_cote;
};

class Rectangle : public Figures
{
    public:
    Rectangle(int longueur, int largeur);
    virtual void afficher() const;
    virtual double getPerimetre() const;
    virtual double getAire() const;
    virtual ~Rectangle();

    protected:
    int m_longueur;
    int m_largeur;
};

class Cercle : public Figures
{
    public:
    Cercle(int rayon);
    virtual void afficher() const;
    virtual double getPerimetre() const;
    virtual double getAire() const;
    virtual ~Cercle();

    protected:
    int m_rayon;
};

#endif //FIGURES_H_INCLUDED
