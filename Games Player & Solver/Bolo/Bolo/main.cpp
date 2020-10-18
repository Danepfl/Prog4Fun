//

//  main.cpp

//  Bolo

//

//  Created by Dany on 29. 01. 2017./Users/dany/Desktop/main.cpp

//  Copyright © 2017 Dany. All rights reserved.

//


#include <iostream>

#include <vector>

#include <string>

#include <math.h>

#include <cmath>

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <fstream>

#include <random>

using namespace std;


int de1, de2, de3, de4, de5, de6, de7, n1, n2, n3, n4, n5, n6, ptsopt, j, k, l, m, c, a, b, s, r, t, ptp, ptn, donnees;

int w1, w2, w3, w4, w5, w6, w7, w8; // w1, w2, w3, w4 pour desopt  w5, w6, w7, w8 pour ptopt

string w9, w10, w11, w12, stats, temp;

int nbrejoueurs, jo1, jo2, jo3, jo4, jo5, jo6, jo7, jo8;

string njo1, njo2, njo3, njo4, njo5, njo6, njo7, njo8;

int sct1, sct2, sct3, sct4, sct5, sct6, sct7, sct8;

int scoreordi, e, f, g, h, i, nd, d, maxopt, z, q, xxx, ok, perdu, has, vict ,fin, play, stop10k;

int p1, p2, scoremeiljo, p1000, numj, prims, premier, aff;

int a2, a3, a5, a6, a8, a9, b2, b3, b5, b6, fi;

string a1, a4, a7, b1, b4, okk, meiljo;

long double deltatj, deltaptt;

double alpha1, alpha2, alpha3, alpha4, alpha5, alpha6, alpha7;

