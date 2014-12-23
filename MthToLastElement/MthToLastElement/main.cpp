//
//  main.cpp
//  MthToLastElement
//
//  Created by Suhan Koh on 12/22/14.
//  Copyright (c) 2014 Suhan Koh. All rights reserved.
//

#include <iostream>
#include <list>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream IS(argv[1], ios::in);
    string line;
   // list<string> li;
    while(getline(IS, line)){
        string::reverse_iterator line2 = line.rbegin(); // reverse the line
        int i = 0; //double or single digit checker
        int mth, spaceCount = 0;
        string number = "";
        
        //see if it's double or single digit mth
        while(line2[i] != ' '){
            i++;
        }
        i--;
        
        //append if it wasn't a single digit, 12 will become 21, so had to append it from the beginning
        for(int j = i; j >=0 ; j--){
            number += line2[j];
        }

        mth = stoi(number);

        //count space then print.
        for(int k = 0; k <= line.size(); k++  ){
            if(line2[k] == ' '){
                spaceCount++;
            }
            if(spaceCount == mth){
                cout << line2[k+1]<<endl;
                
                break;
            }
        }
    }
    return 0;
}
