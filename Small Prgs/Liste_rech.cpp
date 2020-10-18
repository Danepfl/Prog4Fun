//
//  main.cpp
//  Liste recherche
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2017 Dany. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {

int number, taille;
string name;
vector <string> list ;

cout << "Quelle est la taille de la liste?" << endl;
cin >> taille;
    
cout << "Quels sont les prénoms de la liste?" << endl;
for(int i=0; i<=taille; i++){
getline(cin, name);
list.push_back (name);
}

    
for(int i=0; i < list.size(); i++){
    if ( list[i] == "Ana Sofia") {
        number=i;
    }
}
    
if(number!=0){
    cout << "Ana Sofia se trouve à la position " << number << endl;
}
    
else{
    cout << "La liste ne comporte pas d'Ana Sofia" << endl;
}

}
