#include <string>
#include <iostream>
#include "Hopital.h"

using namespace std ;

Hopital::Hopital()
{
    ///Constructeur par défaut
}

Hopital::~Hopital()
{
    ///Rien à ajouter
}

void Hopital::getnomHop(string &nom)
{
    cout << "Entrer le nom de votre Hopital:" << endl ;
    cin >> nom;
    m_nom=nom;
}