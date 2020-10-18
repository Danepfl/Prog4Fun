//
//  main.cpp
//  Tests Bolo 2
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2017 Dany. All rights reserved.
//
/*int k, j;
using namespace std;
int c;
int main(){
    
    vector<int> test;
    test.push_back(1);
    test.push_back(3);
    test.push_back(2);
    test.push_back(3);
    test.push_back(1);

    vector <int> test2;
    test2.push_back(1);
    test2.push_back(3);
    test2.push_back(4);
    test2.push_back(5);
    test2.push_back(6);


    for(k=0; k < test.capacity(); k++){
        for (j=0; j < test2.capacity(); j++){
            if ((test[j]==test[k])&&(j!=k)){
                if (test2[j] < test2[k]) {
                    test2.erase(test2.begin()+j);
                    test.erase(test.begin()+j);}
                if (test2[j] > test2[k]) {
                    test2.erase(test2.begin()+k);
                    test.erase(test.begin()+k);}
            }
        }
        
    }

    for (c=0; c < test.size(); c++){
        cout << test[c] << endl;
    }
    cout << endl;
    for (c=0; c < test2.size(); c++){
        cout << test2[c] << endl;
    }

}
*/
/*int a, b, i, c, d, e1, e2, e3, e4, f1, f2, f3, f4, nbrejoueurs;
int main(){
    cin >> nbrejoueurs;
    cout << endl;
vector<int> t3;
vector<int> t4;
vector<int> t1;
vector <int> t5;
vector<int> t0;
t0.push_back(4);
t0.push_back(3);
t0.push_back(1);
t0.push_back(2);
t0.push_back(5);
t1.push_back(1);
t1.push_back(2);
t1.push_back(3);
t1.push_back(4);
t1.push_back(5);
vector<int> t2;
t2.push_back(5);
t2.push_back(4);
t2.push_back(2);
t2.push_back(3);
t2.push_back(1);
    
    switch(nbrejoueurs){
        case 5:
            for (int l=0; l < t1.size(); l++){
                for (int h=0; h < t1.size(); h++){
                    for (int k=0; k < t1.size(); k++){
                        for (int j=0; j < t1.size(); j++){
                            for (int i=0; i < t1.size(); i++){
                                if((l<h)&&(h<k)&&(k<j)&&(j<i)){
                                    d = t1[i]+t1[j]+t1[k]+t1[h]+t1[l];
                                    e1 = t2[i]+t2[j]+t2[k]+t2[h]+t2[l];
                                    f1 = t0[i]+t0[j]+t0[k]+t0[h]+t0[l];
                                    t3.push_back(d);
                                    t4.push_back(e1);
                                    t5.push_back(f1);
                                }
                            }
                        }
                    }
                }
            }
        case 4:
            for (int h=0; h < t1.size(); h++){
                for (int k=0; k < t1.size(); k++){
                    for (int j=0; j < t1.size(); j++){
                        for (int i=0; i < t1.size(); i++){
                            if ((h<k)&&(k<j)&&(j<i)){
                                c = t1[i]+t1[j]+t1[k]+t1[h];
                                e2 = t2[i]+t2[j]+t2[k]+t2[h];
                                f2 = t0[i]+t0[j]+t0[k]+t0[h];
                                t3.push_back(c);
                                t4.push_back(e2);
                                t5.push_back(f2);
                            }
                        }
                    }
                }
            }
        case 3:
            for (int k=0; k < t1.size(); k++){
                for (int j=0; j < t1.size(); j++){
                    for (int i=0; i < t1.size(); i++){
                        if ((k<j)&&(j<i)){
                            b  = t1[i]+t1[j]+t1[k];
                            e3 = t2[i]+t2[j]+t2[k];
                            f3 = t0[i]+t0[j]+t0[k];
                            t3.push_back(b);
                            t4.push_back(e3);
                            t5.push_back(f3);
                        }
                    }
                }
            }
        case 2:
            for (int j=0; j < t1.size(); j++){
                for (int i=0; i < t1.size(); i++){
                    if (j<i){
                        a = t1[i]+t1[j];
                        e4 = t2[i]+t2[j];
                        f4 = t0[i]+t0[j];
                        t3.push_back(a);
                        t4.push_back(e4);
                        t5.push_back(f4);
                    }
                }
            }
        case 1:
            for (int i=0; i < t1.size(); i++){
        t3.push_back(t1[i]);
        t4.push_back(t2[i]);
        t5.push_back(t0[i]);
        }
            break;
    }
    
    for (int m=0; m < t3.size(); m++){
        cout << t3[m] << endl;
    }
    cout << endl;
    for(int i=0; i < t4.size(); i++){
        cout << t4[i] << endl;
    }
    cout << endl;
    for(int i=0; i < t5.size(); i++){
        cout << t5[i] << endl;
    }
    cout << endl << t3.size() << endl;
    cout << t4.size() << endl;
    cout << t5.size() << endl;
//    cout << t2[1] << endl;
  //  cout << t1[1] << endl;
//cout << t3[1] << endl << t3[2] << endl;
    
}*/

