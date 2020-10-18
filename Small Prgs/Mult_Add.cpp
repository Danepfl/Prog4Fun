//
//  main.cpp
//  Multiplication-addition
//
//  Created by Dany on 29. 01. 2017.
//  Copyright © 2017 Dany. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int a, b, c=0;
    cin >> a >> b;
    while(a!=0){
        c += b ;
        a--;
    }
    cout << c << endl;
}
