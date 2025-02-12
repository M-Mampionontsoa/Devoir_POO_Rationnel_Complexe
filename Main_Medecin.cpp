#include "Person.h"
#include "Medecin.h"
//#include "Etabissement.h"
#include <string>
using namespace std;



int main()
{
    Medecin medc = Medecin();
    
    string nom;
    string prenom;
    string specialite;
    int age(0);
    string name;
    string adresse;

    medc.demandeSpecialite(specialite);
    medc.display(nom,prenom,specialite,name,adresse,age);
   




    return (0);
}