//
//  Bloodhound.cpp
//  DogProject
//
//  Created by Owner on 3/22/24.
//

#include <stdio.h>
#include <iostream>
#include <thread>
#include <cmath>
#include <random>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include "Bloodhound.hpp"
using namespace std;

vector<string> WordLadder:: GetWordsFromFile(ifstream &file){
    
    vector<string> words;
    string word;
    if (file.is_open()){
        
        while(getline(file,word)){
            words.push_back(word);
        }
    
    }
    return words;
}


    
void HasVisited(string word){
    WordLadder w;
    w.HasVisitedWords.push_back(word);
    
}
    

bool WordLadder:: IsVisited(string word, vector<string> words){

        bool isVisited=false;
        for(string WordInList:words){
            if(word==WordInList)
                isVisited=true;
        }
        return isVisited;
    }

bool WordLadder:: CompareWords(string word1, string word2){
    int LetterCount=0;
    
    for(int i=0; i<word1.length(); i++){
        if(word1[i]==word2[i]){
            LetterCount++;
        }
    }
    
    if((LetterCount==word1.length()-2)||(LetterCount==word2.length()-1)){
        return true;
    }
    
    return false;
    
}
void WordLadder::LetPlayWordLadder(string word1, string word2, vector<string> words){
    
    WordLadder w;
    string StartWord,NewWord;
    
    w.HasVisitedWords.push_back(word1);
    
    if(word1.length()==word2.length()){
        StartWord=word1;
        for(string WordInList: words){
           
            
            if(word1.length()==WordInList.length()&&!IsVisited(WordInList, HasVisitedWords)){
                word1=WordInList;
                PrintWord(word1);
                if(word1==word2){
                    break;
                }
            }
            
        }
        
    }
}
      
    
    







   
     
     /*
      
      
      
      int WordLadder:: CheckLettersFromWord(string word1, string word2){
          
          
          int LetterCount=0;
          for(int i=0; i<word1.length(); i++){
              if(word1[i]==word2[i]){
                  LetterCount+=1;
              }
          }
          return LetterCount;
      }

      //string WordLadder:: ReplaceLetter(string word, char letter,int index){
      //
      //    word[index]=letter;
      //    return word;
      //}
      //
      
      //
      //bool WordLadder:: IsVisited(string word, vector<string> words){
      //
      //        bool isVisited=false;
      //        for(string WordInList:words){
      //            if(word==WordInList)
      //                isVisited=true;
      //        }
      //        return isVisited;
      //    }
      for(char letter='a'; letter<='z'; letter++){
          
          
          
          
      }
      for(int i=0; i<word1.length(); i++){
          for(char letter:"abcdefghijklmnopqrstuvwxyz"){
              NewWord=ReplaceLetter(words, word1, letter, i);
              if(IsVisited(NewWord, words)==true&&CheckIfWordIsInList(NewWord, words)==false){
                  word1=NewWord;
                  break;
              }
              
          }
          continue;
      }
      PrintWord(word1);
      LetPlayWordLadder(word1, word2, words);
  }

}
      */
    
    

