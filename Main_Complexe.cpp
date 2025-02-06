#include <iostream>
#include "Complexe.h"

using namespace std;

int main() 
{
    Complexe c1(3, 4);
    Complexe c2(1, -2);

    Complexe somme = c1.somme(c2);
    Complexe difference = c1.difference(c2);
    

    cout << "Premier complexe : ";
    c1.afficher();

    cout << "Deuxième complexe : ";
    c2.afficher();

    cout << "Somme : ";
    somme.afficher();

    cout << "Différence : ";
    difference.afficher();

   

    return 0;
}
