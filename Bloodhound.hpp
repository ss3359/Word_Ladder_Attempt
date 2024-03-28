//
//  Bloodhound.hpp
//  DogProject
//
//  Created by Owner on 3/22/24.
//

#ifndef Bloodhound_hpp
#define Bloodhound_hpp

#include <stdio.h>
#include <iostream>
#include <thread>
#include <cmath>
#include <random>
#include <vector>
#include <map>
#include <string>
#include <fstream>

using namespace std;


class WordLadder{
    
public:
    vector<string> HasVisitedWords; 

    void PrintWord(string word){
        cout<<word<<endl;
    }
    void LetPlayWordLadder(string word1, string word2,vector<string> words);
    vector<string> GetWordsFromFile(ifstream &file);
    bool HasVisited(string word);
    bool IsVisited(string word, vector<string> words);
    bool CompareWords(string word1, string word2); 
};
#endif /* Bloodhound_hpp */
