#include <string>
#include "Person.h"
#include "Etablissement.h"


class Student : public Person
{
///Attributs spécifiques des étudiants
    private:
        Etablissement etab;
        std::string m_niveau;
    public:
        Student();
        ~Student();
        void getniveau(std::string &niveau);
        void displayStudent(std::string &nom,std::string &prenom,int &age,std::string &name,std::string &adresse,std::string &Nom,std::string &niveau);
};