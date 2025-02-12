#include <string>
#include <iostream>
#include "Etablissement.h"

using namespace std ;

Etablissement::Etablissement()
{
    ///Constructeur par défaut
}

Etablissement::~Etablissement()
{
    ///Rien à ajouter
}

void Etablissement::getnom(string Nom)
{
    cout << "Entrer le nom de votre Etablissement:" << endl ;
    cin >> Nom;
    m_nom=Nom;
}