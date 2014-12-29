//
//  main.cpp
//  Bit Position
//
//  Created by Suhan Koh on 12/29/14.
//  Copyright (c) 2014 Suhan Koh. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    int number, p1, p2;
    char comma;
    ifstream IS(argv[1], ios::in);
    while(IS>>number >> comma >> p1 >> comma >>p2){
        int counter = 0, bit = 0;
        while( number > 0){
            bit = number % 2;
            number = number / 2;
            counter++;
            if(counter == p1){
                p1 = bit;
            }
            if(counter == p2){
                p2 = bit;
                //since we don't need to solve for the whole binary expression, I chose to break the calculation loop.
                break;
            }
        }
        if(p1 == p2){
            cout<< "true" << endl;
        }else{
            cout << "false" << endl;
        }
    }
    return 0;
}
