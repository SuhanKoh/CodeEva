//
//  main.cpp
//  Reverse Words
//
//  Created by Suhan Koh on 12/29/14.
//  Copyright (c) 2014 Suhan Koh. All rights reserved.
//

#include <iostream>
#include <list>
#include <fstream>
#include <deque>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream IS(argv[1], ios::in);
    string line;
    while(getline(IS, line)){
        string append;
        deque<string> reverseWord;
        for(int i = 0; i < line.length(); i++){
            if(line[i] == ' '){
                reverseWord.push_back(append);
                if((i+1)!= line.length()){
                    reverseWord.push_back(" ");
                }
                append = "";
            }else if((i+1) == line.length()){
                append += line[i];
                reverseWord.push_back(append);
            }else{
                append += line[i];
            }
        }
        
        while(!reverseWord.empty()){
            cout << reverseWord.back();
            reverseWord.pop_back();
        }
        cout<<endl;
    }
    return 0;
}