/*int main(){
    int a1, n1(0), n2(0), n3(0), n4(0), n5(0), n6(0), n7(0), a2, a3, a4, a5, a6, a7;
    long double f;
    srand( static_cast<unsigned int>(time(NULL)));
    for(int i=0; i<1000000 ;i++){
    a1 = rand() % 6 + 1;
    a2 = rand() % 6 + 1;
    a3 = rand() % 6 + 1;
    a4 = rand() % 6 + 1;
    a5 = rand() % 6 + 1;
    a6 = rand() % 6 + 1;
    a7 = rand() % 6 + 1;
        vector<int> dice;
        dice.push_back(a1);
        dice.push_back(a2);
        dice.push_back(a3);
        dice.push_back(a4);
        dice.push_back(a5);
        dice.push_back(a6);
        dice.push_back(a7);
        for (int j=0; j<7; j++){
        switch (dice[j]){
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
            if ((n1>=1)&&(n2>=1)&&(n3>=1)&&(n4>=1)&&(n5>=1)&&(n6>=1)) {n1--; n2--; n3--; n4--; n5--; n6--;n7++;}
            n1=0, n2=0, n3=0, n4=0, n5=0, n6=0;
            dice.clear();
        
    }

    cout << n7 << endl;
    f = (n7/10000000);
    cout << f << endl;
}*/
#include <iostream>
#include <random>
using namespace std;

int main(){
    int a1, n1(0), n2(0), n3(0), n4(0), n5(0), n6(0), n7(0), n8(0), a2, a3, a4, a5, a6, a7;
    random_device rd;
    mt19937 mt(rd());    // The random number generator using a non-deterministic random device
    uniform_int_distribution<int> dist(1,6);    // The distribution that gives us random numbers in [1,6]
    double a=1000000;
    for(int i=0;i<a;i++){
        a1 = dist(mt);
        a2 = dist(mt);
        a3 = dist(mt);
        a4 = dist(mt);
        a5 = dist(mt);
        a6 = dist(mt);
        a7 = dist(mt);
        vector<int> dice;
        dice.push_back(a1);
        dice.push_back(a2);
        dice.push_back(a3);
        dice.push_back(a4);
        dice.push_back(a5);
        dice.push_back(a6);
        dice.push_back(a7);
        for (int j=0; j<dice.size(); j++){
            switch (dice[j]){
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
        
        if ((n1==0)&&(n5==0)&&(n2<3)&&(n3<3)&&(n4<3)&&(n6<3)){ n7++;}
        else{n8++;}
        n1=0, n2=0, n3=0, n4=0, n5=0, n6=0;
        dice.clear();
        
        }
    if(a!=(n7+n8)){cerr << "erreur";}
    cout << n7 << " " << n8 << endl;
    cout << 100*(n7/a) << " " << 100*(n8/a) << endl;
}


/*
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
    int ad=0;
    vector <int> td;
    string w9, w10, w11, w12;
    int i1, i2, i3, i4, i5, i6, i7;
    cin >> i1 >> i2 >> i3 >> i4 >> i5 >> i6 >> i7;
                                des.push_back(i1);
                                des.push_back(i2);
                                des.push_back(i3);
                                des.push_back(i4);
                                des.push_back(i5);
                                des.push_back(i6);
                                des.push_back(i7);
                                ad++;
                                td.push_back(ad);
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
                                    for(int k=0; k < sdesopt.size(); k++){
                                        for (int j=0; j < sptopt.size(); j++){
                                            if ((sdesopt[j]==sdesopt[k])&&(j!=k)&&(j>k)){
                                                if(( k < sptopt.size() ) && ( j < sptopt.size()) &&
                                                   ( k < sdesopt.size() ) && ( j < sdesopt.size()) &&
                                                   ( k < soptch.size() ) && ( j < soptch.size())){
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
                                                    }}}}}//fermeture boucle 1 optimisation
                                    
                                    for (int m=0; m<sdesopt.size(); m++){
                                        for (int j=0; j<sdesopt.size();j++){
                                            if ((j!=m)&&(sdesopt[j]==sdesopt[m])){cerr << "erreur optimisation!";
                                                
                                            }
                                            
                                        }
                                    }
                                    
                                    for(int k=0; k < sdesopt.size(); k++){
                                        for (int j=0; j < sptopt.size(); j++){
                                            if ((sdesopt[j]==sdesopt[k])&&(j!=k)&&(j>k)){
                                                if(( k < sptopt.size() ) && ( j < sptopt.size()) &&
                                                   ( k < sdesopt.size() ) && ( j < sdesopt.size()) &&
                                                   ( k < soptch.size() ) && ( j < soptch.size())){
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
                                                    }}}}}
                                    for (int m=0; m<sdesopt.size(); m++){
                                        for (int j=0; j<sdesopt.size();j++){
                                            if ((j!=m)&&(sdesopt[j]==sdesopt[m])){cerr << "erreur optimisation!";
                                                
                                            }
                                            
                                        }
                                    }



                                    
}
    for (int i=0;i<sdesopt.size();i++){
        cout << sdesopt[i] << " " << sptopt[i] << " " << soptch[i] << " " << endl;
    }
}
*/
