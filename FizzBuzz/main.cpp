//
//  main.cpp
//  FizzBuzz
//
//  Created by Suhan Koh on 12/22/14.
//  Copyright (c) 2014 Suhan Koh. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream IS(argv[1], ios::in);
    int X, Y, N;
    while( IS >> X >> Y >> N){
    
        for (int i = 1; i<= N; i++) {
            if(i%X == 0){
                if(i%Y ==0){cout << "FB";
                }else{
                    cout << "F";
                }
            }else if(i%Y == 0){
                cout << "B";
            }else{
                cout << i;
            }
            if(i != N){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    IS.close();
    system("PAUSE");
    return 0;
}
