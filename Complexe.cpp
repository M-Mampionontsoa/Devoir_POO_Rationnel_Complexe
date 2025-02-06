#include "Complexe.h"
#include <iostream>

using namespace std;


Complexe::Complexe() : reel(0), imaginaire(0) 
{

}

// Constructeur avec paramètres
Complexe::Complexe(double re, double im) : reel(re), imaginaire(im) 
{

}

// Destructeur
Complexe::~Complexe() 
{

}

// Somme de deux nombres complexes
Complexe Complexe::somme(Complexe &autre) 
{
    return Complexe(reel + autre.reel, imaginaire + autre.imaginaire);
}

// Différence de deux nombres complexes
Complexe Complexe::difference(Complexe &autre) 
{
    return Complexe(reel - autre.reel, imaginaire - autre.imaginaire);
}




// Affichage du nombre complexe
void Complexe::afficher()
{
    cout << reel;
    if (imaginaire >= 0)
        cout << " + " << imaginaire << "i" << endl;
    else
        cout << " - " << -imaginaire << "i" << endl;
}