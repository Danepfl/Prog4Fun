//
//  main.cpp
//  test 2
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2017 Dany. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    unsigned long long int MasseterreG(403971552400000);
    unsigned long long int MassemarsG(43420076220000);
    long double masse;
    long double gravity;
    long double hauteur;
    long double distancenoyauterre(6371000);
    long double hauteurfinale;
    long double distancenoyaumars (3397200);
    long double gnormterre(9.95142);
    long double gnormmars (3.76226);
    string response;
    long double masserelfinal(0);
    long double varmasse(0);
    long double altitude(0);
    long double massemars;
    
    cout << "Quelle est votre masse?" << endl;
    cin >> masse;
    cout << "Sur quelle planète habitez-vous? (Terre/Mars/Jupiter)" << endl;
    cin >> response;
    
    if (response == "Terre") { cout << "À quelle altitude vous trouvez-vous?" << endl;
        cin >> hauteur;
        altitude = hauteur;
        cout << endl << "P.S.: La mesure de la soi-disant constante g varie et cette constante vaut 9,8074 m/(s^2) au bord du Lac Léman (à 372 m). Celle-ci ne varie pas seulement en fonction de l'altitude mais peut varier en fonction de la latitude et de la longitude à laquelle a été prise la mesure. Cela peut être expliqué grâce à la forme de la terre, qui n'est pas parfaitement ronde!" << endl << endl;
        hauteurfinale = hauteur+distancenoyauterre;
        gravity = MasseterreG/((hauteurfinale)*(hauteurfinale));
        masserelfinal = (masse*gravity)/gnormterre;
        varmasse = -0.045594+1000*masse*(1-(gravity/gnormterre));
        cout << "Votre poids à " << altitude << " mètres équivaut à " << masserelfinal << " Kg " << endl;
        cout << "Vous avez perdu " << varmasse << " grammes!" << endl << endl;
    }
    
    if (response == "Mars") { cout << "À quelle hauteur en dessous du Mont Olympus vous trouvez-vous?" << endl;
        cin >> hauteur;
        altitude = -(hauteur);
        massemars = masse * gnormmars/gnormterre;
        hauteurfinale = distancenoyaumars+21229-hauteur;
        gravity = MassemarsG/((hauteurfinale)*(hauteurfinale));
        masserelfinal = (massemars*gravity)/gnormmars;
        varmasse = -0.393777+1000*massemars*(1-(gravity/gnormmars));
        cout <<"Votre poids sur Mars (au niveau du référentiel martien, 21229 mètres en-dessous du Mont Olympus) est de " << massemars << " Kg" << endl << endl;
        cout << "Votre poids à " << altitude << " mètres équivaut à " << masserelfinal << " Kg " << endl;
        cout << "Vous avez perdu " << varmasse << " grammes!" << endl << endl;
    }
    
    if((response != "Terre")&&(response != "Mars")){ cout << "Je sais très bien que vous ne vivez pas autre part que sur la Terre ou sur Mars... N'essayez pas de me leurrer!" <<endl <<endl;
    }
    
    return(0);
}
