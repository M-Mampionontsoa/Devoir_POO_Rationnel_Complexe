#include <string>
#include <iostream>
#include "Enseignant.h"



using namespace std;

Enseignant::Enseignant()
{
    ///Constructeur par défaut
}

Enseignant::~Enseignant()
{
    ///Rien à ajouter
}

void Enseignant::getmatiere(string &matiere)
{
    cout << "Entrer  la matière que vous enseigner :" << endl ;
    cin >> matiere;
    m_matiere=matiere;
}

void Enseignant::displayProf(string &nom,string &prenom,int &age,string &name,string &adresse,string &Nom,string &niveau)
{
    demandeInfo(nom,prenom,age);
    etab.demande(name,adresse);
    etab.getnom(Nom);
    //getniveau(niveau);
    displayPerson();
    cout << "Etablissement :" << etab.m_nom <<  endl ;
    cout << "Matiere :" << m_matiere <<  endl ;
}