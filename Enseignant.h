#include <string>
#include "Person.h"
#include "Etablissement.h"


class Enseignant : public Person
{
///Attributs spécifiques des étudiants
    private:
        Etablissement etab;
        std::string m_matiere;
    public:
        Enseignant();
        ~Enseignant();
        void getmatiere(std::string &matiere);
        void displayProf(std::string &nom,std::string &prenom,int &age,std::string &name,std::string &adresse,std::string &Nom,std::string &matiere);
};