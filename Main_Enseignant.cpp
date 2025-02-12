#include <string>
#include "Enseignant.h"

using namespace std;

int main()
{
    string niveau;
    string nom;
    string prenom;
    int age(0);
    string name;
    string adresse;
    string Nom;

    Enseignant prof= Enseignant();
    prof.getmatiere(niveau);
    prof.displayProf(nom,prenom,age,name,adresse,Nom,niveau);

    return (0);
}
