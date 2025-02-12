#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

Person::Person()
{
     //m_nom("SANS NOM\n");
     //m_prenom("SANS NOM\n");
     //m_age(0);
}

Person::~Person()
{
   ///Rien à ajouter
}

void Person::demandeInfo(string &nom,string &prenom,int &age)
{
    cout << "Entrer votre nom prenom et age" << endl;
    cin >> nom;
    m_nom=nom;
    cin >> prenom;
    m_prenom=prenom;
    cin >>age;
    m_age=age;
}

void Person::displayPerson()
{
    cout << "Nom:" << m_nom << endl;
    cout << "Prenom:" << m_prenom << endl;
    cout << "age:" << m_age << endl;

}