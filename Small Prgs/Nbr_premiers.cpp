//
//  main.cpp
//  Nombres premiers
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2017 Dany. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    double a, b;
    int c(0);
    for(int i=1; i<1000000; i++){
        for(int j=1; j<i; j++){
            a=double(i)/double(j);
            b=int(a);
            
            if(b==a&&j!=1){
                c=1;
            }
  
            
        }
        if(c==0){cout << i << endl;}
        c=0;
    }
}
