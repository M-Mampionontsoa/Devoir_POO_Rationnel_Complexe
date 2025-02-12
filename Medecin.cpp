#include <string>
#include <iostream>
#include "Medecin.h"


using namespace std;

Medecin::Medecin()
{
    // m_specialite("GENERALISTE");
}

Medecin::~Medecin()
{
///Rien à ajouter
}

void Medecin::demandeSpecialite(string &specialite)
{
    cout << "Entrer votre specialite" << endl;
    cin >> specialite;
    m_specialite=specialite;
}

void Medecin::display(string nom,string prenom,string specialite,string name,string adresse,int age)
{
    
   
    demandeInfo(nom,prenom,age);
    etab.demande(name,adresse);
    displayPerson();
    cout << "Specialite:" << m_specialite << endl;
    etab.displayEtab();
}