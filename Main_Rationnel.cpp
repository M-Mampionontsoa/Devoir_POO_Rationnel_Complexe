#include <iostream>
#include "Rationnel.h"

using namespace std;

int main() {
    Rationnel r1(3, 4);
    Rationnel r2(5, 6);

    Rationnel somme = r1.somme(&r2);
    Rationnel difference = r1.difference(&r2);

    cout << "Somme : ";
    somme.displayResult();

    cout << "Différence : ";
    difference.displayResult();

    return 0;
}