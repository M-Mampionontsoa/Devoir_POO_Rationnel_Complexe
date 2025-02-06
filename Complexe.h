#include <iostream>

class Complexe 
{
    private:
        double reel;
        double imaginaire;

    public:
        Complexe();  
        Complexe(double re, double im);
        ~Complexe(); 
        
        Complexe somme(Complexe &autre);
        Complexe difference(Complexe &autre);
        

        void afficher();
};
