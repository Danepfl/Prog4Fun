//
//  main.cpp
//  PoidsTerreLune
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2017 Dany. All rights reserved.
//
#include <iostream>

using namespace std;

int main()
{
    int masse;
    double gterre(9.806); double glune(1.622);
    cout << "Quelle est votre masse?" << endl;
    cin >> masse;
    double poidsterre(gterre*masse);
    double poidslune(glune*masse);
    double masserelative (poidslune/gterre);
    cout << endl << "Vous exercez une force de " << poidsterre << " Newtons sur la Terre ";
    cout << "et vous exercez une force de " << poidslune << " Newtons sur la Lune! " << endl << endl ;
    cout << "Votre poids relatif sur la Lune est donc de " << masserelative << " Kg. " << endl << endl;
    cout << "Félicitations, vous avez maigri!" << endl << endl;
    return 0;
}
