#include <string>
#include <iostream>
#include "Infrastructure.h"

using namespace std;

Infrastructure::Infrastructure()
{
   //string m_name("SANS NOM");
   //string m_adresse("TANA");
}

Infrastructure::~Infrastructure()
{
///Rien à ajouter
}

void Infrastructure::demande(string &nom,string &adresse)
{
    cout << "Entrer le type d'etablissement" << endl;
    cin >> nom;
    m_type=nom;
    cout << "Entrer votre adresse" << endl;
    cin >> adresse;
    m_adresse=adresse;
}

void Infrastructure::displayEtab()
{
    cout << "Type de votre infrastructure:" << m_type << endl;
    cout << "Adresse:" << m_adresse << endl;

}
