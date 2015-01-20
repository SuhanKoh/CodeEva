//
//  main.cpp
//  Lettercase Percentage Ratio
//
//  Created by Suhan Koh on 12/29/14.
//  Copyright (c) 2014 Suhan Koh. All rights reserved.
//


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    ifstream IS(argv[1], ios::in);
    string line;
    while(getline(IS, line)){
        double lowerCase = 0, upperCase = 0;
        for(int i = 0; i < line.length(); i++){
            if(isupper(line[i])){
                upperCase++;
            }else if(islower(line[i])){
                lowerCase++;
            }
        }

        cout << "lowercase: " << setprecision(2)<< fixed << (double)lowerCase/line.length()*100;
        cout << " uppercase: " << (double)upperCase/line.length()*100;
        cout<<endl;
    }
    return 0;
}
