//
//  main.cpp
//  String Searching
//
//  Created by Suhan Koh on 1/5/15.
//  Copyright (c) 2015 Suhan Koh. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    string word;
    
    fstream IS(argv[1], ios::in);
    while(IS>>word){
        cout << word <<endl;
    }
    
    return 0;
}
