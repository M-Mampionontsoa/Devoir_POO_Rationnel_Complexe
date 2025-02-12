

#include <string>
#include "Hopital.h"
#include "Person.h"


class Medecin:public Person 
{
///Attribut spécifique du Medecin
    private:
        std::string m_specialite;
        Hopital hop;
///Méthode spécifique du médecin
    public:
        Medecin();
        ~Medecin();
        void demandeSpecialite(std::string &specialite);
        void display(std::string &nom,std::string &prenom,std::string &specialite,std::string &type,std::string &adresse,int &age,string &Nom);
};

