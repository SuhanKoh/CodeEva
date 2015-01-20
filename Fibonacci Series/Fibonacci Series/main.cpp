//
//  main.cpp
//  Fibonacci Series
//
//  Created by Suhan Koh on 12/29/14.
//  Copyright (c) 2014 Suhan Koh. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;


int F(int m){
    if(m == 0)return 0;
    if(m == 1)return 1;
    return F(m-1)+F(m-2);
}

int main(int argc, const char * argv[]) {
    fstream IS(argv[1], ios::in);
    int n;
    while(IS >> n){
        cout << F(n) << endl;
    }
    IS.close();
    return 0;
}
