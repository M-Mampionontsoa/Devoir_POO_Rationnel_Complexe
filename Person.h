#ifndef PERSON_H
#define PERSON_H

#include <string>


class Person
{
///Les attributs
    private:

        std::string m_nom;
        std::string m_prenom;
        int m_age;

///Les methodes
    public:
        Person();
        ~Person();
        void demandeInfo(std::string &nom,std::string &prenom,int &age);
        void displayPerson();
};

#endif