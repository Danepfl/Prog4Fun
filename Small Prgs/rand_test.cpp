//
//  main.cpp
//  rand test
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2017 Dany. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <cmath>
#include <fstream>
#include <random>
#include <time.h> //Ne pas oublier d'inclure le fichier time.h

using namespace std;

int j=0;
int de1,de2,de3,de4,de5,de6,de7, i, n1, n2, n3, n4, n5, n6, count1, tour;
double prob;
int main(void){
    srand(static_cast<unsigned int>(time(NULL))); // initialisation de rand
    random_device rd;
    mt19937 mt(rd());    // The random number generator using a non-deterministic random device
    uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
    tour=100000;
    for(int m=0;m<10;m++){
    count1=0;
    for(j=0;j<tour;j++){
    vector<int> des;
    de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
    de1 = dist(mt); de2 = dist(mt); de3 = dist(mt); de4 = dist(mt); de5 = dist(mt); de6 = dist(mt); de7 = dist(mt);
    des.push_back (de7); des.push_back (de6); des.push_back (de5); des.push_back (de4); des.push_back (de3); des.push_back (de2); des.push_back (de1);
    for (i=0; i<des.size(); i++){
        switch (des[i]){
            case 1: n1++;
                break;
            case 2: n2++;
                break;
            case 3: n3++;
                break;
            case 4: n4++;
                break;
            case 5: n5++;
                break;
            case 6: n6++;
                break;
            default:
                break;
        }
    }
    if((n1+n2+n3+n4+n5+n6)!=7){cout << "err" << endl;}
    if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)){count1++;}
    n1=0; n2=0; n3=0; n4=0; n5=0; n6=0;
    }
    prob=double(count1)/tour;
    cout << prob << endl << endl;
    }
}
