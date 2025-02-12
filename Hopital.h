#include <string>
#include "Infrastructure.h"

class Hopital:public Infrastructure
{
///Attribut spécifique 
        private:
            std::string m_nom;
        public:
            Hopital();
            ~Hopital();
            void getnomHop(std::string &nom);
};