int main() {
    
    srand(static_cast<unsigned int>(time(NULL))); // for random function, initialization
    
    random_device rd;
    
    mt19937 mt(rd());    // The random number generator using a non-deterministic random device
    
    alpha1=518.3333;
    alpha2=320;
    alpha3=170;
    alpha4=120;
    alpha5=120;
    alpha6=190;
    alpha7=1480;
    
    //initialisation au début du tour
    while ((has != 1)&&(has != 2)){
        
        cout << "Hello, World!" << endl << endl << "Je m'appelle Bolito et je suis le programme qui va vous battre au Bolo sous peu." << endl <<
        "Si vous ne connaissez pas encore les règles de ce jeu, allez consulter le fichier Bolo Règles, contenu dans le même dossier que ce jeu." << endl << "Ceci dit, êtes-vous prêt(s) à perdre lamentablement face à une machine?" << endl << endl << "1: C'est toi qui va perdre!!" << endl << "2: Oui, chef" << endl << "3: Non. Je refuse de jouer contre un programme qui me provoque dès le début du jeu." << endl << endl << "Votre choix: ";
        cin >> play;
        
        if(play==1){
        cout << endl << "Très bien, j'enregistre cela et je vous démontrerai que vous avez tort à la fin de la partie comme l'on démontre que le chemin le plus court est la ligne droite." << endl << endl;
        }
        if(play==2){
            cout << endl <<"Alors c'est parti!" << endl << endl;
        }
        if(play==3){
            cout << endl << "Tant pis. Quand vous comprendrez mon sens de l'humour revenez et on fera une partie alors." << endl << endl;
            return EXIT_FAILURE;
        }
        
        cout << "Durant cette partie, voulez-vous tirer les dés à ma place ou préférez-vous que je tire moi-même les dés?" << endl << endl
        << "1: Me laisser tirer les dés moi-même" << endl << "2: Tirer les dés à ma place" << endl<< endl << "Votre choix: ";
        
        cin >> has;
    }
    has--;
    
    cout << endl << "Comment voulez-vous que j'affiche le tour de jeu de Bolito?" << endl << endl << "1: Afficher tout le tour de Bolito d'un coup"
    << endl << "2: Afficher les lancers de dés de Bolito un par un sans l'instruction \"Appuyez sur Entrée pour continuer\" entre chaque jet de dés"
    << endl << "3: Afficher les lancers de dés de Bolito un par un avec l'instruction \"Appuyez sur Entrée pour continuer\" entre chaque jet de dés"
    << endl << endl << "Votre choix: ";
    
    cin >> aff;
    
    cout << endl << "Quel est le nombre de joueurs? (De 1 à 8, Ordinateur excepté)" << endl << endl << "Nombre de joueurs: "; //Nombre de joueurs
    
    cin >> nbrejoueurs;
    
    while ((nbrejoueurs<1)||(nbrejoueurs>8)){cout << "Erreur nombre joueurs! Veuillez réinsérer le nombre de joueurs qui jouent. (De 1 à 8) :" << endl;
        
        cin >> nbrejoueurs;}
    
    if(nbrejoueurs==1){
        
        cout << endl << "Comment s'appelle mon adversaire?" << endl << endl;
    }
    else{
        
        cout << endl << "Comment s'appellent mes adversaires?" << endl << endl;
    }
    
    
    switch (nbrejoueurs) { //Inscription noms des joueurs
            
        case 1:
            
            cout << "Prénom de la première joueuse / Prénom du premier joueur: ";
            cin >> njo1;
            
            break;
            
        case 2:
            
            cout << "Prénom de la première joueuse / Prénom du premier joueur: ";
            cin >> njo1;
            cout << endl << "Prénom de la deuxième joueuse / Prénom du deuxième joueur: ";
            cin >> njo2;
            
            break;
            
        case 3:
            
            cout << "Prénom de la première joueuse / Prénom du premier joueur: ";
            cin >> njo1;
            cout << endl << "Prénom de la deuxième joueuse / Prénom du deuxième joueur: ";
            cin >> njo2;
            cout << endl << "Prénom de la troisième joueuse / Prénom du troisième joueur: ";
            cin >> njo3;
            
            break;
            
        case 4:
            
            cout << "Prénom de la première joueuse / Prénom du premier joueur: ";
            cin >> njo1;
            cout << endl << "Prénom de la deuxième joueuse / Prénom du deuxième joueur: ";
            cin >> njo2;
            cout << endl << "Prénom de la troisième joueuse / Prénom du troisième joueur: ";
            cin >> njo3;
            cout << endl << "Prénom de la quatrième joueuse / Prénom du quatrième joueur: ";
            cin >> njo4;
            
            break;
            
        case 5:
            
            cout << "Prénom de la première joueuse / Prénom du premier joueur: ";
            cin >> njo1;
            cout << endl << "Prénom de la deuxième joueuse / Prénom du deuxième joueur: ";
            cin >> njo2;
            cout << endl << "Prénom de la troisième joueuse / Prénom du troisième joueur: ";
            cin >> njo3;
            cout << endl << "Prénom de la quatrième joueuse / Prénom du quatrième joueur: ";
            cin >> njo4;
            cout << endl << "Prénom de la cinquième joueuse / Prénom du cinquième joueur: ";
            cin >> njo5;
            
            break;
            
        case 6:
            
            cout << "Prénom de la première joueuse / Prénom du premier joueur: ";
            cin >> njo1;
            cout << endl << "Prénom de la deuxième joueuse / Prénom du deuxième joueur: ";
            cin >> njo2;
            cout << endl << "Prénom de la troisième joueuse / Prénom du troisième joueur: ";
            cin >> njo3;
            cout << endl << "Prénom de la quatrième joueuse / Prénom du quatrième joueur: ";
            cin >> njo4;
            cout << endl << "Prénom de la cinquième joueuse / Prénom du cinquième joueur: ";
            cin >> njo5;
            cout << endl << "Prénom de la sixième joueuse / Prénom du sixième joueur: ";
            cin >> njo6;
            
            break;
            
        case 7:
            
            cout << "Prénom de la première joueuse / Prénom du premier joueur: ";
            cin >> njo1;
            cout << endl << "Prénom de la deuxième joueuse / Prénom du deuxième joueur: ";
            cin >> njo2;
            cout << endl << "Prénom de la troisième joueuse / Prénom du troisième joueur: ";
            cin >> njo3;
            cout << endl << "Prénom de la quatrième joueuse / Prénom du quatrième joueur: ";
            cin >> njo4;
            cout << endl << "Prénom de la cinquième joueuse / Prénom du cinquième joueur: ";
            cin >> njo5;
            cout << endl << "Prénom de la sixième joueuse / Prénom du sixième joueur: ";
            cin >> njo6;
            cout << endl << "Prénom de la septième joueuse / Prénom du septième joueur: ";
            cin >> njo7;
            
            break;
            
        case 8:
            
            cout << "Prénom de la première joueuse / Prénom du premier joueur: ";
            cin >> njo1;
            cout << endl << "Prénom de la deuxième joueuse / Prénom du deuxième joueur: ";
            cin >> njo2;
            cout << endl << "Prénom de la troisième joueuse / Prénom du troisième joueur: ";
            cin >> njo3;
            cout << endl << "Prénom de la quatrième joueuse / Prénom du quatrième joueur: ";
            cin >> njo4;
            cout << endl << "Prénom de la cinquième joueuse / Prénom du cinquième joueur: ";
            cin >> njo5;
            cout << endl << "Prénom de la sixième joueuse / Prénom du sixième joueur: ";
            cin >> njo6;
            cout << endl << "Prénom de la septième joueuse / Prénom du septième joueur: ";
            cin >> njo7;
            cout << endl << "Prénom de la huitième joueuse / Prénom du huitième joueur: ";
            cin >> njo8;
            
            break;
            
    }
    
    while ((premier != 1)&&(premier != 2)&&(premier != 3)){
        
        cout << endl << "Qui commence la partie?" << endl << endl << "1: Bolito" << endl << "2: La première joueuse / Le premier joueur" << endl << "3: Le choix de la première personne qui joue est fait au hasard entre Bolito et la première joueuse / le premier joueur." << endl << endl << "Votre choix: ";
        
        cin >> premier;
        
    }
    
    cout << endl;
    
    if(premier == 3 ){
        
        uniform_int_distribution<int> dist(0,1);
        
        prims=dist(mt);
        
        if(prims == 0){
        
            premier = 1 ;
            
            cout << "L'ordinateur joue en premier." << endl << endl;
            
        }
        
        else{
            
            premier = 2;
        
            cout << njo1 << " joue en premier." << endl << endl;
            
        }
        
    }
    
    cout << "Si la partie s'est subitement arrêtée, réinsérez le score de Bolito au moment de l'arrêt de la partie. Sinon insérez le chiffre zéro." << endl << endl << "Score de Bolito: "; cin >> scoreordi; // Uniquement si le programme est arrêté au milieu d'une partie et doit être redémarré!
    if(aff==3){
        cin.ignore();
    }
    
    if (premier == 2){ //inscription points premier tour joueurs
        cout << endl;
        switch (nbrejoueurs){
                
            case 1:
                
                cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct1;
                while(((sct1%50)!=0)||((sct1<1000)&&(sct1!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                
                break;
                
            case 2:
                
                cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct1;
                while(((sct1%50)!=0)||((sct1<1000)&&(sct1!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                
                cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct2;
                while(((sct2%50)!=0)||((sct2<1000)&&(sct2!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                
                break;
                
            case 3:
                
                cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct1;
                while(((sct1%50)!=0)||((sct1<1000)&&(sct1!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                
                cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct2;
                while(((sct2%50)!=0)||((sct2<1000)&&(sct2!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                
                cout << "Quel est le nombre de points que " << njo3 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct3;
                while(((sct3%50)!=0)||((sct3<1000)&&(sct3!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                
                break;
                
            case 4:
                
                cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct1;
                while(((sct1%50)!=0)||((sct1<1000)&&(sct1!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                
                cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct2;
                while(((sct2%50)!=0)||((sct2<1000)&&(sct2!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                
                cout << "Quel est le nombre de points que " << njo3 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct3;
                while(((sct3%50)!=0)||((sct3<1000)&&(sct3!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                
                cout << "Quel est le nombre de points que " << njo4 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct4;
                while(((sct4%50)!=0)||((sct4<1000)&&(sct4!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                
                break;
                
            case 5:
                
                cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct1;
                while(((sct1%50)!=0)||((sct1<1000)&&(sct1!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                
                cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct2;
                while(((sct2%50)!=0)||((sct2<1000)&&(sct2!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                
                cout << "Quel est le nombre de points que " << njo3 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct3;
                while(((sct3%50)!=0)||((sct3<1000)&&(sct3!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                
                cout << "Quel est le nombre de points que " << njo4 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct4;
                while(((sct4%50)!=0)||((sct4<1000)&&(sct4!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                
                cout << "Quel est le nombre de points que " << njo5 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct5;
                while(((sct5%50)!=0)||((sct5<1000)&&(sct5!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct5;}
                
                break;
                
            case 6:
                
                cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct1;
                while(((sct1%50)!=0)||((sct1<1000)&&(sct1!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                
                cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct2;
                while(((sct2%50)!=0)||((sct2<1000)&&(sct2!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                
                cout << "Quel est le nombre de points que " << njo3 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct3;
                while(((sct3%50)!=0)||((sct3<1000)&&(sct3!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                
                cout << "Quel est le nombre de points que " << njo4 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct4;
                while(((sct4%50)!=0)||((sct4<1000)&&(sct4!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                
                cout << "Quel est le nombre de points que " << njo5 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct5;
                while(((sct5%50)!=0)||((sct5<1000)&&(sct5!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct5;}
                
                cout << "Quel est le nombre de points que " << njo6 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct6;
                while(((sct6%50)!=0)||((sct6<1000)&&(sct6!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct6;}
                
                break;
                
            case 7:
                
                cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct1;
                while(((sct1%50)!=0)||((sct1<1000)&&(sct1!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                
                cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct2;
                while(((sct2%50)!=0)||((sct2<1000)&&(sct2!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                
                cout << "Quel est le nombre de points que " << njo3 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct3;
                while(((sct3%50)!=0)||((sct3<1000)&&(sct3!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                
                cout << "Quel est le nombre de points que " << njo4 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct4;
                while(((sct4%50)!=0)||((sct4<1000)&&(sct4!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                
                cout << "Quel est le nombre de points que " << njo5 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct5;
                while(((sct5%50)!=0)||((sct5<1000)&&(sct5!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct5;}
                
                cout << "Quel est le nombre de points que " << njo6 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct6;
                while(((sct6%50)!=0)||((sct6<1000)&&(sct6!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct6;}
                
                cout << "Quel est le nombre de points que " << njo7 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct7;
                while(((sct7%50)!=0)||((sct7<1000)&&(sct7!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct7;}
                
                break;
                
            case 8:
                
                cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct1;
                while(((sct1%50)!=0)||((sct1<1000)&&(sct1!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                
                cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct2;
                while(((sct2%50)!=0)||((sct2<1000)&&(sct2!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                
                cout << "Quel est le nombre de points que " << njo3 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct3;
                while(((sct3%50)!=0)||((sct3<1000)&&(sct3!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                
                cout << "Quel est le nombre de points que " << njo4 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct4;
                while(((sct4%50)!=0)||((sct4<1000)&&(sct4!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                
                cout << "Quel est le nombre de points que " << njo5 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct5;
                while(((sct5%50)!=0)||((sct5<1000)&&(sct5!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct5;}
                
                cout << "Quel est le nombre de points que " << njo6 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct6;
                while(((sct6%50)!=0)||((sct6<1000)&&(sct6!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct6;}
                
                cout << "Quel est le nombre de points que " << njo7 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct7;
                while(((sct7%50)!=0)||((sct7<1000)&&(sct7!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct7;}
                
                cout << "Quel est le nombre de points que " << njo8 << " a obtenu durant ce premier tour?" << endl << endl << "Nombre de points: ";
                cin >> sct8;
                while(((sct8%50)!=0)||((sct8<1000)&&(sct8!=0))){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct8;}
                
                break;
                
        }
        
        jo1 = jo1+sct1;
        
        jo2 = jo2+sct2;
        
        jo3 = jo3+sct3;
        
        jo4 = jo4+sct4;
        
        jo5 = jo5+sct5;
        
        jo6 = jo6+sct6;
        
        jo7 = jo7+sct7;
        
        jo8 = jo8+sct8;
     
        if(aff==3){
            cin.ignore();
        }
    }
    
    while(fin==0){
        // fin: 0: jeu non terminé ; 1: Ordi gagne ; 2: Joueur gagne ; 3: Erreur
        // vict: 1: Ordi gagne 2: Joueur gagne
        
        d=7; // Initialisation à 7 dés
        
        
        //debut du tour (de la boucle qui fait le tour) ??
        
        vector<int> joueurs; // Vecteur contenant les scores des joueurs
        joueurs.clear();
        joueurs.push_back(jo1);
        
        joueurs.push_back(jo2);
        
        joueurs.push_back(jo3);
        
        joueurs.push_back(jo4);
        
        joueurs.push_back(jo5);
        
        joueurs.push_back(jo6);
        
        joueurs.push_back(jo7);
        
        joueurs.push_back(jo8);
        
        vector<string> nj; // Vecteur contenant les noms des joueurs permettant de les associer au score correspondant
        nj.push_back(njo1);
        
        nj.push_back(njo2);
        
        nj.push_back(njo3);
        
        nj.push_back(njo4);
        
        nj.push_back(njo5);
        
        nj.push_back(njo6);
        
        nj.push_back(njo7);
        
        nj.push_back(njo8);
        
        int scoremeiljo = max(max(max(jo1,jo2), max (jo3, jo4)), max(max(jo5,jo6), max(jo7,jo8))); // Sélection meilleur joueur
        sct1=0, sct2=0, sct3=0, sct4=0, sct5=0, sct6=0, sct7=0, sct8=0;
        
        
        for(i=0; scoremeiljo != joueurs[i]; i++){
            
        }
        
        meiljo = nj[i];
        
        numj = joueurs[i];
        
        if (vict==2){ vict=0;}
        
        if ((numj>scoreordi)&&(numj>10000)){
            
            vict=2;
            
        }
        
        if (vict==1){cout << endl << "Bolito a gagné la partie! Bravo à moi!" << endl << endl;
            
            fin=1;
            
        }
        if (fin !=1){
        
        i=0;
        
        vector<int> ptopt;
        
        vector<int> desopt;
        
        vector<string> optch;
        
        vector<int> sptopt;
        
        vector<int> sdesopt;
        
        vector<string> soptch;
        
        vector<double> ptchem;
        
        vector<double> edg;
        
        vector<double> pperte;
        
        vector<double> pvict;
        
        vector<double> ptsmoy;
        
        vector<int> sct;
            
        sct.push_back(sct1);
            
        sct.push_back(sct2);
            
        sct.push_back(sct3);
            
        sct.push_back(sct4);
            
        sct.push_back(sct5);
            
        sct.push_back(sct6);
            
        sct.push_back(sct7);
            
        sct.push_back(sct8);
            
        pperte.push_back(0.009); // Attention au 0 qui est la premiere option (pour 0 dés théoriquement ou 7 si avant le modulo)!!
        
        pperte.push_back(0.66667);
        
        pperte.push_back(0.44444);
        
        pperte.push_back(0.27778);
        
        pperte.push_back(0.15741);
        
        pperte.push_back(0.07716);
        
        pperte.push_back(0.03086);
        
        pperte.push_back(0.009);
        
            
        ptsmoy.push_back(alpha7);
        
        ptsmoy.push_back(alpha1);
        
        ptsmoy.push_back(alpha2);
        
        ptsmoy.push_back(alpha3);
            
        ptsmoy.push_back(alpha4);
        
        ptsmoy.push_back(alpha5);
        
        ptsmoy.push_back(alpha6);
        
        ptsmoy.push_back(alpha7);
        
        if(stop10k>=2){z=1;}
        while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
            
            vector<int> des;
            de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
            
            uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
            
            if (has==0){
                
                if(fi==0){
                    cout << endl;
                    fi=1;
                }
                
                de1 = dist(mt);
                
                de2 = dist(mt);
                
                de3 = dist(mt);
                
                de4 = dist(mt);
                
                de5 = dist(mt);
                
                de6 = dist(mt);
                
                de7 = dist(mt);
                
                switch(d){
                        
                    case 7:
                        
                        des.push_back (de7);
                        
                        des.push_back (de6);
                        
                        des.push_back (de5);
                        
                        des.push_back (de4);
                        
                        des.push_back (de3);
                        
                        des.push_back (de2);
                        
                        des.push_back (de1);
                        
                        if(aff==3){
                            cout << endl << "Appuyez sur Entrée pour continuer";
                        }
                        if((aff==2)||(aff==3)){
                            cin.ignore();
                        }
                        if(aff==3) {
                            cout << endl;
                        }
                        
                        cout << endl << "J'ai tiré la séquence suivante: " << de1 << " " << de2 << " " << de3 << " " << de4 << " " << de5 << " " << de6 << " " << de7;
                        
                        break;
                        
                    case 6:
                        
                        des.push_back (de6);
                        
                        des.push_back (de5);
                        
                        des.push_back (de4);
                        
                        des.push_back (de3);
                        
                        des.push_back (de2);
                        
                        des.push_back (de1);
                        
                        if(aff==3){
                            cout << endl << "Appuyez sur Entrée pour continuer";
                        }
                        if((aff==2)||(aff==3)){
                            cin.ignore();
                        }
                        if(aff==3) {
                            cout << endl;
                        }
                        cout << endl << "J'ai tiré la séquence suivante: " << de1 << " " << de2 << " " << de3 << " " << de4 << " " << de5 << " " << de6;
                        
                        break;
                        
                    case 5:
                        
                        des.push_back (de5);
                        
                        des.push_back (de4);
                        
                        des.push_back (de3);
                        
                        des.push_back (de2);
                        
                        des.push_back (de1);
                        
                        if(aff==3){
                            cout << endl << "Appuyez sur Entrée pour continuer";
                        }
                        if((aff==2)||(aff==3)){
                            cin.ignore();
                        }
                        if(aff==3) {
                            cout << endl;
                        }
                        cout << endl << "J'ai tiré la séquence suivante: " << de1 << " " << de2 << " " << de3 << " " << de4 << " " << de5;
                        
                        break;
                        
                    case 4:
                        
                        des.push_back (de4);
                        
                        des.push_back (de3);
                        
                        des.push_back (de2);
                        
                        des.push_back (de1);
                        
                        if(aff==3){
                            cout << endl << "Appuyez sur Entrée pour continuer";
                        }
                        if((aff==2)||(aff==3)){
                            cin.ignore();
                        }
                        if(aff==3) {
                            cout << endl;
                        }
                        cout << endl << "J'ai tiré la séquence suivante: " << de1 << " " << de2 << " " << de3 << " " << de4;
                        
                        break;
                        
                    case 3:
                        
                        des.push_back (de3);
                        
                        des.push_back (de2);
                        
                        des.push_back (de1);
                        
                        if(aff==3){
                            cout << endl << "Appuyez sur Entrée pour continuer";
                        }
                        if((aff==2)||(aff==3)){
                            cin.ignore();
                        }
                        if(aff==3) {
                            cout << endl;
                        }
                        cout << endl << "J'ai tiré la séquence suivante: " << de1 << " " << de2 << " " << de3;
                        
                        break;
                        
                    case 2:
                        
                        des.push_back (de2);
                        
                        des.push_back (de1);
                        
                        if(aff==3){
                            cout << endl << "Appuyez sur Entrée pour continuer";
                        }
                        if((aff==2)||(aff==3)){
                            cin.ignore();
                        }
                        if(aff==3) {
                            cout << endl;
                        }
                        cout << endl << "J'ai tiré la séquence suivante: " << de1 << " " << de2;
                        
                        break;
                        
                    case 1:
                        
                        des.push_back (de1);
                        
                        if(aff==3){
                            cout << endl << "Appuyez sur Entrée pour continuer";
                        }
                        if((aff==2)||(aff==3)){
                            cin.ignore();
                        }
                        if(aff==3) {
                            cout << endl;
                        }
                        cout << endl << "J'ai tiré la séquence suivante: " << de1;
                        
                        break;
                        
                }
                
                cout << endl << endl;
                
                for(m=0; m<des.size(); m++){
                    
                    while((des[m]<=0)||(des[m]>6)){
                        
                        cout << "Il y a une erreur dans l'entrée du/des dé(s), veuillez réecrire le/les dé(s) erroné(s): " << endl;
                        
                        cin >> des[m];
                        
                    }
                    
                    
                    
                }
                
            }
            
            if(has==1){
                
                cout << endl << "Entrez la valeur des dés ci-dessous pour Bolito." << endl;
                
                switch(d){
                        
                    case 7:
                        
                        cout << "1er dé: ";
                        cin >> de7;
                        des.push_back (de7);
                        
                        cout << "2ème dé: ";
                        cin >> de6;
                        des.push_back (de6);
                        
                        cout << "3ème dé: ";
                        cin >> de5;
                        des.push_back (de5);
                        
                        cout << "4ème dé: ";
                        cin >> de4;
                        des.push_back (de4);
                        
                        cout << "5ème dé: ";
                        cin >> de3;
                        des.push_back (de3);
                        
                        cout << "6ème dé: ";
                        cin >> de2;
                        des.push_back (de2);
                        
                        cout << "7ème dé: ";
                        cin >> de1;
                        des.push_back (de1);
                        
                        break;
                        
                    case 6:
                        
                        cout << "1er dé: ";
                        cin >> de6;
                        des.push_back (de6);
                        
                        cout << "2ème dé: ";
                        cin >> de5;
                        des.push_back (de5);
                        
                        cout << "3ème dé: ";
                        cin >> de4;
                        des.push_back (de4);
                        
                        cout << "4ème dé: ";
                        cin >> de3;
                        des.push_back (de3);
                        
                        cout << "5ème dé: ";
                        cin >> de2;
                        des.push_back (de2);
                        
                        cout << "6ème dé: ";
                        cin >> de1;
                        des.push_back (de1);
                        
                        break;
                        
                    case 5:
                        
                        cout << "1er dé: ";
                        cin >> de5;
                        des.push_back (de5);
                        
                        cout << "2ème dé: ";
                        cin >> de4;
                        des.push_back (de4);
                        
                        cout << "3ème dé: ";
                        cin >> de3;
                        des.push_back (de3);
                        
                        cout << "4ème dé: ";
                        cin >> de2;
                        des.push_back (de2);
                        
                        cout << "5ème dé: ";
                        cin >> de1;
                        des.push_back (de1);
                        
                        break;
                        
                    case 4:
                        
                        cout << "1er dé: ";
                        cin >> de4;
                        des.push_back (de4);
                        
                        cout << "2ème dé: ";
                        cin >> de3;
                        des.push_back (de3);
                        
                        cout << "3ème dé: ";
                        cin >> de2;
                        des.push_back (de2);
                        
                        cout << "4ème dé: ";
                        cin >> de1;
                        des.push_back (de1);
                        
                        break;
                        
                    case 3:
                        
                        cout << "1er dé: ";
                        cin >> de3;
                        des.push_back (de3);
                        
                        cout << "2ème dé: ";
                        cin >> de2;
                        des.push_back (de2);
                        
                        cout << "3ème dé: ";
                        cin >> de1;
                        des.push_back (de1);
                        
                        break;
                        
                    case 2:
                        
                        cout << "1er dé: ";
                        cin >> de2;
                        des.push_back (de2);
                        
                        cout << "2ème dé: ";
                        cin >> de1;
                        des.push_back (de1);
                        
                        break;
                        
                    case 1:
                        
                        cout << "1er dé: ";
                        cin >> de1;
                        des.push_back (de1);
                        
                        break;
                }
                
                for(m=0; m<des.size(); m++){
                    
                    while((des[m]<=0)||(des[m]>6)){
                        
                        cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné(s)" << endl;
                        
                        cin >> des[m];
                        
                    }
                    
                    
                    
                }
                cout << endl;
            }
            
            
            
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
            
            if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "Erreur insertion dés, redémarrer programme" << endl;
                
                fin = 3;
                
                cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
            
            
            
            if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
            
            switch(n6) {
                    
                case 3:
                    
                    ptsopt=600; desopt.push_back(n6); ptopt.push_back(ptsopt); optch.push_back("666");
                    
                    break;
                    
                case 4:
                    
                    ptsopt=1200; desopt.push_back(n6); ptopt.push_back(ptsopt); optch.push_back("6666");
                    
                    break;
                    
                case 5:
                    
                    ptsopt=2400; desopt.push_back(n6); ptopt.push_back(ptsopt); optch.push_back("66666");
                    
                    break;
                    
                case 6:
                    
                    ptsopt=4800; desopt.push_back(n6); ptopt.push_back(ptsopt); optch.push_back("666666");
                    
                    break;
                    
                case 7:
                    
                    ptsopt=9600; desopt.push_back(n6); ptopt.push_back(ptsopt); optch.push_back("6666666");
                    
                    break;
                    
                default:
                    
                    break;
                    
            }
            
            
            
            n6 = 0;
            
            
            
            switch(n5) {
                    
                case 1:
                    
                    ptsopt=50; desopt.push_back(n5); ptopt.push_back(ptsopt); optch.push_back("5");
                    
                    break;
                    
                case 2:
                    
                    ptsopt=50; desopt.push_back(1); ptopt.push_back(ptsopt); optch.push_back("5");
                    
                    ptsopt=50; desopt.push_back(1); ptopt.push_back(ptsopt); optch.push_back("5");
                    
                    break;
                    
                case 3:
                    
                    ptsopt=500; desopt.push_back(n5); ptopt.push_back(ptsopt); optch.push_back("555");
                    
                    break;
                    
                case 4:
                    
                    ptsopt=1000; desopt.push_back(n5); ptopt.push_back(ptsopt); optch.push_back("5555");
                    
                    break;
                    
                case 5:
                    
                    ptsopt=2000; desopt.push_back(n5); ptopt.push_back(ptsopt); optch.push_back("55555");
                    
                    break;
                    
                case 6:
                    
                    ptsopt=4000; desopt.push_back(n5); ptopt.push_back(ptsopt); optch.push_back("555555");
                    
                    break;
                    
                case 7:
                    
                    ptsopt=8000; desopt.push_back(n5); ptopt.push_back(ptsopt); optch.push_back("5555555");
                    
                    break;
                    
                default:
                    
                    break;
                    
            }
            
            n5 = 0;
            
            
            
            switch(n4) {
                    
                case 3:
                    
                    ptsopt=400; desopt.push_back(n4); ptopt.push_back(ptsopt); optch.push_back("444");
                    
                    break;
                    
                case 4:
                    
                    ptsopt=800; desopt.push_back(n4); ptopt.push_back(ptsopt); optch.push_back("4444");
                    
                    break;
                    
                case 5:
                    
                    ptsopt=1600; desopt.push_back(n4); ptopt.push_back(ptsopt); optch.push_back("44444");
                    
                    break;
                    
                case 6:
                    
                    ptsopt=3200; desopt.push_back(n4); ptopt.push_back(ptsopt); optch.push_back("444444");
                    
                    break;
                    
                case 7:
                    
                    ptsopt=6400; desopt.push_back(n4); ptopt.push_back(ptsopt); optch.push_back("4444444");
                    
                    break;
                    
                default:
                    
                    break;
                    
                    
                    
            }
            
            
            
            n4 = 0;
            
            
            
            switch(n3) {
                    
                case 3:
                    
                    ptsopt=300; desopt.push_back(n3); ptopt.push_back(ptsopt); optch.push_back("333");
                    
                    break;
                    
                case 4:
                    
                    ptsopt=600; desopt.push_back(n3); ptopt.push_back(ptsopt); optch.push_back("3333");
                    
                    break;
                    
                case 5:
                    
                    ptsopt=1200; desopt.push_back(n3); ptopt.push_back(ptsopt); optch.push_back("33333");
                    
                    break;
                    
                case 6:
                    
                    ptsopt=2400; desopt.push_back(n3); ptopt.push_back(ptsopt); optch.push_back("333333");
                    
                    break;
                    
                case 7:
                    
                    ptsopt=4800; desopt.push_back(n3); ptopt.push_back(ptsopt); optch.push_back("3333333");
                    
                    break;
                    
                default:
                    
                    break;
                    
            }
            
            
            
            n3 = 0;
            
            
            
            switch(n2) {
                    
                case 3:
                    
                    ptsopt=200; desopt.push_back(n2); ptopt.push_back(ptsopt); optch.push_back("222");
                    
                    break;
                    
                case 4:
                    
                    ptsopt=400; desopt.push_back(n2); ptopt.push_back(ptsopt); optch.push_back("2222");
                    
                    break;
                    
                case 5:
                    
                    ptsopt=800; desopt.push_back(n2); ptopt.push_back(ptsopt); optch.push_back("22222");
                    
                    break;
                    
                case 6:
                    
                    ptsopt=1600; desopt.push_back(n2); ptopt.push_back(ptsopt); optch.push_back("222222");
                    
                    break;
                    
                case 7:
                    
                    ptsopt=3200; desopt.push_back(n2); ptopt.push_back(ptsopt); optch.push_back("2222222");
                    
                    break;
                    
                default:
                    
                    break;
                    
            }
            
            n2 = 0;
            
            
            
            switch(n1) {
                    
                case 1:
                    
                    ptsopt=100; desopt.push_back(n1); ptopt.push_back(ptsopt); optch.push_back("1");
                    
                    break;
                    
                case 2:
                    
                    ptsopt=100; desopt.push_back(1); ptopt.push_back(ptsopt); optch.push_back("1");
                    
                    ptsopt=100; desopt.push_back(1); ptopt.push_back(ptsopt); optch.push_back("1");
                    
                    break;
                    
                case 3:
                    
                    ptsopt=1000; desopt.push_back(n1); ptopt.push_back(ptsopt); optch.push_back("111");
                    
                    break;
                    
                case 4:
                    
                    ptsopt=2000; desopt.push_back(n1); ptopt.push_back(ptsopt); optch.push_back("1111");
                    
                    break;
                    
                case 5:
                    
                    ptsopt=4000; desopt.push_back(n1); ptopt.push_back(ptsopt); optch.push_back("11111");
                    
                    break;
                    
                case 6:
                    
                    ptsopt=8000; desopt.push_back(n1); ptopt.push_back(ptsopt); optch.push_back("111111");
                    
                    break;
                    
                case 7:
                    
                    ptsopt=16000; desopt.push_back(n1); ptopt.push_back(ptsopt); optch.push_back("1111111");
                    
                    break;
                    
                default:
                    
                    break;
                    
            }
            
            n1 = 0;
            
            
            
            for(a=0; a < optch.size(); a++){
                
                for (b=0; b < optch.size(); b++){
                    
                    if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur d'écriture dans le vecteur optch!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                    
                }
                
            }
            
            
            
            if (desopt.size()>5){ cout << "erreur: trop de possibilites" << endl;
                
                desopt.erase(desopt.begin()+5, desopt.end());
                
                ptopt.erase(ptopt.begin()+5, ptopt.end());
                
                optch.erase(optch.begin()+5, optch.end());
                
            }
            
            if (desopt.size() != ptopt.size()) { cout << "erreur! taille vecteur des options pas égal a taille vecteur pts options." << endl;}
            
            if ((desopt.size() == 0) && (ptopt.size() == 0)) { cout << "Bolito a perdu!"<< endl;
                
                p1 = 0;
                
                p2 = 0;
                
                nd=0;
                
                z=1;
                
                perdu=1;
                
            }
            
            
            
            if ((ptopt.size()!=desopt.size())||(desopt.size()!=optch.size())){cout << "erreur options!!" << endl;}
            
            
            
            switch(desopt.size()){
                    
                case 7: cout << "erreur de lancer de dés" << endl;
                    
                    break;
                    
                case 6: cout << "erreur de lancer de dés" << endl;
                    
                    break;
                    
                case 5:
                    
                    for (int l=0; l < desopt.size(); l++){
                        
                        for (int h=0; h < desopt.size(); h++){
                            
                            for (int k=0; k < desopt.size(); k++){
                                
                                for (int j=0; j < desopt.size(); j++){
                                    
                                    for (int i=0; i < desopt.size(); i++){
                                        
                                        if((l<h)&&(h<k)&&(k<j)&&(j<i)){
                                            
                                            w4 = desopt[i]+desopt[j]+desopt[k]+desopt[h]+desopt[l];
                                            
                                            w8 = ptopt[i]+ptopt[j]+ptopt[k]+ptopt[h]+ptopt[l];
                                            
                                            w12 = optch[i]+ " " +optch[j]+ " " +optch[k]+ " " +optch[h]+ " "  +optch[l];
                                            
                                            sdesopt.push_back(w4);
                                            
                                            sptopt.push_back(w8);
                                            
                                            soptch.push_back(w12);
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                case 4:
                    
                    for (int h=0; h < desopt.size(); h++){
                        
                        for (int k=0; k < desopt.size(); k++){
                            
                            for (int j=0; j < desopt.size(); j++){
                                
                                for (int i=0; i < desopt.size(); i++){
                                    
                                    if ((h<k)&&(k<j)&&(j<i)){
                                        
                                        w3 = desopt[i]+desopt[j]+desopt[k]+desopt[h];
                                        
                                        w7 = ptopt[i]+ptopt[j]+ptopt[k]+ptopt[h];
                                        
                                        w11 = optch[i]+ " " +optch[j]+ " " +optch[k]+ " " +optch[h];
                                        
                                        sdesopt.push_back(w3);
                                        
                                        sptopt.push_back(w7);
                                        
                                        soptch.push_back(w11);
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                case 3:
                    
                    for (int k=0; k < desopt.size(); k++){
                        
                        for (int j=0; j < desopt.size(); j++){
                            
                            for (int i=0; i < desopt.size(); i++){
                                
                                if ((k<j)&&(j<i)){
                                    
                                    w2  = desopt[i]+desopt[j]+desopt[k];
                                    
                                    w6 = ptopt[i]+ptopt[j]+ptopt[k];
                                    
                                    w10 = optch[i]+ " " +optch[j]+ " " +optch[k];
                                    
                                    sdesopt.push_back(w2);
                                    
                                    sptopt.push_back(w6);
                                    
                                    soptch.push_back(w10);
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                case 2:
                    
                    for (int j=0; j < desopt.size(); j++){
                        
                        for (int i=0; i < desopt.size(); i++){
                            
                            if (j<i){
                                
                                w1 = desopt[i]+desopt[j];
                                
                                w5 = ptopt[i]+ptopt[j];
                                
                                w9 = optch[i]+ " " +optch[j];
                                
                                sdesopt.push_back(w1);
                                
                                sptopt.push_back(w5);
                                
                                soptch.push_back(w9);
                                
                            }
                            
                        }
                        
                    }
                    
                case 1:
                    
                    for (int i=0; i < desopt.size(); i++){
                        
                        sdesopt.push_back(desopt[i]);
                        
                        sptopt.push_back(ptopt[i]);
                        
                        soptch.push_back(optch[i]);
                        
                    }
                    
                    break;
                    
            }
            
            
            
            if (sdesopt.size()!=sptopt.size()){cout << "erreur taille vecteur options et points pas égaux!" << endl;}
            
            if(perdu!=1){ //Si l'ordi n'a pas perdu à ce tour
                
                p2 = *max_element(sptopt.begin(), sptopt.end()); //p2 = nombre de points de l'option si arrêt
                
                for(g=0;p2!=sptopt[g];g++){}
                
                // nd = nombres de dés du lancer suivant avec l'option choisie
                
                // d = nombres de dés lors de ce lancer
                
                if ((scoreordi<1000)&&(scoreordi>=0)&&(scoremeiljo<=10000)){   //cas au debut de la partie, avant d'avoir 10'000 pts
                    
                    if(p1+p2 < 1000){//p1 = nombre de pts engrangés avant le lancer de dés
                        
                        for (e=0; e < sdesopt.size(); e++){
                            
                            nd = (d-sdesopt[e]);
                            
                            if(nd==0){nd = nd+7;}
                            
                            edg.push_back(ptsmoy[nd]-pperte[nd]*0.55*(p1+sptopt[e])); //Vecteur esperance de gain avec chaque option
                            // sptopt[e] = points de l'option e
                            // ptsmoy[nd]~alpha_nd
                            
                        }
                        
                        for (h=0; h < edg.size() ; h++){
                            
                            ptchem.push_back(edg[h]+sptopt[h]);
                            
                        }
                        
                        maxopt = *max_element(ptchem.begin(), ptchem.end());
                        
                        for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                        
                        nd = (d-sdesopt[i]);
                        
                        if(nd==0){nd = nd+7;}
                        
                        cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                        
                        p1 = p1+sptopt[i];
                        
                        p2 = 0;
                        
                        d = nd;
                        
                    }
                    
                    
                    
                    if (p1+p2 >= 1000){
                        
                        for (e=0; e < sdesopt.size(); e++){
                            
                            nd = (d-sdesopt[e]);
                            
                            if(nd==0){nd = nd+7;}
                            
                            edg.push_back(ptsmoy[nd]-pperte[nd]*3.4*(p1+sptopt[e])); //Vecteur esperance de gain avec chaque option
                            
                        }
                        
                        for (h=0; h < edg.size() ; h++){
                            
                            ptchem.push_back(edg[h]+sptopt[h]);
                            
                        }
                        
                        maxopt = *max_element(ptchem.begin(), ptchem.end());
                        
                        for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                            
                        }
                        
                        nd = (d-sdesopt[i]);
                        
                        if(nd==0){nd = nd+7;}
                        
                        if (maxopt > p2){ cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                            
                            p1 = p1+sptopt[i];
                            
                            p2 = 0;
                            
                            d = nd;
                            
                        }
                        
                        if (maxopt<= p2){ cout << "En tant que joueur professionnel sage, je m'incline devant mon/mes invité(e)s de jeu et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1+p2 << " points. Mon honorable score est alors de: ";
                            
                            scoreordi=scoreordi+p1+p2;
                            
                            cout << scoreordi << " points." << endl;
                            
                            z = 1;
                            
                        }
                    }
                }
                
                else if ((scoremeiljo>10000)||((p1+p2+scoreordi)>10000)){ //cas où un joueur dépasse 10'000 pts (ou ordi!)
                    
                    if (p1+p2+scoreordi<=scoremeiljo){
                        
                        for (e=0; e < sdesopt.size(); e++){
                            
                            nd = (d-sdesopt[e]);
                            
                            if(nd==0){nd = nd+7;}
                            
                            edg.push_back(ptsmoy[nd]-pperte[nd]*1*(p1+sptopt[e]));
                            // Avant facteur 0.25 pour minimiser les risques, éventuellement mettre un facteur dans le même genre
                        }
                        
                        for (h=0; h < edg.size() ; h++){
                            
                            ptchem.push_back(edg[h]+sptopt[h]);
                            
                        }
                        
                        maxopt = *max_element(ptchem.begin(), ptchem.end());
                        
                        for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                            
                        }
                        
                        nd = (d-sdesopt[i]);
                        
                        if(nd==0){nd = nd+7;}
                        
                        cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                        
                        p1 = p1+sptopt[i];
                        
                        p2 = 0;
                        
                        d = nd;
                        
                    }
                    
                    if (p1+p2+scoreordi>scoremeiljo){ //Quand l'ordinateur redépasse le joueur en terme de pts
                        
                        for (e=0; e < sdesopt.size(); e++){
                            
                            nd = (d-sdesopt[e]);
                            
                            if(nd==0){nd = nd+7;}
                            int delta10;
                            delta10 = scoreordi+p1+p2-scoremeiljo; //Différence score entre joueur et ordinateur
                            edg.push_back(ptsmoy[nd]-pperte[nd]*(0.05*delta10+3)*(p1+sptopt[e]));
                            //Avant facteur delta10/3 devant risques=>Permet d'augmenter le facteur risque plus l'ordi s'éloigne du joueur
                        }
                        
                        for (h=0; h < edg.size() ; h++){
                            
                            ptchem.push_back(edg[h]+sptopt[h]);
                            
                        }
                        
                        maxopt = *max_element(ptchem.begin(), ptchem.end());
                        
                        for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                            
                        }
                        
                        nd = (d-sdesopt[i]);
                        
                        if(nd==0){nd = nd+7;}
                        
                        if (maxopt > p2){ cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                            
                            p1 = p1+sptopt[i];
                            
                            p2 = 0;
                            
                            d = nd;
                            
                        }
                        
                        if (maxopt<= p2){ cout << "En tant que joueur professionnel sage, je m'incline devant mon/mes invité(e)s de jeu et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                            
                            scoreordi=scoreordi+p1+p2;
                            
                            cout << scoreordi << " points." << endl;
                            
                            z = 1;
                            
                        }
                        
                    }
                    
                    
                    
                    
                    
                }
                
                
                
                else if ((scoreordi>=1000)&&(scoremeiljo<=10000)&&(scoreordi<=10000)) {//Cas classique
                    
                    
                    
                    if (scoreordi+p1+p2 >= scoremeiljo){//Cas victorieux
                        
                        for (e=0; e < sdesopt.size(); e++){
                            
                            nd = (d-sdesopt[e]);
                            
                            if(nd==0){nd = nd+7;}
                            
                            edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])); //Vecteur esperance de gain avec chaque option
                            
                        }
                        
                        for (h=0; h < edg.size() ; h++){
                            
                            ptchem.push_back(edg[h]+sptopt[h]);
                            
                        }
                        
                        maxopt = *max_element(ptchem.begin(), ptchem.end());
                        
                        for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                            
                        }
                        
                        nd = (d-sdesopt[i]);
                        
                        if(nd==0){nd = nd+7;}
                        
                        //cout << endl << soptch[i] << endl << sdesopt[i] << endl << sptopt[i] << endl << edg[i] << endl << endl; // temp
                        
                        if (maxopt > p2){ cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                            
                            p1 = p1+sptopt[i];
                            
                            p2 = 0;
                            
                            d = nd;
                            
                        }
                        
                        if (maxopt<= p2){ cout << "En tant que joueur professionnel sage, je m'incline devant mon/mes invité(e)s de jeu et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon honorable score est alors de: ";
                            
                            scoreordi=scoreordi+p1+p2;
                            
                            cout << scoreordi << " points." << endl;
                            
                            z = 1;
                            
                        }
                        
                        
                        
                    }
                    
                    
                    
                    else if (scoreordi < scoremeiljo){//Cas où le joueur est en train de gagner
                        
                        deltatj = 1+int((10050-scoremeiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                        
                        deltaptt = (10050-scoreordi)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                        
                        for (e=0; e < sdesopt.size(); e++){
                            
                            nd = (d-sdesopt[e]);
                            
                            if(nd==0){nd = nd+7;}
                            if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);}
                            else if(p1+sptopt[e]<=deltaptt){
                                double beta1;
                                beta1 = 0.00000004;
                                //AVANT:edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(beta1*(p1+sptopt[e]-deltaptt)));
                                //Permet de se fixer un but de points à atteindre, et de prendre un peu plus de risques si on est en-dessous de ce but.
                                edg.push_back(ptsmoy[nd]-pperte[nd]*1*(p1+sptopt[e]));//Changer en fonction linéaire?? En tout cas tester
                            }
                            
                        }
                        for (h=0; h < edg.size() ; h++){
                            
                            ptchem.push_back(edg[h]+sptopt[h]);
                            
                        }
                        
                        maxopt = *max_element(ptchem.begin(), ptchem.end());
                        
                        for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                            
                        }
                        
                        nd = (d-sdesopt[i]);
                        
                        if(nd==0){nd = nd+7;}
                        if (maxopt > p2){ cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                            
                            p1 = p1+sptopt[i];
                            
                            p2 = 0;
                            
                            d = nd;
                            
                        }
                        
                        if (maxopt <= p2){ cout << "En tant que joueur professionnel sage, je m'incline devant mon/mes invité(e)s de jeu et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon honorable score est alors de: ";
                            
                            scoreordi=scoreordi+p1+p2;
                            
                            cout << scoreordi << " points." << endl;
                            
                            z = 1;
                            
                        }
                        
                    }
                    
                }
                
                else {cout << "erreur score ordi!" << endl;}
                
            }
            
            perdu=0;
            
            edg.clear();
            sptopt.clear();
            sdesopt.clear();
            soptch.clear();
            ptchem.clear();
            ptopt.clear();
            desopt.clear();
            optch.clear();
        }
        z=0;
        p1=0;
        p2=0;
        nd=0;
        if (vict==1){ vict=0;}
        if ((scoreordi>10000)&&(scoreordi>scoremeiljo)){
            
            vict = 1;
            
        }
        cout << endl;
        switch(nbrejoueurs){
                
            case 1:
                
                cout << "Le score de " << njo1 << " est de: " << jo1 << " points." << endl;
                
                break;
                
            case 2:
                
                cout << "Le score de " << njo1 << " est de: " << jo1 << " points." << endl;
                
                cout << "Le score de " << njo2 << " est de: " << jo2 << " points." << endl;
                
                break;
                
            case 3:
                
                cout << "Le score de " << njo1 << " est de: " << jo1 << " points." << endl;
                
                cout << "Le score de " << njo2 << " est de: " << jo2 << " points." << endl;
                
                cout << "Le score de " << njo3 << " est de: " << jo3 << " points." << endl;
                
                break;
                
            case 4:
                
                cout << "Le score de " << njo1 << " est de: " << jo1 << " points." << endl;
                
                cout << "Le score de " << njo2 << " est de: " << jo2 << " points." << endl;
                
                cout << "Le score de " << njo3 << " est de: " << jo3 << " points." << endl;
                
                cout << "Le score de " << njo4 << " est de: " << jo4 << " points." << endl;
                
                break;
                
            case 5:
                
                cout << "Le score de " << njo1 << " est de: " << jo1 << " points." << endl;
                
                cout << "Le score de " << njo2 << " est de: " << jo2 << " points." << endl;
                
                cout << "Le score de " << njo3 << " est de: " << jo3 << " points." << endl;
                
                cout << "Le score de " << njo4 << " est de: " << jo4 << " points." << endl;
                
                cout << "Le score de " << njo5 << " est de: " << jo5 << " points." << endl;
                
                break;
                
            case 6:
                
                cout << "Le score de " << njo1 << " est de: " << jo1 << " points." << endl;
                
                cout << "Le score de " << njo2 << " est de: " << jo2 << " points." << endl;
                
                cout << "Le score de " << njo3 << " est de: " << jo3 << " points." << endl;
                
                cout << "Le score de " << njo4 << " est de: " << jo4 << " points." << endl;
                
                cout << "Le score de " << njo5 << " est de: " << jo5 << " points." << endl;
                
                cout << "Le score de " << njo6 << " est de: " << jo6 << " points." << endl;
                
                break;
                
            case 7:
                
                cout << "Le score de " << njo1 << " est de: " << jo1 << " points." << endl;
                
                cout << "Le score de " << njo2 << " est de: " << jo2 << " points." << endl;
                
                cout << "Le score de " << njo3 << " est de: " << jo3 << " points." << endl;
                
                cout << "Le score de " << njo4 << " est de: " << jo4 << " points." << endl;
                
                cout << "Le score de " << njo5 << " est de: " << jo5 << " points." << endl;
                
                cout << "Le score de " << njo6 << " est de: " << jo6 << " points." << endl;
                
                cout << "Le score de " << njo7 << " est de: " << jo7 << " points." << endl;
                
                break;
                
            case 8:
                
                cout << "Le score de " << njo1 << " est de: " << jo1 << " points." << endl;
                
                cout << "Le score de " << njo2 << " est de: " << jo2 << " points." << endl;
                
                cout << "Le score de " << njo3 << " est de: " << jo3 << " points." << endl;
                
                cout << "Le score de " << njo4 << " est de: " << jo4 << " points." << endl;
                
                cout << "Le score de " << njo5 << " est de: " << jo5 << " points." << endl;
                
                cout << "Le score de " << njo6 << " est de: " << jo6 << " points." << endl;
                
                cout << "Le score de " << njo7 << " est de: " << jo7 << " points." << endl;
                
                cout << "Le score de " << njo8 << " est de: " << jo8 << " points." << endl;
                
        }
        
        cout << "Le score de Bolito est de " << scoreordi << " points." << endl << endl;
        
        cout << endl << "*****************************************************************************"<< " Nouveau tour! " << "*****************************************************************************" << endl << endl << endl;
        
        p1=0;
        if((scoremeiljo<=10000)||(scoreordi>scoremeiljo)){
            switch(nbrejoueurs){
                case 1:
                    cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct1;
                    while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    if(sct1==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct1<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct1>2000)&&(sct1<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct1>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct1;
                        if(sct1>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct1;
                            if(sct1>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    break;
                    
                case 2:
                    
                    cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct1;
                    while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    if(sct1==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct1<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct1>2000)&&(sct1<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct1>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct1;
                        if(sct1>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct1;
                            if(sct1>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct2;
                    while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    if(sct2==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct2<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct2>2000)&&(sct2<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct2>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct2;
                        if(sct2>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct2;
                            if(sct2>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    break;
                    
                case 3:
                    
                    cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct1;
                    while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    if(sct1==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct1<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct1>2000)&&(sct1<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct1>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct1;
                        if(sct1>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct1;
                            if(sct1>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct2;
                    while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    if(sct2==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct2<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct2>2000)&&(sct2<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct2>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct2;
                        if(sct2>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct2;
                            if(sct2>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    cout << "Quel est le nombre de points que " << njo3 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct3;
                    while((sct3%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                    if(sct3==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct3<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct3>2000)&&(sct3<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct3>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct3;
                        if(sct3>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct3;
                            if(sct3>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct3%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                    break;
                    
                case 4:
                    
                    cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct1;
                    while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    if(sct1==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct1<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct1>2000)&&(sct1<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct1>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct1;
                        if(sct1>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct1;
                            if(sct1>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct2;
                    while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    if(sct2==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct2<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct2>2000)&&(sct2<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct2>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct2;
                        if(sct2>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct2;
                            if(sct2>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    cout << "Quel est le nombre de points que " << njo3 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct3;
                    while((sct3%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                    if(sct3==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct3<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct3>2000)&&(sct3<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct3>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct3;
                        if(sct3>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct3;
                            if(sct3>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct3%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                    cout << "Quel est le nombre de points que " << njo4 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct4;
                    while((sct4%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                    if(sct4==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct4<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct4>2000)&&(sct4<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct4>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct4;
                        if(sct4>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct4;
                            if(sct4>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct4%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                    break;
                    
                case 5:
                    
                    cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct1;
                    while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    if(sct1==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct1<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct1>2000)&&(sct1<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct1>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct1;
                        if(sct1>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct1;
                            if(sct1>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct2;
                    while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    if(sct2==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct2<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct2>2000)&&(sct2<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct2>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct2;
                        if(sct2>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct2;
                            if(sct2>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    cout << "Quel est le nombre de points que " << njo3 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct3;
                    while((sct3%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                    if(sct3==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct3<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct3>2000)&&(sct3<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct3>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct3;
                        if(sct3>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct3;
                            if(sct3>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct3%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                    cout << "Quel est le nombre de points que " << njo4 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct4;
                    while((sct4%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                    if(sct4==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct4<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct4>2000)&&(sct4<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct4>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct4;
                        if(sct4>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct4;
                            if(sct4>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct4%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                    cout << "Quel est le nombre de points que " << njo5 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct5;
                    while((sct5%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct5;}
                    if(sct5==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct5<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct5>2000)&&(sct5<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct5>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct5;
                        if(sct5>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct5;
                            if(sct5>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct5%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct5;}
                    break;
                    
                case 6:
                    
                    cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct1;
                    while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    if(sct1==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct1<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct1>2000)&&(sct1<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct1>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct1;
                        if(sct1>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct1;
                            if(sct1>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct2;
                    while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    if(sct2==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct2<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct2>2000)&&(sct2<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct2>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct2;
                        if(sct2>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct2;
                            if(sct2>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    cout << "Quel est le nombre de points que " << njo3 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct3;
                    while((sct3%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                    if(sct3==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct3<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct3>2000)&&(sct3<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct3>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct3;
                        if(sct3>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct3;
                            if(sct3>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct3%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                    cout << "Quel est le nombre de points que " << njo4 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct4;
                    while((sct4%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                    if(sct4==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct4<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct4>2000)&&(sct4<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct4>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct4;
                        if(sct4>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct4;
                            if(sct4>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct4%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                    cout << "Quel est le nombre de points que " << njo5 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct5;
                    while((sct5%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct5;}
                    if(sct5==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct5<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct5>2000)&&(sct5<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct5>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct5;
                        if(sct5>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct5;
                            if(sct5>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct5%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct5;}
                    cout << "Quel est le nombre de points que " << njo6 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct6;
                    while((sct6%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct6;}
                    if(sct6==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct6<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct6>2000)&&(sct6<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct6>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct6;
                        if(sct6>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct6;
                            if(sct6>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct6%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct6;}
                    break;
                    
                case 7:
                    
                    cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct1;
                    while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    if(sct1==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct1<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct1>2000)&&(sct1<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct1>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct1;
                        if(sct1>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct1;
                            if(sct1>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct2;
                    while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    if(sct2==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct2<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct2>2000)&&(sct2<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct2>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct2;
                        if(sct2>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct2;
                            if(sct2>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    cout << "Quel est le nombre de points que " << njo3 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct3;
                    while((sct3%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                    if(sct3==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct3<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct3>2000)&&(sct3<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct3>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct3;
                        if(sct3>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct3;
                            if(sct3>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct3%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                    cout << "Quel est le nombre de points que " << njo4 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct4;
                    while((sct4%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                    if(sct4==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct4<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct4>2000)&&(sct4<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct4>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct4;
                        if(sct4>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct4;
                            if(sct4>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct4%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                    cout << "Quel est le nombre de points que " << njo5 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct5;
                    while((sct5%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct5;}
                    if(sct5==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct5<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct5>2000)&&(sct5<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct5>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct5;
                        if(sct5>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct5;
                            if(sct5>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct5%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct5;}
                    cout << "Quel est le nombre de points que " << njo6 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct6;
                    while((sct6%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct6;}
                    if(sct6==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct6<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct6>2000)&&(sct6<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct6>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct6;
                        if(sct6>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct6;
                            if(sct6>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct6%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct6;}
                    cout << "Quel est le nombre de points que " << njo7 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct7;
                    while((sct7%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct7;}
                    if(sct7==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct7<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct7>2000)&&(sct7<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct7>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct7;
                        if(sct7>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct7;
                            if(sct7>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct7%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct7;}
                    break;
                    
                case 8:
                    
                    cout << "Quel est le nombre de points que " << njo1 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct1;
                    while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    if(sct1==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct1<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct1>2000)&&(sct1<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct1>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct1;
                        if(sct1>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct1;
                            if(sct1>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct1%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct1;}
                    cout << "Quel est le nombre de points que " << njo2 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct2;
                    while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    if(sct2==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct2<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct2>2000)&&(sct2<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct2>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct2;
                        if(sct2>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct2;
                            if(sct2>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct2%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct2;}
                    cout << "Quel est le nombre de points que " << njo3 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct3;
                    while((sct3%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                    if(sct3==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct3<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct3>2000)&&(sct3<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct3>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct3;
                        if(sct3>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct3;
                            if(sct3>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct3%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct3;}
                    cout << "Quel est le nombre de points que " << njo4 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct4;
                    while((sct4%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                    if(sct4==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct4<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct4>2000)&&(sct4<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct4>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct4;
                        if(sct4>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct4;
                            if(sct4>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct4%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct4;}
                    cout << "Quel est le nombre de points que " << njo5 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct5;
                    while((sct5%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct5;}
                    if(sct5==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct5<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct5>2000)&&(sct5<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct5>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct5;
                        if(sct5>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct5;
                            if(sct5>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct5%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct5;}
                    cout << "Quel est le nombre de points que " << njo6 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct6;
                    while((sct6%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct6;}
                    if(sct6==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct6<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct6>2000)&&(sct6<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct6>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct6;
                        if(sct6>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct6;
                            if(sct6>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct6%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct6;}
                    cout << "Quel est le nombre de points que " << njo7 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct7;
                    while((sct7%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct7;}
                    if(sct7==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct7<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct7>2000)&&(sct7<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct7>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct7;
                        if(sct7>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct7;
                            if(sct7>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}} while((sct7%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct7;}
                    cout << "Quel est le nombre de points que " << njo8 << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> sct8;
                    while((sct8%50)!=0){cout << endl << "Le chiffre entré n'est pas possible." << endl  << "Veuillez réinsérer un chiffre plausible: "; cin >> sct8;}
                    if(sct8==0){cout << endl << "Désolé, vous ferez mieux la prochaine fois!" << endl;}
                    else if(sct8<=200){cout << endl << "Bon début, mais ça suffit pas pour me battre!" << endl ;}
                    if((sct8>2000)&&(sct8<=4000)){cout << "Bien joué, mais laissez-moi quand même gagner!" << endl;}
                    if(sct8>=4000){cout << "Autant que ça?! N'essayez pas de tricher, mettez-moi votre vrai score!" << endl << "Nombre de points: "; cin >> sct8;
                        if(sct8>=4000){cout << "Allez, je vous laisse une dernière chance pour me dire la vérité, mettez-moi le score que vous avez vraiment fait..." << endl << "Nombre de points: "; cin >> sct8;
                            if(sct8>=4000){cout << "Bon, si vous me dites que vous ne trichez pas, je suis obligé de vous croire..." << endl;}
                            else{cout << "Voilà, j'aime  mieux ça!" << endl;}}else{cout << "Vous voyez? Je savais que vous étiez honnête au fond de vous-même!" << endl;}}
                    break;
            }
            if(aff==3){
                cin.ignore();
            }
        }
            if((scoremeiljo > 10000)&&(scoreordi<scoremeiljo)){
                sct.clear();
                int beta;
                int ptmeiljo;
                for(i=0; scoremeiljo != joueurs[i]; i++){
                }
                for(j=0; j<nbrejoueurs; j++){
                    if ((joueurs[j]!=scoremeiljo)&&(j<i)){
                    cout << "Quel est le nombre de points que " << nj[j] << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                    cin >> beta;
                    sct.push_back(beta);
                    }
                }
                sct1=sct[0]; sct2=sct[1]; sct3=sct[2]; sct4=sct[3]; sct5=sct[4]; sct6=sct[5]; sct7=sct[6]; sct8=sct[7];
                ptmeiljo = max(max(max(jo1+sct1,jo2+sct2), max (jo3+sct3, jo4+sct4)), max(max(jo5+sct5,jo6+sct6), max(jo7+sct7,jo8+sct8)));
                if(ptmeiljo>scoreordi){stop10k++;}
                else if(scoreordi>ptmeiljo){stop10k=0;}
                if (ptmeiljo>scoremeiljo){
                    while(j<=nbrejoueurs){
                            cout << "Quel est le nombre de points que " << nj[j-1] << " a obtenu durant ce tour?" << endl << "Nombre de points: ";
                            cin >> beta;
                            sct.push_back(beta);
                        j++;
                    }
                }
            sct1=sct[0]; sct2=sct[1]; sct3=sct[2]; sct4=sct[3]; sct5=sct[4]; sct6=sct[5]; sct7=sct[6]; sct8=sct[7];
            if(aff==3){
                cin.ignore();
            }
            }
            jo1 = jo1+sct1;
            
            jo2 = jo2+sct2;
            
            jo3 = jo3+sct3;
            
            jo4 = jo4+sct4;
            
            jo5 = jo5+sct5;
            
            jo6 = jo6+sct6;
            
            jo7 = jo7+sct7;
            
            jo8 = jo8+sct8;
            
            joueurs.clear();
            joueurs.push_back(jo1);
            
            joueurs.push_back(jo2);
            
            joueurs.push_back(jo3);
            
            joueurs.push_back(jo4);
            
            joueurs.push_back(jo5);
            
            joueurs.push_back(jo6);
            
            joueurs.push_back(jo7);
            
            joueurs.push_back(jo8);
            
        scoremeiljo = max(max(max(jo1,jo2), max (jo3, jo4)), max(max(jo5,jo6), max(jo7,jo8)));
            
        for(m=0; scoremeiljo != joueurs[m]; m++){
            }
        meiljo = nj[m];
        
        if (scoremeiljo != numj){vict=0;
        }
        
        if(vict==2){cout << endl << meiljo << " a gagné la partie avec " << scoremeiljo << " points. Félicitations! ";
            
            fin=2;
            
        }
        }
    }
    
    cout << "Le score final du/des participant(s) est de ";
    
    switch(nbrejoueurs){
            
        case 1:
            
            cout << jo1 << " points pour " << njo1 << ". " << endl;
            
            break;
            
        case 2:
            
            cout << jo1 << " points pour " << njo1 << " et de ";
            
            cout << jo2 << " points pour " << njo2 << ". " << endl;
            
            break;
            
        case 3:
            
            cout << jo1 << " points pour " << njo1 << ", " << endl;
            
            cout << jo2 << " points pour " << njo2 << " et de ";
            
            cout << jo3 << " points pour " << njo3 << ". " << endl;
            
            break;
            
        case 4:
            
            cout << jo1 << " points pour " << njo1 << ", " << endl;
            
            cout << jo2 << " points pour " << njo2 << ", " <<  endl;
            
            cout << jo3 << " points pour " << njo3 << " et de ";
            
            cout << jo4 << " points pour " << njo4 << ". " <<  endl;
            
            break;
            
        case 5:
            
            cout << jo1 << " points pour " << njo1 << ", " <<  endl;
            
            cout << jo2 << " points pour " << njo2 << ", " <<  endl;
            
            cout << jo3 << " points pour " << njo3 << ", " <<  endl;
            
            cout << jo4 << " points pour " << njo4 << " et de";
            
            cout << jo5 << " points pour " << njo5 << ". " <<  endl;
            
            break;
            
        case 6:
            
            cout << jo1 << " points pour " << njo1 << ", " <<  endl;
            
            cout << jo2 << " points pour " << njo2 << ", " <<  endl;
            
            cout << jo3 << " points pour " << njo3 << ", " <<  endl;
            
            cout << jo4 << " points pour " << njo4 << ", " <<  endl;
            
            cout << jo5 << " points pour " << njo5 << " et de ";
            
            cout << jo6 << " points pour " << njo6 << ". " <<  endl;
            
            break;
            
        case 7:
            
            cout << jo1 << " points pour " << njo1 << ", " <<  endl;
            
            cout << jo2 << " points pour " << njo2 << ", " <<  endl;
            
            cout << jo3 << " points pour " << njo3 << ", " <<  endl;
            
            cout << jo4 << " points pour " << njo4 << ", " <<  endl;
            
            cout << jo5 << " points pour " << njo5 << ", " <<  endl;
            
            cout << jo6 << " points pour " << njo6 << " et de ";
            
            cout << jo7 << " points pour " << njo7 << ". " <<  endl;
            
            break;
            
        case 8:
            
            cout << jo1 << " points pour " << njo1 << ", " <<  endl;
            
            cout << jo2 << " points pour " << njo2 << ", " <<  endl;
            
            cout << jo3 << " points pour " << njo3 << ", " <<  endl;
            
            cout << jo4 << " points pour " << njo4 << ", " <<  endl;
            
            cout << jo5 << " points pour " << njo5 << ", " <<  endl;
            
            cout << jo6 << " points pour " << njo6 << ", " <<  endl;
            
            cout << jo7 << " points pour " << njo7 << " et de ";
            
            cout << jo8 << " points pour " << njo8 << ". " <<  endl;
            
    }
    string ad1, ad2, ad3, ad4;
    int ptp1(0), ptn1(0);
    cout << "Le score final de Bolito est de " << scoreordi << " points." << endl << endl;
    ifstream score ("/Users/dany/Desktop/EPFL&Work/Semestre 2 1ère année/Prog/Prog projets perso/Bolo/Bolo victoires.txt", ios::in);
    if ((int)score.tellg() != 0){cerr << "erreur de fichier, ne pas inscrire le résultat dans le fichier. Corriger l'erreur et rentrer le résultat manuellement dans le fichier.";}
    getline(score, ad1);
    getline(score, ad2);
    getline(score, ad3);
    getline(score, ad4);
    ptp = stoi(ad2);
    ptn = stoi(ad4);
    if (vict==1){ptp1 = ptp + nbrejoueurs; ptn1 = ptn;}
    if (vict==2){ptn1 = ptn + 1; ptp1 = ptp;}
    score.close();
    ofstream scores("/Users/dany/Desktop/EPFL&Work/Semestre 2 1ère année/Prog/Prog projets perso/Bolo/Bolo victoires.txt", ios::trunc);
    scores << "Points des parties gagnées: " << endl;
    scores << ptp1 << endl;
    scores << "Points des parties perdues: " << endl;
    scores << ptn1 << endl;
    scores << "Pourcentage (pondéré) de victoires de Bolito: " << ((100*ptp1)/(ptn1+ptp1)) << "%" << endl;
    scores.seekp(0, ios::beg);
    if ((int)scores.tellp() != 0){cerr << "erreur de fichier, Le curseur ne peut pas remonter à la position initiale.";}
    scores.close();
    cout << "Merci d'avoir joué, vous avez égayé ma journée!" << endl << endl << "Au revoir!" << endl << endl;
}
