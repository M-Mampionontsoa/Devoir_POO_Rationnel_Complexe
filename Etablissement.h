#include <string>
#include "Infrastructure.h"

class Etablissement:public Infrastructure
{
///Attribut spécifique 
        public:
            std::string m_nom;
        public:
            Etablissement();
            ~Etablissement();
            void getnom(std::string Nom);
};
