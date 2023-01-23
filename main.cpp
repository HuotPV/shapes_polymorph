#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Figures.hpp" // c'est le hpp qu'il faut include

using namespace std;

int main()
{
    vector<Figures*> listeFigures;

    listeFigures.push_back(new Cercle(4));
    listeFigures.push_back(new Carre(4));
    listeFigures.push_back(new Rectangle(6,2));
    listeFigures.push_back(new Triangle(4,3));
    

    for (int i=0; i<listeFigures.size(); i++)
    {
        listeFigures[i]->afficher(); 
        cout << "Mon perimètre est: ";
        cout << listeFigures[i]->getPerimetre() << endl; 
        cout << "Mon aire est: ";
        cout << listeFigures[i]->getAire() << endl; 
    }

    for (int i=0; i<listeFigures.size(); i++)
    {
        delete listeFigures[i]; // clear la case mémoire occupée par l'objet au bout de mon pointeur
        listeFigures[i] = 0; // reset le pointeur à zero
    }
}