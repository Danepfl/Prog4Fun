//
//  main.cpp
//  DL test 1
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2017 Dany. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

long double DL(int fx, int x, int x0, int n){
    int dlx;
    dlx = fx*x*x0*n;
    return dlx;
}

int main(){
    int fx,x,x0,n,dlx;
    cin >> fx >> x >> x0 >> n;
    dlx=DL(fx,x,x0,n);
    cout << dlx << endl;
}
