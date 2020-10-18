//

//  main.cpp

//  Bolo dice testing

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
int nbrejoueurs, jo1, jo2, jo3, jo4, jo5, jo6, jo7, jo8;
string njo1, njo2, njo3, njo4, njo5, njo6, njo7, njo8;
int sct1, sct2, sct3, sct4, sct5, sct6, sct7, sct8;
int e, f, g, h, i, nd, nd1, nd2, nd3, nd4, d, d1, d2, d3, d4;
int maxopt, z, z1, z2, z3, z4, q, xxx, ok, perdu, has, vict ,fin;
int p1, p2, p1_1, p1_2, p1_3, p1_4, scoremeiljo, p1000, numj;
int a2, a3, a5, a6, a8, a9, b2, b3, b5, b6, countd, counttour, jk;
string premier, a1, a4, a7, b1, b4, okk, hasard, meiljo;
long double deltatj, deltaptt, ord1, ord2, ord3, ord4;


int main() {
    for(jk=0; jk<1000 ; jk++){
        d=7;d1=7;d2=7;d3=7;d4=7;countd = 7;
        srand( static_cast<unsigned int>(time(NULL))); // for random function
        //debut du tour(de la boucle qui fait le tour)
        vector<int> ptopt;vector<int> desopt;vector<string> optch;vector<int> sptopt;vector<int> sdesopt;vector<string> soptch;
        vector<double> ptchem;vector<double> edg;vector<double> pperte;vector<double> pvict;vector<double> ptsmoy;vector<int> sct;
        pperte.push_back(0.009); // Attention au 0 qui est la premiere option(pour 0 dés théoriquement)!!
        pperte.push_back(0.66667);pperte.push_back(0.44444);pperte.push_back(0.27778);
        pperte.push_back(0.15741);pperte.push_back(0.07716);pperte.push_back(0.03086);pperte.push_back(0.009);
            while(z==0){            //si z=0, le tour continue, si l'ordi s'arrete/perd, z=1 et le tour de l'ordi se termine
               
                random_device rd;
                mt19937 mt(rd());    // The random number generator using a non-deterministic random device
                uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
                vector<int> des;
                de1=0, de2=0, de3=0, de4=0, de5=0, de6=0, de7=0;
                de1 = dist(mt);de2 = dist(mt);de3 = dist(mt);de4 = dist(mt);
                de5 = dist(mt);de6 = dist(mt);de7 = dist(mt);
                if(countd==0){countd=7;};d = countd; countd--; //cout << "d: " << d << endl;
                    switch(d){
                        case 7:
                            des.push_back (de7);des.push_back (de6);des.push_back (de5);des.push_back (de4);
                            des.push_back (de3);des.push_back (de2);des.push_back (de1);
                            //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6 << de7;
                            break;
                        case 6:
                            des.push_back (de6);des.push_back (de5);des.push_back (de4);
                            des.push_back (de3);des.push_back (de2);des.push_back (de1);
                            //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5 << de6;
                            break;
                        case 5:
                            des.push_back (de5);des.push_back (de4);des.push_back (de3);
                            des.push_back (de2);des.push_back (de1);
                            //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4 << de5;
                            break;
                        case 4:
                            des.push_back (de4);des.push_back (de3);
                            des.push_back (de2);des.push_back (de1);
                            //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3 << de4;
                            break;
                        case 3:
                            des.push_back (de3);des.push_back (de2);des.push_back (de1);
                            //cout << "J'ai tiré la séquence suivante: " << de1 << de2 << de3;
                            break;
                        case 2:
                            des.push_back (de2);des.push_back (de1);
                            //cout << "J'ai tiré la séquence suivante: " << de1 << de2;
                            break;
                        case 1:
                            des.push_back (de1);
                            //cout << "J'ai tiré la séquence suivante: " << de1;
                            break;
                    }
                    //cout << endl << endl;
                    for (i=0; i<des.size(); i++){//recense combien de fois chaque de apparait
                    switch (des[i]){
                    case 1: n1++;break;
                    case 2: n2++;break;
                    case 3: n3++;break;
                    case 4: n4++;break;
                    case 5: n5++;break;
                    case 6: n6++;break;
                    default:break;
                    }
                    }
                if ((n1+n2+n3+n4+n5+n6)!=d){cout << "erreur dés, recommencer programme" << endl;fin = 3;
                    cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << d;}
                if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) { ptsopt=1500; n1--; n2--; n3--; n4--; n5--; n6--;
                    ptopt.push_back(ptsopt); desopt.push_back(6); optch.push_back("123456");}
                switch(n6){
                    case 3:ptsopt=600; desopt.push_back(n6); ptopt.push_back(ptsopt); optch.push_back("666");break;
                    case 4:ptsopt=1200; desopt.push_back(n6); ptopt.push_back(ptsopt); optch.push_back("6666");break;
                    case 5:ptsopt=2400; desopt.push_back(n6); ptopt.push_back(ptsopt); optch.push_back("66666");break;
                    case 6:ptsopt=4800; desopt.push_back(n6); ptopt.push_back(ptsopt); optch.push_back("666666");break;
                    case 7:ptsopt=9600; desopt.push_back(n6); ptopt.push_back(ptsopt); optch.push_back("6666666");break;
                    default:break;
                }
                n6 = 0;
                switch(n5) {
                    case 1:ptsopt=50; desopt.push_back(n5); ptopt.push_back(ptsopt); optch.push_back("5");break;
                    case 2:ptsopt=50; desopt.push_back(1); ptopt.push_back(ptsopt); optch.push_back("5");
                    ptsopt=50; desopt.push_back(1); ptopt.push_back(ptsopt); optch.push_back("5");break;
                    case 3:ptsopt=500; desopt.push_back(n5); ptopt.push_back(ptsopt); optch.push_back("555");break;
                    case 4:ptsopt=1000; desopt.push_back(n5); ptopt.push_back(ptsopt); optch.push_back("5555");break;
                    case 5:ptsopt=2000; desopt.push_back(n5); ptopt.push_back(ptsopt); optch.push_back("55555");break;
                    case 6:ptsopt=4000; desopt.push_back(n5); ptopt.push_back(ptsopt); optch.push_back("555555");break;
                    case 7:ptsopt=8000; desopt.push_back(n5); ptopt.push_back(ptsopt); optch.push_back("5555555");break;
                    default:break;
                }
                n5 = 0;
                switch(n4) {
                    case 3:ptsopt=400; desopt.push_back(n4); ptopt.push_back(ptsopt); optch.push_back("444");break;
                    case 4:ptsopt=800; desopt.push_back(n4); ptopt.push_back(ptsopt); optch.push_back("4444");break;
                    case 5:ptsopt=1600; desopt.push_back(n4); ptopt.push_back(ptsopt); optch.push_back("44444");break;
                    case 6:ptsopt=3200; desopt.push_back(n4); ptopt.push_back(ptsopt); optch.push_back("444444");break;
                    case 7:ptsopt=6400; desopt.push_back(n4); ptopt.push_back(ptsopt); optch.push_back("4444444");break;
                    default:break;
                }
                n4 = 0;
                switch(n3) {
                    case 3:ptsopt=300; desopt.push_back(n3); ptopt.push_back(ptsopt); optch.push_back("333");break;
                    case 4:ptsopt=600; desopt.push_back(n3); ptopt.push_back(ptsopt); optch.push_back("3333");break;
                    case 5:ptsopt=1200; desopt.push_back(n3); ptopt.push_back(ptsopt); optch.push_back("33333");break;
                    case 6:ptsopt=2400; desopt.push_back(n3); ptopt.push_back(ptsopt); optch.push_back("333333");break;
                    case 7:ptsopt=4800; desopt.push_back(n3); ptopt.push_back(ptsopt); optch.push_back("3333333");break;
                    default:break;
                }
                n3 = 0;
                switch(n2) {
                    case 3:ptsopt=200; desopt.push_back(n2); ptopt.push_back(ptsopt); optch.push_back("222");break;
                    case 4:ptsopt=400; desopt.push_back(n2); ptopt.push_back(ptsopt); optch.push_back("2222");break;
                    case 5:ptsopt=800; desopt.push_back(n2); ptopt.push_back(ptsopt); optch.push_back("22222");break;
                    case 6:ptsopt=1600; desopt.push_back(n2); ptopt.push_back(ptsopt); optch.push_back("222222");break;
                    case 7:ptsopt=3200; desopt.push_back(n2); ptopt.push_back(ptsopt); optch.push_back("2222222");break;
                    default:break;
                }
                n2 = 0;
                switch(n1) {
                    case 1:ptsopt=100; desopt.push_back(n1); ptopt.push_back(ptsopt); optch.push_back("1");break;
                    case 2:ptsopt=100; desopt.push_back(1); ptopt.push_back(ptsopt); optch.push_back("1");
                    ptsopt=100; desopt.push_back(1); ptopt.push_back(ptsopt); optch.push_back("1");break;
                    case 3:ptsopt=1000; desopt.push_back(n1); ptopt.push_back(ptsopt); optch.push_back("111");break;
                    case 4:ptsopt=2000; desopt.push_back(n1); ptopt.push_back(ptsopt); optch.push_back("1111");break;
                    case 5:ptsopt=4000; desopt.push_back(n1); ptopt.push_back(ptsopt); optch.push_back("11111");break;
                    case 6:ptsopt=8000; desopt.push_back(n1); ptopt.push_back(ptsopt); optch.push_back("111111");break;
                    case 7:ptsopt=16000; desopt.push_back(n1); ptopt.push_back(ptsopt); optch.push_back("1111111");break;
                    default:break;
                }
                n1 = 0;
                for(a=0; a < optch.size(); a++){
                    for (b=0; b < optch.size(); b++){
                        if ((optch[a]==optch[b])&&(a!=l)&&(desopt[a]!=desopt[b])) {cout << "erreur de typewrite!"<< optch[a] << optch[b] << endl << endl;} // Utile pour verifier si il n'y a pas d'erreur d'ecriture dans le vecteur optch
                    }
                }
                if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;}
                if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
                if ((desopt.size() == 0) && (ptopt.size() == 0)) { //cout << "Les ordinateurs avec "<< d << " des sont perdu" << endl << endl;
                    p1_1 = 0; p1_2 = 0; p1_3 = 0; p1_4 = 0; p2 = 0; nd = 0; perdu=1;
                }
                if ((ptopt.size()!=desopt.size())||(desopt.size()!=optch.size())){cout << "erreur options!!" << endl;}
                
                switch(desopt.size()){//debut combinaison lineaire des options
                    case 7: cout << "erreur de lancer de dés" << endl;break;
                    case 6: cout << "erreur de lancer de dés" << endl;break;
                    case 5:
                    for (int l=0; l < desopt.size(); l++){for (int h=0; h < desopt.size(); h++){for (int k=0; k < desopt.size(); k++){
                    for (int j=0; j < desopt.size(); j++){for (int i=0; i < desopt.size(); i++){if((l<h)&&(h<k)&&(k<j)&&(j<i)){
                    w4 = desopt[i]+desopt[j]+desopt[k]+desopt[h]+desopt[l];w8 = ptopt[i]+ptopt[j]+ptopt[k]+ptopt[h]+ptopt[l];
                    w12 = optch[i]+optch[j]+optch[k]+optch[h]+optch[l];sdesopt.push_back(w4);sptopt.push_back(w8);soptch.push_back(w12);}}}}}}
                    case 4:
                    for (int h=0; h < desopt.size(); h++){for (int k=0; k < desopt.size(); k++){for (int j=0; j < desopt.size(); j++){
                    for (int i=0; i < desopt.size(); i++){if ((h<k)&&(k<j)&&(j<i)){
                    w3 = desopt[i]+desopt[j]+desopt[k]+desopt[h];w7 = ptopt[i]+ptopt[j]+ptopt[k]+ptopt[h];
                    w11 = optch[i]+optch[j]+optch[k]+optch[h];sdesopt.push_back(w3);sptopt.push_back(w7);soptch.push_back(w11);}}}}}
                    case 3:
                    for (int k=0; k < desopt.size(); k++){for (int j=0; j < desopt.size(); j++){for (int i=0; i < desopt.size(); i++){
                    if ((k<j)&&(j<i)){w2  = desopt[i]+desopt[j]+desopt[k];w6 = ptopt[i]+ptopt[j]+ptopt[k];
                    w10 = optch[i]+optch[j]+optch[k];sdesopt.push_back(w2);sptopt.push_back(w6);soptch.push_back(w10);}}}}
                    case 2:
                    for (int j=0; j < desopt.size(); j++){for (int i=0; i < desopt.size(); i++){if (j<i){w1 = desopt[i]+desopt[j];
                    w5 = ptopt[i]+ptopt[j];w9 = optch[i]+optch[j];sdesopt.push_back(w1);sptopt.push_back(w5);soptch.push_back(w9);}}}
                    case 1:
                    for (int i=0; i < desopt.size(); i++){sdesopt.push_back(desopt[i]);sptopt.push_back(ptopt[i]);soptch.push_back(optch[i]);}break;
                }
                if (sdesopt.size()!=sptopt.size()){cout << "erreur options!" << endl;}
                
            if((d==d1)&&(z1==0)){//ordi Num. 1
                ptsmoy.clear();
                ptsmoy.push_back(915.2207);//1
                ptsmoy.push_back(329.9997);
                ptsmoy.push_back(298.3329);
                ptsmoy.push_back(337.6376);
                ptsmoy.push_back(426.9322);
                ptsmoy.push_back(544.5257);
                ptsmoy.push_back(712.0227);
                ptsmoy.push_back(915.2207);//1
                if(perdu==1){z1=1;p1_1=0;d1=7;}
                if(perdu!=1){
                    p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                    for(g=0;p2!=sptopt[g];g++){}
                    // nd = nombres de dés du lancer suivant// d = nombres de dés lors de ce lancer
                    for (e=0; e < sdesopt.size(); e++){
                    nd = (d-sdesopt[e]);
                    if(nd==0){nd = nd+7;}
                    edg.push_back(ptsmoy[nd]-pperte[nd]*(p1_1+sptopt[e])); //Vecteur esperance de gain avec chaque option
                    }
                    for (h=0; h < edg.size() ; h++){
                    ptchem.push_back(edg[h]+sptopt[h]);
                    }
                    maxopt = *max_element(ptchem.begin(), ptchem.end());
                    for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                    nd = (d-sdesopt[i]);
                    if(nd==0){nd = nd+7;}
                    if (maxopt > p2){ //cout << "O1: Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1_1+sptopt[i] << " points et " << nd << " dés." << endl;
                    p1_1 = p1_1+sptopt[i];p2 = 0;d1 = nd;
                    }
                    if (maxopt<= p2){ //cout << "O1: En tant que joueur professionnel sage, je m'incline devant mon développeur et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1_1 + p2 << " points. Mon honorable score est alors de: ";
                    ord1=ord1+p1_1+p2;
                    //cout << ord1 << " points." << endl;
                    z1 = 1;
                    }
                }
                edg.clear();ptchem.clear();
            }//fin de la manche ordi1
            
                if((d==d2)&&(z2==0)){//ordi Num. 2
                    ptsmoy.clear();
                    ptsmoy.push_back(2500);//2
                    ptsmoy.push_back(329.9997);
                    ptsmoy.push_back(298.3329);
                    ptsmoy.push_back(337.6376);
                    ptsmoy.push_back(426.9322);
                    ptsmoy.push_back(544.5257);
                    ptsmoy.push_back(712.0227);
                    ptsmoy.push_back(2500);//2
                    if(perdu==1){z2=1;p1_2=0;d2=7;}
                    if(perdu!=1){
                        p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                        for(g=0;p2!=sptopt[g];g++){}
                        // nd = nombres de dés du lancer suivant// d = nombres de dés lors de ce lancer
                        for (e=0; e < sdesopt.size(); e++){
                            nd = (d-sdesopt[e]);
                            if(nd==0){nd = nd+7;}
                            edg.push_back(ptsmoy[nd]-pperte[nd]*(p1_2+sptopt[e])); //Vecteur esperance de gain avec chaque option
                        }
                        for (h=0; h < edg.size() ; h++){
                            ptchem.push_back(edg[h]+sptopt[h]);
                        }
                        maxopt = *max_element(ptchem.begin(), ptchem.end());
                        for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                        nd = (d-sdesopt[i]);
                        if(nd==0){nd = nd+7;}
                        if (maxopt > p2){ //cout << "O2: Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1_2+sptopt[i] << " points et " << nd << " dés." << endl;
                            p1_2 = p1_2+sptopt[i];p2 = 0;d2 = nd;
                        }
                        if (maxopt<= p2){ //cout << "O2: En tant que joueur professionnel sage, je m'incline devant mon développeur et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1_2 + p2 << " points. Mon honorable score est alors de: ";
                            ord2=ord2+p1_2+p2;
                            //cout << ord2 << " points." << endl;
                            z2 = 1;
                        }
                    }
                    edg.clear();ptchem.clear();
                }//fin de la manche ordi2
                
                if((d==d3)&&(z3==0)){//ordi Num. 3
                    ptsmoy.clear();
                    ptsmoy.push_back(0);//3
                    ptsmoy.push_back(329.9997);
                    ptsmoy.push_back(298.3329);
                    ptsmoy.push_back(337.6376);
                    ptsmoy.push_back(426.9322);
                    ptsmoy.push_back(544.5257);
                    ptsmoy.push_back(712.0227);
                    ptsmoy.push_back(0);//3
                    if(perdu==1){z3=1;p1_3=0;d3=7;}
                    if(perdu!=1){
                        p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                        for(g=0;p2!=sptopt[g];g++){}
                        // nd = nombres de dés du lancer suivant// d = nombres de dés lors de ce lancer
                        for (e=0; e < sdesopt.size(); e++){
                            nd = (d-sdesopt[e]);
                            if(nd==0){nd = nd+7;}
                            edg.push_back(ptsmoy[nd]-pperte[nd]*(p1_3+sptopt[e])); //Vecteur esperance de gain avec chaque option
                        }
                        for (h=0; h < edg.size() ; h++){
                            ptchem.push_back(edg[h]+sptopt[h]);
                        }
                        maxopt = *max_element(ptchem.begin(), ptchem.end());
                        for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                        nd = (d-sdesopt[i]);
                        if(nd==0){nd = nd+7;}
                        if (maxopt > p2){ //cout << "O3: Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1_3+sptopt[i] << " points et " << nd << " dés." << endl;
                            p1_3 = p1_3+sptopt[i];p2 = 0;d3 = nd;
                        }
                        if (maxopt<= p2){ //cout << "O3: En tant que joueur professionnel sage, je m'incline devant mon développeur et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1_3 + p2 << " points. Mon honorable score est alors de: ";
                            ord3=ord3+p1_3+p2;
                            //cout << ord3 << " points." << endl;
                            z3 = 1;
                        }
                    }
                    edg.clear();ptchem.clear();
                }//fin de la manche ordi3
                
                if((d==d4)&&(z4==0)){//ordi Num. 4
                    ptsmoy.clear();
                    ptsmoy.push_back(-1000);//4
                    ptsmoy.push_back(329.9997);
                    ptsmoy.push_back(298.3329);
                    ptsmoy.push_back(337.6376);
                    ptsmoy.push_back(426.9322);
                    ptsmoy.push_back(544.5257);
                    ptsmoy.push_back(712.0227);
                    ptsmoy.push_back(-1000);//4
                    if(perdu==1){z4=1;p1_4=0;d4=7;}
                    if(perdu!=1){
                        p2 = *max_element(sptopt.begin(), sptopt.end()); //nombre de points si arret
                        for(g=0;p2!=sptopt[g];g++){}
                        // nd = nombres de dés du lancer suivant// d = nombres de dés lors de ce lancer
                        for (e=0; e < sdesopt.size(); e++){
                            nd = (d-sdesopt[e]);
                            if(nd==0){nd = nd+7;}
                            edg.push_back(ptsmoy[nd]-pperte[nd]*(p1_4+sptopt[e])); //Vecteur esperance de gain avec chaque option
                        }
                        for (h=0; h < edg.size() ; h++){
                            ptchem.push_back(edg[h]+sptopt[h]);
                        }
                        maxopt = *max_element(ptchem.begin(), ptchem.end());
                        for(i=0; maxopt!= int(edg[i]+sptopt[i]); i++){}
                        nd = (d-sdesopt[i]);
                        if(nd==0){nd = nd+7;}
                        if (maxopt > p2){ //cout << "O4: Je continue mon tour et je choisis le(s) dé(s) " << soptch[i] << ". Je me retrouve avec " << p1_4+sptopt[i] << " points et " << nd << " dés." << endl;
                            p1_4 = p1_4+sptopt[i];p2 = 0;d4 = nd;
                        }
                        if (maxopt<= p2){ //cout << "O4: En tant que joueur professionnel sage, je m'incline devant mon développeur et je m'arrête en prenant le(s) dé(s) " << soptch[g] << " et en totalisant " << p1_4 + p2 << " points. Mon honorable score est alors de: ";
                            ord4=ord4+p1_4+p2;
                            //cout << ord4 << " points." << endl;
                            z4 = 1;
                        }
                    }
                    edg.clear();ptchem.clear();
                }//fin de la manche ordi4
                
            sptopt.clear();sdesopt.clear();soptch.clear();
            ptopt.clear();desopt.clear();optch.clear();perdu=0;
                if((z1==1)&&(z2==1)&&(z3==1)&&(z4==1)){z=1;}
                //cout << "Des pour chaque ordi:" << d1 << d2 << d3 << d4 << endl;
            }//fin du while z=0, aka aussi le tour des ordis
        z=0;z1=0;z2=0;z3=0;z4=0;
        p1_1=0;p1_2=0;p1_3=0;p1_4=0;
            p2=0;
            nd=0;
        //cout << "*** Nouveau Tour! ***" << endl;
        counttour++;
    }// fin du for(jk), aka la fin de la "partie"
    if(counttour!=jk){cout << "erreur de boucle" << endl;}
    cout << "Points par tour ordi 1: " << ord1/jk << endl << "Points par tour ordi 2: " << ord2/jk << endl;
    cout << "Points par tour ordi 3: " << ord3/jk << endl << "Points par tour ordi 4: " << ord4/jk << endl;
    cout << "Nombre de tours: " << jk << endl << "Points totaux: " << ord1+ord2+ord3+ord4 << endl;
}//fin du main
