//
//  main.cpp
//  Interetcapital
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2017 Dany. All rights reserved.
//

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

long double interest;
long double capitalin;
long double capitalfin;
double tannees;
double tmois;
double tjours;
int annees;
int mois;
int jours;
int i = 0;

int main() {
    cout << "Quel est votre capital placé à la banque?" << endl;
    cin >> capitalin;
    cout << "Quel est le taux d'intérêt appliqué par votre banque? (en %)" << endl;
    cin >> interest;
    cout << "Pendant combien d'années comptez-vous faire fructifier le capital?" << endl;
    cin >> tannees;
    
    int annees = floor(tannees) ;
    double tmois = (tannees-annees)*12;
    int mois = floor(tmois);
    double tjours = (tmois-mois)*30;
    int jours = floor(tjours);
    double capitalfin = capitalin;
    
   /* cout << tannees << endl;
    cout << tmois << endl;
    cout << tjours << endl;
    cout << annees << endl;
    cout << mois << endl;
    cout << jours << endl;*/

    while (i < annees) {
    
        capitalfin = capitalfin*(1+0.01*interest);
        i++;
    }
    while (i < mois) {
        
        capitalfin = capitalfin*(1+(0.01*interest)/12);
        i++;
    }
    while (i < jours) {
        
        capitalfin = capitalfin*(1+(0.01*interest)/365);
        i++;
    }
    
    cout << "Si votre capital initial est de " << capitalin << " CHF il sera de " << capitalfin << " CHF au bout de " << annees << " années, " << mois << " mois et " << jours << " jours si on lui applique un taux d'intérêt de " << interest << "%." << endl << endl;
    
    return (0);
}
