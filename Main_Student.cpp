#include <string>
#include "Student.h"

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

    Student p1= Student();
    p1.getniveau(niveau);
    p1.displayStudent(nom,prenom,age,name,adresse,Nom,niveau);

    return (0);
}
