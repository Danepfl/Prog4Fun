//
//  main.cpp
//  Rectangle Dessin
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2017 Dany. All rights reserved.
//

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

void Rectangle(int l, int h, string arg)
{
    for(int ligne(0); ligne < h; ligne++)
    {
        for(int colonne(0); colonne < l; colonne++)
        {
            cout << arg;
        }
        cout << endl;
    }
}

int main()
{
    int longueur, hauteur;
    string argument;
    cout << "Largeur du rectangle : ";
    cin >> longueur;
    while (longueur <= 0) {
        cout << "Cette valeur est négative, mettez une valeur positive s'il vous plaît" << endl;
        cout << "Largeur du rectangle:";
        cin >> longueur;
    }
    cout << "Hauteur du rectangle : ";
    cin >> hauteur;
    while (hauteur <= 0) {
        cout << "Cette valeur est négative, mettez une valeur positive s'il vous plaît" << endl;
        cout << "Hauteur du rectangle:";
        cin >> hauteur;
    }
    cout << "Avec quel symbole voulez-vous dessiner?" << endl;
    cin >> argument;
    
    Rectangle(longueur, hauteur, argument);
    
    return 0;
}
