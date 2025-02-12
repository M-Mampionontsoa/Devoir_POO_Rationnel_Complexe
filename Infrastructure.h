

#include <string>


class Infrastructure
{
///Les attributs
    private:
        std::string m_type;
        std::string m_adresse;


///Les methodes
    public:
        Infrastructure();
        ~Infrastructure();
        void demande(std::string &name,std::string &adresse );
        void displayEtab();
       
};

