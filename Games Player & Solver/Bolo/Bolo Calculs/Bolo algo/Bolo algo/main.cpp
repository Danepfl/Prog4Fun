//
//  main.cpp
//  Bolo algo
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2017 Dany. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> des;
    
    vector<int> ptopt;
    
    vector<int> desopt;
    
    vector<string> optch;
    
    vector<int> sptopt;
    
    vector<int> sdesopt;
    
    vector<string> soptch;
    int  n1(0), n2(0), n3(0), n4(0), n5(0), n6(0), ptsopt(0);
    int cbp(0), cbg(0), cbg1(0), cbg2(0), cbg3(0), cbg4(0), cbg5(0), cbg6(0), cbg0(0), spttot(0), spt1(0), spt2(0), spt3(0), spt4(0), spt5(0), spt6(0), spt0(0);
    int w1, w2, w3, w4, w5, w6, w7, w8; // w1, w2, w3, w4 pour desopt  w5, w6, w7, w8 pour ptopt
    
    string w9, w10, w11, w12;

    for(int i1=1; i1<7; i1++){
        for(int i2=1; i2<7; i2++){
            for(int i3=1; i3<7; i3++){
                for(int i4=1; i4<7; i4++){
                    for(int i5=1; i5<7; i5++){
                        for(int i6=1; i6<7; i6++){
                            for(int i7=1; i7<7; i7++){
                                des.push_back(i1);
                                des.push_back(i2);
                                des.push_back(i3);
                                des.push_back(i4);
                                des.push_back(i5);
                                des.push_back(i6);
                                des.push_back(i7);
    
    for (int i=0; i<des.size(); i++){
        
        
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
    
        
        if ((n1+n2+n3+n4+n5+n6)!=7){ cout << "erreur, recommencer programme" << endl;
            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl;}
        
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
        
        if (desopt.size()>5){ cout << "erreur trop de possibilites" << endl;
            
            desopt.erase(desopt.begin()+5, desopt.end());
            
            ptopt.erase(ptopt.begin()+5, ptopt.end());
            
            optch.erase(optch.begin()+5, optch.end());
            
        }
        
        if (desopt.size() != ptopt.size()) { cout << "erreur! vecteur des options pas egal a vecteur pts options" << endl;}
        
        if ((ptopt.size()!=desopt.size())||(desopt.size()!=optch.size())){cout << "erreur options!!" << endl;}
        
        if ((desopt.size() == 0) && (ptopt.size() == 0)) {
            cbp++;
        }
        else{   cbg++;
        
        
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
        
            for(int k=0; k < sdesopt.size(); k++){
                
                for (int j=0; j < sptopt.size(); j++){
                    
                    if ((sdesopt[j]==sdesopt[k])&&(j!=k)){
                        
                        if (sptopt[j] < sptopt[k]) {
                            
                            sptopt.erase(sptopt.begin()+j);
                            
                            sdesopt.erase(sdesopt.begin()+j);
                            
                            soptch.erase(soptch.begin()+j);
                            
                        }
                        
                        if (sptopt[j] > sptopt[k]) {
                            
                            sdesopt.erase(sdesopt.begin()+k);
                            
                            sptopt.erase(sptopt.begin()+k);
                            
                            soptch.erase(soptch.begin()+k);
                            
                        }
                        
                        if (sptopt[k]==sptopt[j]){
                            
                            sptopt.erase(sptopt.begin()+k);
                            
                            sdesopt.erase(sdesopt.begin()+k);
                            
                            soptch.erase(soptch.begin()+k);
                            
                        }
                        
                    }
                    
                }
            }
            
            cout << i1 << i2 << i3 << i4 << i5 << i6 << i7 << endl;
        for (int i=0; i<soptch.size(); i++){cout << soptch[i] << " " << sptopt[i] << " " << sdesopt[i] << endl;} //temp
            cout << endl;
            
    } // fin else
    des.clear();ptopt.clear();desopt.clear();optch.clear(); sptopt.clear();sdesopt.clear();soptch.clear();
                                
                                
                            } //fermeture 1er for(i1)
                        }
                    }
                }
            }
        }
    } //fermeture dernier for(i7)
} // end main
