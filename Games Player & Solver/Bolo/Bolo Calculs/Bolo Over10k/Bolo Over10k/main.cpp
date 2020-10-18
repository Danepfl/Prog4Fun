//
//  main.cpp
//  Bolo Over10k
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2018 Dany. All rights reserved.
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
#include <functional>
#include <list>
using namespace std;

int de1, de2, de3, de4, de5, de6, de7, n1, n2, n3, n4, n5, n6, ptsopt, j, k, l, m, a, b, e, g, h, i, t;
int w1, w2, w3, w4, w5, w6, w7, w8; // w1, w2, w3, w4 pour desopt  w5, w6, w7, w8 pour ptopt
string w9, w10, w11, w12;
int scoreordi, nd, d, maxopt, z, perdu, vict ,fin, scordi1, scordi2, scordi3, scordi4, tourtot;
int p1, p2, scoremeilord, ncol, no1, no2, no3, no4, tourordi, same, fit1, fit2, fit3, fit4, firstplayer, lastplayer, tourvict;
long double deltatj, deltaptt;
double alpha1, alpha2, alpha3, alpha4, alpha5, alpha6, alpha7;
double f1, f2, f3;
int counttour=800000, partie, stplace, ndplace, checkcount;

ostream& operator<<(ostream& ostr, const list<int>& list)
{for (auto &i : list) {ostr << " " << i;}return ostr;}

