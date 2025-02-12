#include <string>
#include <iostream>
#include "Student.h"



using namespace std;

Student::Student()
{
    ///Constructeur par défaut
}

Student::~Student()
{
    ///Rien à ajouter
}

void Student::getniveau(string &niveau)
{
    cout << "Entrer  votre niveu :" << endl ;
    cin >> niveau;
    m_niveau=niveau;
}

void Student::displayStudent(string &nom,string &prenom,int &age,string &name,string &adresse,string &Nom,string &niveau)
{
    demandeInfo(nom,prenom,age);
    etab.demande(name,adresse);
    etab.getnom(Nom);
    //getniveau(niveau);
    displayPerson();
    cout << "Etablissement :" << etab.m_nom <<  endl ;
    cout << "Niveau :" << m_niveau <<  endl ;
}