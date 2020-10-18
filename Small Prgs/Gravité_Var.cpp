//
//  main.cpp
//  Gravité Variation
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2017 Dany. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    double gmax = 9.83, gmin = 9.78, g = 9.81, masse, varforce;
    cout << "Entrez le poids désiré (en kg): ";
    cin >> masse;
    varforce = masse*(gmax-gmin);
    cout << "Votre poids maximal sur Terre est de : " << masse*gmax << " [N]." << endl;
    cout << "Cela correspond à une masse de : " << masse*(gmax/g) << " [kg]." << endl;
    cout << "Votre poids minimal sur Terre est de : " << masse*gmin << " [N]." << endl;
    cout << "Cela correspond à une masse de : " << masse*(gmin/g) << " [kg]." << endl;
    cout << "Votre différence de poids sur Terre est de : " << varforce << " [N]." << endl;
    cout << "Cela correspond à une masse de : " << varforce/g << " [kg]." << endl;
    
}
