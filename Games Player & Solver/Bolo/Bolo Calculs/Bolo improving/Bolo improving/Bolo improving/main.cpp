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

string w9, w10, w11, w12, stats;

int nbrejoueurs, cou1, cou2, cou3, cou4;

string njo1, njo2, njo3, njo4, njo5, njo6, njo7, njo8;

int ord1, ord2, ord3, ord4, e, g, h, i, nd, d, maxopt, z, q, xxx, ok, perdu, has, vict ,fin;

int p1, p2, scoremeiljo, p1000, numj, score2meiljo;

int a2, a3, a5, a6, a8, a9, b2, b3, b5, b6, count1, count2, count3, count4, f, fp;

string premier, a1, a4, a7, b1, b4, okk, hasard, meiljo;

long double deltatj, deltaptt, pttot1, pttot2, pttot3, pttot4, countturn;

// Ponderation:
//score plus petit que 1000: ligne 1520;
//score juste apres 1000: ligne 1560;
//score meileur joueur en dessus de 10'000, ordi en dessous meilleur joueur: ligne 1630;
//score en dessus de 10'000 et depassement autre joueur: ligne 1670;
//score moins bon que meilleur joueur: ligne 1800;

int main() {
    
    srand( static_cast<unsigned int>(time(NULL))); // for random function
    njo1 = "ordi1";
    njo2 = "ordi2";
    njo3 = "ordi3";
    njo4 = "ordi4";
    for (f=0; f<800000; f++){
        vict=0;
        fin=0;
        fp = f % 4 + 1;
        
        while(fin==0){          //debut du tour(de la boucle qui fait le tour) (debut de la partie)
            d=7;
            vector<int> joueurs;
            joueurs.clear();
            joueurs.push_back(ord1);
            joueurs.push_back(ord2);
            joueurs.push_back(ord3);
            joueurs.push_back(ord4);
            
            vector<string> nj;
            nj.push_back(njo1);
            nj.push_back(njo2);
            nj.push_back(njo3);
            nj.push_back(njo4);
            
            scoremeiljo = max(max(ord1,ord2), max(ord3, ord4));
            for(m=0; scoremeiljo != joueurs[m]; m++){
            }
            meiljo = nj[m];
            numj = joueurs[m];
            
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
            
            pperte.push_back(0.009); // Attention au 0 qui est la premiere option(pour 0 dés théoriquement)!!
            pperte.push_back(0.66667);
            pperte.push_back(0.44444);
            pperte.push_back(0.27778);
            pperte.push_back(0.15741);
            pperte.push_back(0.07716);
            pperte.push_back(0.03086);
            pperte.push_back(0.009);
            
            ptsmoy.push_back(915.2207);
            ptsmoy.push_back(329.9997);
            ptsmoy.push_back(298.3329);
            ptsmoy.push_back(337.6376);
            ptsmoy.push_back(426.9322);
            ptsmoy.push_back(544.5257);
            ptsmoy.push_back(712.0227);
            ptsmoy.push_back(915.2207);
            if (vict!=0){cout << "erreur vict";}
            
            switch(fp){
                case 1:
                    
                    
                    score2meiljo = max(ord2, max(ord3, ord4));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord1<1000)&&(ord1>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e <sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.3);//1 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//1 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord1<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.25);//1
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord1>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord1+p1+p2-score2meiljo;
                                          edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*delta10/3);//1
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord1>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord1+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord1 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord1)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);}//1
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha1;
                                        alpha1 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(alpha1*(p1+sptopt[e]-deltaptt)));//1
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord1>10000)&&(ord1>score2meiljo)){
                        vict=1;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    score2meiljo = max(ord1, max(ord3, ord4));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord2<1000)&&(ord2>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord2<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord2>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord2+p1+p2-score2meiljo;
                                          edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord2>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord2+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord2 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord2)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);}//2
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha2;
                                        alpha2 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e]));//2
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord2>10000)&&(ord2>score2meiljo)){
                        vict=2;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    score2meiljo = max(ord1, max(ord2, ord4));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord3<1000)&&(ord3>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.35);//3 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1.05);//3 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord3<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.3);//3
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord3>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord3+p1+p2-score2meiljo;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*delta10/3.5);//3
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord3>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord3+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord3 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord3)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1.05);}//3
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha3;
                                        alpha3 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(0.000000045*(p1+sptopt[e]-deltaptt)));//3
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord3>10000)&&(ord3>score2meiljo)){
                        vict=3;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    score2meiljo = max(ord1, max(ord2, ord3));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord4<1000)&&(ord4>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.25);//4 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.95);//4 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord4<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.2);//4
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord4>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord4+p1+p2-score2meiljo;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*delta10/2.5);//4
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord4>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord4+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord4 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord4)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.95);}//4
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha4;
                                        alpha4 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(0.000000035*(p1+sptopt[e]-deltaptt)));//4
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord4>10000)&&(ord4>score2meiljo)){
                        vict=4;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    //cout << ord1 << " " << ord2 << " " << ord3 << " " << ord4 << endl << endl;
                    joueurs.clear();
                    joueurs.push_back(ord1);
                    joueurs.push_back(ord2);
                    joueurs.push_back(ord3);
                    joueurs.push_back(ord4);
                    if(vict==1){fin=1;}
                    if(vict==2){fin=2;}
                    if(vict==3){fin=3;}
                    if(vict==4){fin=4;}
                    scoremeiljo = max(max(ord1,ord2), max(ord3,ord4));
                    
                    for(m=0; scoremeiljo != joueurs[m]; m++){
                    }
                    meiljo = nj[m];
                    countturn++;
                    
                    
                    break;
                case 2:
                    
                    
                    
                    score2meiljo = max(ord1, max(ord3, ord4));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord2<1000)&&(ord2>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord2<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord2>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord2+p1+p2-score2meiljo;
                                          edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord2>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord2+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord2 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord2)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);}//2
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha2;
                                        alpha2 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e]));//2
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord2>10000)&&(ord2>score2meiljo)){
                        vict=2;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    score2meiljo = max(ord1, max(ord2, ord4));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord3<1000)&&(ord3>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.35);//3 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1.05);//3 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord3<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.3);//3
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord3>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord3+p1+p2-score2meiljo;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*delta10/3.5);//3
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord3>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord3+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord3 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord3)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1.05);}//3
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha3;
                                        alpha3 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(0.000000045*(p1+sptopt[e]-deltaptt)));//3
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord3>10000)&&(ord3>score2meiljo)){
                        vict=3;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    score2meiljo = max(ord1, max(ord2, ord3));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord4<1000)&&(ord4>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.25);//4 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.95);//4 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord4<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.2);//4
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord4>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord4+p1+p2-score2meiljo;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*delta10/2.5);//4
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord4>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord4+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord4 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord4)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.95);}//4
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha4;
                                        alpha4 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(0.000000035*(p1+sptopt[e]-deltaptt)));//4
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord4>10000)&&(ord4>score2meiljo)){
                        vict=4;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    
                    score2meiljo = max(ord2, max(ord3, ord4));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord1<1000)&&(ord1>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e <sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.3);//1 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//1 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord1<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.25);//1
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord1>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord1+p1+p2-score2meiljo;
                                          edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*delta10/3);//1
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord1>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord1+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord1 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord1)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);}//1
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha1;
                                        alpha1 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(alpha1*(p1+sptopt[e]-deltaptt)));//1
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord1>10000)&&(ord1>score2meiljo)){
                        vict=1;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    joueurs.clear();
                    joueurs.push_back(ord1);
                    joueurs.push_back(ord2);
                    joueurs.push_back(ord3);
                    joueurs.push_back(ord4);
                    if(vict==1){fin=1;}
                    if(vict==2){fin=2;}
                    if(vict==3){fin=3;}
                    if(vict==4){fin=4;}
                    scoremeiljo = max(max(ord1,ord2), max(ord3,ord4));
                    
                    for(m=0; scoremeiljo != joueurs[m]; m++){
                    }
                    meiljo = nj[m];
                    countturn++;
                    
                    
                    
                    break;
                case 3:
                    
                    
                    score2meiljo = max(ord1, max(ord2, ord4));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord3<1000)&&(ord3>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.35);//3 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1.05);//3 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord3<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.3);//3
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord3>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord3+p1+p2-score2meiljo;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*delta10/3.5);//3
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord3>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord3+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord3 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord3)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1.05);}//3
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha3;
                                        alpha3 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(0.000000045*(p1+sptopt[e]-deltaptt)));//3
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord3>10000)&&(ord3>score2meiljo)){
                        vict=3;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    score2meiljo = max(ord1, max(ord2, ord3));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord4<1000)&&(ord4>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.25);//4 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.95);//4 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord4<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.2);//4
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord4>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord4+p1+p2-score2meiljo;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*delta10/2.5);//4
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord4>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord4+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord4 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord4)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.95);}//4
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha4;
                                        alpha4 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(0.000000035*(p1+sptopt[e]-deltaptt)));//4
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord4>10000)&&(ord4>score2meiljo)){
                        vict=4;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    score2meiljo = max(ord2, max(ord3, ord4));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord1<1000)&&(ord1>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e <sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.3);//1 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//1 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord1<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.25);//1
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord1>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord1+p1+p2-score2meiljo;
                                          edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*delta10/3);//1
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord1>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord1+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord1 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord1)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);}//1
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha1;
                                        alpha1 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(alpha1*(p1+sptopt[e]-deltaptt)));//1
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord1>10000)&&(ord1>score2meiljo)){
                        vict=1;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    score2meiljo = max(ord1, max(ord3, ord4));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord2<1000)&&(ord2>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord2<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord2>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord2+p1+p2-score2meiljo;
                                          edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord2>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord2+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord2 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord2)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);}//2
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha2;
                                        alpha2 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e]));//2
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord2>10000)&&(ord2>score2meiljo)){
                        vict=2;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    //cout << ord1 << " " << ord2 << " " << ord3 << " " << ord4 << endl << endl;
                    joueurs.clear();
                    joueurs.push_back(ord1);
                    joueurs.push_back(ord2);
                    joueurs.push_back(ord3);
                    joueurs.push_back(ord4);
                    if(vict==1){fin=1;}
                    if(vict==2){fin=2;}
                    if(vict==3){fin=3;}
                    if(vict==4){fin=4;}
                    scoremeiljo = max(max(ord1,ord2), max(ord3,ord4));
                    
                    for(m=0; scoremeiljo != joueurs[m]; m++){
                    }
                    meiljo = nj[m];
                    countturn++;
                    
                    
                    break;
                case 4:
                    
                    
                    
                    score2meiljo = max(ord1, max(ord2, ord3));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord4<1000)&&(ord4>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.25);//4 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.95);//4 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord4<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.2);//4
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord4>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord4+p1+p2-score2meiljo;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*delta10/2.5);//4
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord4>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord4+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord4 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord4)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.95);}//4
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha4;
                                        alpha4 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(0.000000035*(p1+sptopt[e]-deltaptt)));//4
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord4=ord4+p1+p2;
                                        
                                        //cout << ord4 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord4>10000)&&(ord4>score2meiljo)){
                        vict=4;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    score2meiljo = max(ord2, max(ord3, ord4));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord1<1000)&&(ord1>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e <sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.3);//1 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//1 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord1<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.25);//1
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord1>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord1+p1+p2-score2meiljo;
                                          edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*delta10/3);//1
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord1>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord1+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord1 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord1)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);}//1
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha1;
                                        alpha1 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(alpha1*(p1+sptopt[e]-deltaptt)));//1
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord1=ord1+p1+p2;
                                        
                                        //cout << ord1 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord1>10000)&&(ord1>score2meiljo)){
                        vict=1;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    score2meiljo = max(ord1, max(ord3, ord4));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord2<1000)&&(ord2>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord2<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord2>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord2+p1+p2-score2meiljo;
                                          edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);//2
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord2>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord2+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord2 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord2)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1);}//2
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha2;
                                        alpha2 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e]));//2
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord2=ord2+p1+p2;
                                        
                                        //cout << ord2 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord2>10000)&&(ord2>score2meiljo)){
                        vict=2;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    score2meiljo = max(ord1, max(ord2, ord4));
                    while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
                        random_device rd;
                        mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                        
                        uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                        
                        vector<int> des;
                        de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                        
                        
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
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                                
                                break;
                                
                            case 6:
                                
                                des.push_back (de6);
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                                
                                break;
                                
                            case 5:
                                
                                des.push_back (de5);
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                                
                                break;
                                
                            case 4:
                                
                                des.push_back (de4);
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                                
                                break;
                                
                            case 3:
                                
                                des.push_back (de3);
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                                
                                break;
                                
                            case 2:
                                
                                des.push_back (de2);
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                                
                                break;
                                
                            case 1:
                                
                                des.push_back (de1);
                                
                                //cout << "J'ai tiré la séquence suivante: " << de1;
                                
                                break;
                                
                        }
                        
                        for(m=0; m<des.size(); m++){
                            
                            while((des[m]<=0)||(des[m]>6)){
                                
                                cout << "Il y a une erreur dans l'entrée des dés, veuillez réecrire le/les dé(s) erroné" << endl;
                                
                                cin >> des[m];
                                
                            }
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
                        
                        if ((n1+n2+n3+n4+n5+n6)!=d){ cout << "erreur dés, recommencer programme" << endl;
                            
                            fin = 5;
                            
                            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                        
                        
                        
                        if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--; ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                        
                        //cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl; //temp
                        
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
                                
                                if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                                
                            }
                            
                        }
                        
                        
                        
                        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
                            
                            desopt.erase(desopt.begin()+5, desopt.end());
                            
                            ptopt.erase(ptopt.begin()+5, ptopt.end());
                            
                            optch.erase(optch.begin()+5, optch.end());
                            
                        }
                        
                        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                        
                        if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Bolito a perdu!"<< endl << endl;
                            
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
                                                        
                                                        w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];
                                                        
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
                                                    
                                                    w11 = optch[i]+optch[j]+optch[k]+optch[h];
                                                    
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
                                                
                                                w10 = optch[i]+optch[j]+optch[k];
                                                
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
                                            
                                            w9 = optch[i]+optch[j];
                                            
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
                        
                        if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                        
                        if(perdu!=1){
                            
                            p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                            
                            for(g=0;p2!=sptopt[g];g++){
                                
                            }
                            
                            // nd = nombres de dés du lancer suivant
                            
                            // d = nombres de dés lors de ce lancer
                            
                            
                            
                            if ((ord3<1000)&&(ord3>=0)&&(score2meiljo<=10000)){   //cas au debut du tour
                                
                                if(p1+p2<= 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.35);//3 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                    
                                    p1 = p1+sptopt[i];
                                    p2 = 0;
                                    d = nd;
                                }
                                
                                
                                
                                if (p1+p2> 1000){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1.05);//3 //Vecteur esperance de gain avec chaque option
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+p2 << " points et " << nd << " dés."<< endl;
                                        
                                        p1 = p1+p2;
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        
                                        z = 1;
                                    }
                                }
                            }
                            else if (score2meiljo>10000){
                                
                                if (p1+p2+ord3<=score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*0.3);//3
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                        
                                    }
                                    
                                    nd = (d-sdesopt[i]);
                                    
                                    if(nd==0){nd = nd+7;}
                                    
                                    //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés."<< endl;
                                    
                                    p1 = p1+sptopt[i];
                                    
                                    p2 = 0;
                                    
                                    d = nd;
                                    
                                }
                                
                                if (p1+p2+ord3>score2meiljo){
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        int delta10;
                                        delta10 = ord3+p1+p2-score2meiljo;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*delta10/3.5);//3
                                    }
                                    
                                    for (h=0; h < edg.size() ; h++){
                                        
                                        ptchem.push_back(edg[h]+sptopt[h]);
                                        
                                    }
                                    
                                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                                    
                                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){
                                    }
                                    nd = (d-sdesopt[i]);
                                    if(nd==0){nd = nd+7;}
                                    if (maxopt > p2){
                                        //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        p1 = p1+sptopt[i];
                                        p2 = 0;
                                        d = nd;
                                    }
                                    
                                    if (maxopt <= p2){
                                        //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " <<           soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        z = 1;
                                    }
                                }
                            }
                            
                            else if ((ord3>=1000)&&(score2meiljo<=10000)) {
                                
                                if (ord3+p1+p2 >= score2meiljo){
                                    
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt<= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        
                                        z = 1;
                                        
                                    }
                                    
                                    
                                    
                                }
                                
                                
                                
                                else if (ord3 < score2meiljo){
                                
                                    deltatj = 1+int((10050-score2meiljo)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
                                    
                                    deltaptt = (10050-ord3)/(deltatj);//nombre de points par tour que l'ordi doit accomplir (en moyenne)
                                    
                                    for (e=0; e < sdesopt.size(); e++){
                                        
                                        nd = (d-sdesopt[e]);
                                        
                                        if(nd==0){nd = nd+7;}
                                        if(p1+sptopt[e]>=deltaptt){edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*1.05);}//3
                                        else if(p1+sptopt[e]<=deltaptt){
                                        double alpha3;
                                        alpha3 = 0.00000004;
                                        edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e])*exp(0.000000045*(p1+sptopt[e]-deltaptt)));//3
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
                                    if (maxopt > p2){ //cout << "Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1+sptopt[i] << " points et " << nd << " dés." << endl;
                                        
                                        p1 = p1+sptopt[i];
                                        
                                        p2 = 0;
                                        
                                        d = nd;
                                        
                                    }
                                    
                                    if (maxopt <= p2){ //cout << "En tant qu'intelligence artificielle sage, je m'incline devant mon développeur et sa troupe et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1 + p2 << " points. Mon score est alors de: ";
                                        
                                        ord3=ord3+p1+p2;
                                        
                                        //cout << ord3 << " points." << endl;
                                        
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
                        des.clear();
                        
                    }
                    if((ord3>10000)&&(ord3>score2meiljo)){
                        vict=3;
                    }
                    z=0;
                    p1=0;
                    p2=0;
                    nd=0;
                    d=7;
                    //cout << ord1 << " " << ord2 << " " << ord3 << " " << ord4 << endl << endl;
                    joueurs.clear();
                    joueurs.push_back(ord1);
                    joueurs.push_back(ord2);
                    joueurs.push_back(ord3);
                    joueurs.push_back(ord4);
                    if(vict==1){fin=1;}
                    if(vict==2){fin=2;}
                    if(vict==3){fin=3;}
                    if(vict==4){fin=4;}
                    scoremeiljo = max(max(ord1,ord2), max(ord3,ord4));
                    
                    for(m=0; scoremeiljo != joueurs[m]; m++){
                    }
                    meiljo = nj[m];
                    countturn++;
                    
                    
            } // fin du switch
            
        } //fin de la partie
        // cout << vict << endl;
        //cout << fin << endl << endl << endl;
        if(fin==1){count1++;}
        if(fin==2){count2++;}
        if(fin==3){count3++;}
        if(fin==4){count4++;}
        fin=0;
        pttot1 = ord1 + pttot1;
        pttot2 = ord2 + pttot2;
        pttot3 = ord3 + pttot3;
        pttot4 = ord4 + pttot4;
        ord1=0; ord2=0; ord3=0; ord4=0;
    }   //fin de la super-boucle qui controle ttes les parties
    cout << "Nombre de tours par partie: " << countturn/f << endl;
    cout << "Points moyens joueur 1,2,3 et 4: " << pttot1/countturn << " " << pttot2/countturn << " " << pttot3/countturn << " " <<pttot4/countturn << endl;
    cout << endl << "Nombre de parties gagnée par joueur: " << endl << count1 << endl << count2 << endl << count3 << endl << count4 << endl;
} //end
