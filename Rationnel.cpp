#include "Rationnel.h"
#include <iostream>

using namespace std;


Rationnel::Rationnel() : numerateur(0), denominateur(1) {}


Rationnel::Rationnel(int num, int den) 
{
    if (den == 0) 
    {
        cout << "Erreur ." << endl;
        numerateur = num;
        denominateur = 1;
    } 
    else 
    {
        numerateur = num;
        denominateur = den;
    }
}


Rationnel::~Rationnel() 
{

}

// Somme de deux rationnels
Rationnel Rationnel::somme( Rationnel *autre)
{
    int num = numerateur * autre->denominateur + autre->numerateur * denominateur;
    int den = denominateur * autre->denominateur;
    return Rationnel(num, den);
}

// Différence de deux rationnels
Rationnel Rationnel::difference( Rationnel *autre)
{
    int num = numerateur * autre->denominateur - autre->numerateur * denominateur;
    int den = denominateur * autre->denominateur;
    return Rationnel(num, den);
}

void Rationnel::displayResult()
{
    cout << numerateur << "/" << denominateur << endl;
}