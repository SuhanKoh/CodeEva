//
//  main.cpp
//  Even Numbers
//
//  Created by Suhan Koh on 12/23/14.
//  Copyright (c) 2014 Suhan Koh. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, const char * argv[]) {
    ifstream IS(argv[1], ios::in);
    string line;
    while(getline(IS, line)){
        string::reverse_iterator line2 = line.rbegin(); // reverse the line
        if(line2[0]%2 == 0){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }
    return 0;
}