int main() {//Resultats finaux: f1=0.05; f2=3; f3=1;
    srand(static_cast<unsigned int>(time(NULL))); // for random function, initialization
    random_device rd;
    mt19937 mt(rd());    // The random number generator using a non-deterministic random device
    alpha1=518.3333; alpha2=320;alpha3=170;alpha4=120;alpha5=120;alpha6=190;alpha7=1480;
    //initialisation au début du tour
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
    vector<double> ford1(3);
    vector<double> ford2(3);
    vector<double> ford3(3);
    vector<double> ford4(3);
    
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
    vector <double> fvec1;
    vector <double> fvec2;
    vector <double> fvec3;
    vector <double> fvec4;
    vector <double> fvec5;
    vector <double> fvec6;
    for(f2=3;f2<=3;f2=f2+1){
        for(f1=0;f1<=0.10;f1=f1+0.01){
            for(f3=1;f3<=1;f3=f3+1){
                fvec1.push_back(f1);
                fvec2.push_back(f2);
                fvec3.push_back(f3);
            }
        }
    }
    fvec1.resize(8);
    fvec2.resize(8);
    fvec3.resize(8);
    fvec1.shrink_to_fit();
    fvec2.shrink_to_fit();
    fvec3.shrink_to_fit();
    //cout << "fvec: " << fvec1.size() << endl << endl;
RESTART:
    while(fvec1.size()!=0){
    ncol=int(fvec1.size());
    uniform_int_distribution<int> dist(0,ncol-1);
    no1=dist(mt); do{no2=dist(mt);}while(no2==no1); do{no3=dist(mt);}while((no3==no1)||(no3==no2));
    do{no4=dist(mt);}while((no4==no1)||(no4==no2)||(no4==no3));
    ford1[0]=fvec1[no1]; ford1[1]=fvec2[no1]; ford1[2]=fvec3[no1];
    ford2[0]=fvec1[no2]; ford2[1]=fvec2[no2]; ford2[2]=fvec3[no2];
    ford3[0]=fvec1[no3]; ford3[1]=fvec2[no3]; ford3[2]=fvec3[no3];
    ford4[0]=fvec1[no4]; ford4[1]=fvec2[no4]; ford4[2]=fvec3[no4];
    list<int> no = {no1, no2, no3, no4};
    //cout << no << endl << endl;
    no.sort(greater<int>());
    //cout << fvec3[no1] << endl << fvec3[no2] << endl << fvec3[no3] << endl << fvec3[no4] << endl << endl;
    vector<int> nov{begin(no), end(no)};
    for(i=0;i<4; i++) {
        fvec1.erase(fvec1.begin()+nov[i]);
        fvec2.erase(fvec2.begin()+nov[i]);
        fvec3.erase(fvec3.begin()+nov[i]);
    }
    for(partie=0;partie<counttour;partie++){
        scoreordi=6000; scordi1=6000; scordi2=6000; scordi3=6000; scordi4=6000;
        uniform_int_distribution<int> distr(1,4);
        firstplayer=distr(mt);
        lastplayer=(firstplayer-1);
        if(lastplayer==0){lastplayer=lastplayer+4;}
    while(fin==0){
        // fin: 0: jeu non terminé ; 1: Ordi1 gagne ; 2: Ordi2 gagne ; 3: Ordi3 gagne ; 4: Ordi4 gagne
        // vict: 1: Ordi1 gagne tour 2: Ordi2 gagne tour 3: Ordi3 gagne tour 4: Ordi4 gagne tour
        // vict: 5: Ordi1 gagne partie 6: Ordi2 gagne partie 7: Ordi3 gagne partie 8: Ordi4 gagne partie
        d=7; // Initialisation à 7 dés
    LOOP:
        if (vict==5){fin=1;fit1++;vict=0;}
        if (vict==6){fin=2;fit2++;vict=0;}
        if (vict==7){fin=3;fit3++;vict=0;}
        if (vict==8){fin=4;fit4++;vict=0;}
        
        if (fin==0){
            i=0;
            tourvict++;
            for(t=1;t<=4;t++) {
                switch (t) {
                    case 1:
                        tourordi=firstplayer;
                        break;
                    case 2:
                        tourordi=firstplayer%4+1;
                    case 3:
                        tourordi=(firstplayer+1)%4+1;
                    case 4:
                        tourordi=(firstplayer+2)%4+1;
                    default:
                        break;
                }
            while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd => z=1 et le tour de l'ordi se termine
                vector<int> des;
                de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                uniform_int_distribution<int> distd(1,6);    // The distribution that gives us random numbers in [1,6]
                    de1 = distd(mt);
                    de2 = distd(mt);
                    de3 = distd(mt);
                    de4 = distd(mt);
                    de5 = distd(mt);
                    de6 = distd(mt);
                    de7 = distd(mt);
                    switch(d){
                        case 7:
                            des.push_back (de7);
                            des.push_back (de6);
                            des.push_back (de5);
                            des.push_back (de4);
                            des.push_back (de3);
                            des.push_back (de2);
                            des.push_back (de1);
                            break;
                        case 6:
                            des.push_back (de6);
                            des.push_back (de5);
                            des.push_back (de4);
                            des.push_back (de3);
                            des.push_back (de2);
                            des.push_back (de1);
                            break;
                        case 5:
                            des.push_back (de5);
                            des.push_back (de4);
                            des.push_back (de3);
                            des.push_back (de2);
                            des.push_back (de1);
                            break;
                        case 4:
                            des.push_back (de4);
                            des.push_back (de3);
                            des.push_back (de2);
                            des.push_back (de1);
                            break;
                        case 3:
                            des.push_back (de3);
                            des.push_back (de2);
                            des.push_back (de1);
                            break;
                        case 2:
                            des.push_back (de2);
                            des.push_back (de1);
                            break;
                        case 1:
                            des.push_back (de1);
                            break;
                    }
                    for(m=0; m<des.size(); m++){
                        while((des[m]<=0)||(des[m]>6)){
                            cout << "Il y a une erreur dans l'entrée du/des dé(s), veuillez réecrire le/les dé(s) erroné(s): " << endl;
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
                if ((desopt.size() == 0) && (ptopt.size() == 0)) {//ordi perdu à ce tour
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
                if (sdesopt.size()!=sptopt.size()){cout << "erreur taille vecteur options et points pas égaux!" << endl;}
                scoremeilord=max(max(scordi1, scordi2), max(scordi3, scordi4));
                switch (tourordi) {
                    case 1:
                        scoreordi=scordi1;
                        f1=ford1[0];f2=ford1[1];f3=ford1[2];
                        break;
                    case 2:
                        scoreordi=scordi2;
                        f1=ford2[0];f2=ford2[1];f3=ford2[2];
                        break;
                    case 3:
                        scoreordi=scordi3;
                        f1=ford3[0];f2=ford3[1];f3=ford3[2];
                        break;
                    case 4:
                        scoreordi=scordi4;
                        f1=ford4[0];f2=ford4[1];f3=ford4[2];
                        break;
                    default:
                        break;
                }
                same=0;
                if(scoremeilord==scoreordi){
                    same=1;
                }
                
                if(perdu!=1){//Si l'ordi n'a pas perdu à ce tour
    
                    p2 = *max_element(sptopt.begin(), sptopt.end()); //p2 = nombre de points de l'option si arrêt
                    for(g=0;p2!=sptopt[g];g++){}
                    // nd = nombres de dés du lancer suivant avec l'option choisie
                    // d = nombres de dés lors de ce lancer
                    if ((scoreordi>=1000)&&(scoremeilord<=10000)&&(scoreordi<=10000)){//Cas classique
                        if (scoreordi+p1+p2 >= scoremeilord){//Cas victorieux
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
                            if (maxopt > p2){
                                p1 = p1+sptopt[i];
                                p2 = 0;
                                d = nd;
                            }
                            if (maxopt<= p2){
                                scoreordi=scoreordi+p1+p2;
                                z = 1;
                            }
                        }
                        else if (scoreordi < scoremeilord){//Cas où le joueur est en train de gagner
                            deltatj = 1+int((10050-scoremeilord)/(ptsmoy[7]));//nombre de tours (en moyenne) necessaire pour que l'adversaire gagne
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
                                    edg.push_back(ptsmoy[nd]-pperte[nd]*(p1+sptopt[e]));//Changer en fonction linéaire?? En tout cas tester
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
                            if (maxopt > p2){
                                p1 = p1+sptopt[i];
                                p2 = 0;
                                d = nd;
                            }
                            if (maxopt <= p2){
                                scoreordi=scoreordi+p1+p2;
                                z = 1;
                            }
                        }
                    }//boucle avec ordi entre 1000 et 10'000
                    else if ((scoremeilord>10000)||((p1+p2+scoreordi)>10000)){ //cas où un joueur dépasse 10'000 pts
                        
                        if (p1+p2+scoreordi<=scoremeilord){
                            
                            for (e=0; e < sdesopt.size(); e++){
                                nd = (d-sdesopt[e]);
                                if(nd==0){nd = nd+7;}
                                edg.push_back(ptsmoy[nd]-pperte[nd]*f3*(p1+sptopt[e]));
                                // Facteur f3
                            }
                            for (h=0; h < edg.size() ; h++){
                                ptchem.push_back(edg[h]+sptopt[h]);
                            }
                            maxopt = *max_element(ptchem.begin(), ptchem.end());
                            for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                            nd = (d-sdesopt[i]);
                            if(nd==0){nd = nd+7;}
                            p1 = p1+sptopt[i];p2 = 0;d = nd;
                        }
                        
                        if (p1+p2+scoreordi>scoremeilord){ //Quand l'ordinateur redépasse le joueur en terme de pts
                            
                            for (e=0; e < sdesopt.size(); e++){
                                nd = (d-sdesopt[e]);
                                if(nd==0){nd = nd+7;}
                                int delta10;
                                delta10 = scoreordi+p1+p2-scoremeilord; //Différence score entre joueur et ordinateur
                                edg.push_back(ptsmoy[nd]-pperte[nd]*(f1*delta10+f2)*(p1+sptopt[e]));
                                //Facteur f1*delta10+f2
                            }
                            for (h=0; h < edg.size() ; h++){
                                ptchem.push_back(edg[h]+sptopt[h]);
                            }
                            maxopt = *max_element(ptchem.begin(), ptchem.end());
                            for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                            nd = (d-sdesopt[i]);
                            if(nd==0){nd = nd+7;}
                            if (maxopt > p2){
                                p1 = p1+sptopt[i]; p2 = 0; d = nd;
                            }
                            
                            if (maxopt<= p2){
                                scoreordi=scoreordi+p1+p2;
                                z = 1;
                            }
                        }//boucle si scoreordi>scoremeilord
                    }//boucle ordi>10k
                    else {cout << "erreur score ordi!" << endl;}
                }//boucle if ordi!=perdu
                perdu=0;
                edg.clear();
                sptopt.clear();
                sdesopt.clear();
                soptch.clear();
                ptchem.clear();
                ptopt.clear();
                desopt.clear();
                optch.clear();
                
                
                }//fin du tour de l'ordi (while z==0)
                z=0;
                p1=0;
                p2=0;
                nd=0;
                
                switch (tourordi) {
                    case 1:
                        scordi1=scoreordi;
                        if ((scordi1>10000)&&((scordi1>scoremeilord)||(same==1))){
                            if(vict==1){vict=5; goto LOOP;}
                            else{vict=1;}
                        }
                        break;
                    case 2:
                        scordi2=scoreordi;
                        if ((scordi2>10000)&&((scordi2>scoremeilord)||(same==1))){
                            if(vict==2){vict=6; goto LOOP;}
                            else{vict=2;}
                        }
                        break;
                    case 3:
                        scordi3=scoreordi;
                        if ((scordi3>10000)&&((scordi3>scoremeilord)||(same==1))){
                            if(vict==3){vict=7; goto LOOP;}
                            else{vict=3;}
                        }
                        break;
                    case 4:
                        scordi4=scoreordi;
                        if ((scordi4>10000)&&((scordi4>scoremeilord)||(same==1))){
                            if(vict==4){vict=8; goto LOOP;}
                            else{vict=4;}
                        }
                        break;
                    default:
                        break;
                }//fin du switch
                }//fin du for tourordi
            }//fin du if fin==0
        }//fin de la partie ordis (while fin==0)
        fin=0;
    }//fin du for n parties ordis
    list<int> fit = {fit1, fit2, fit3, fit4};
        cout << "Parties gagnées Ordi 1-4: " << fit << endl;
        cout << "tour moyen parties: " << double(tourvict)/counttour << endl << endl;
        tourtot=tourvict+tourtot;
        tourvict=0;
    vector<int> fitv{begin(fit), end(fit)};
    fit.sort(greater<int>());
    vector<int> fitvs{begin(fit), end(fit)};
    for(k=0;k<fitv.size();k++){
        if(fitvs[0]==fitv[k]){
            stplace=k+1;
        }
        else if(fitvs[1]==fitv[k]){
            ndplace=k+1;
        }
    }
    for(j=0;j<2;j++) {
        if (j==0){m=stplace;}
        else if (j==1){m=ndplace;}
        
        switch (m) {
            case 1:
                fvec4.push_back(ford1[0]);
                fvec5.push_back(ford1[1]);
                fvec6.push_back(ford1[2]);
                break;
            case 2:
                fvec4.push_back(ford2[0]);
                fvec5.push_back(ford2[1]);
                fvec6.push_back(ford2[2]);
                break;
            case 3:
                fvec4.push_back(ford3[0]);
                fvec5.push_back(ford3[1]);
                fvec6.push_back(ford3[2]);
                break;
            case 4:
                fvec4.push_back(ford4[0]);
                fvec5.push_back(ford4[1]);
                fvec6.push_back(ford4[2]);
                break;
            default:
                break;
        }
    }
    fit1=0;fit2=0;fit3=0;fit4=0;
    //checkcount++;
    }//end while fvec1 non vide
    //cout << " checkcount: " << checkcount << endl;
    //checkcount=0;
    cout << endl << endl << "fvec4: " << fvec4.size() << endl << "fvec5: " << fvec5.size() << endl << "fvec6: " << fvec6.size() << endl << endl;

    if(fvec4.size()>2){
    fvec4.swap(fvec1);
    fvec5.swap(fvec2);
    fvec6.swap(fvec3);
    goto RESTART;
    }
    else if(fvec4.size()<=2){
        if(fvec1.size()!=0||fvec2.size()!=0||fvec3.size()!=0){
            cout << "Erreur!!" << endl;
            cout << fvec1.size() << endl << fvec2.size() << endl << fvec3.size() << endl;
            goto END;
        }
        else{
            cout << endl << endl << "tours moyens total: " << double(tourtot)/(counttour*(32+16+8+4+2+1));
            cout << endl << "1er ordi" << endl << "f1: " << fvec4[0] << endl << "f2: " << fvec5[0] << endl << "f3: " << fvec6[0] << endl << endl;
            cout << endl << "2ème ordi" << endl << "f1: " << fvec4[1] << endl << "f2: " << fvec5[2] << endl << "f3: " << fvec6[3] << endl << endl;
        }
    END: a=1;
    }
}//fin du main
