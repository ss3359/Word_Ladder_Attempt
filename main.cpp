//
//  main.cpp
//  DogProject
//
//  Created by Owner on 3/14/24.
//

#include <iostream>
#include <thread>
#include <cmath>
#include <random>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include "Maltese.hpp"
#include "Bloodhound.hpp"
using namespace std;


//This is the Lewis Caroll Letter Ladder Puzzle Program.

int main(){
    WordLadder w;
    ifstream myFile("/Users/owner/Downloads/words.txt",ios::in);
    
//    vector<string> words=w.GetWordsFromFile(myFile);
    vector<string> words={"hot","dot","dog","lot","log","cog"};
    
    string word1, word2;

    cout<<"Enter First Word: "<<endl;
    cin>>word1;
    cout<<"Enter Second Word: "<<endl;
    cin>>word2;
    
    w.LetPlayWordLadder(word1, word2, words);
    
    
    return 0;
       
    }
    




/*
 Excess Code:
 //    for(string word:words)
 //        cout<<word<<endl;
 
 struct CityInfo{
     
     string city;
     double population;
     double latitude, longitude;
 };

 void PrintCity(map<string, double> List){
     
     for(auto city:List){
         cout<<"City: "<<city.first<<" Population: "<<city.second<<"\n\n";
         this_thread::sleep_for(2s);
     }
         
 }

 int main(){
        
    
     

     map<string,double> CityList={
         {"Arvada", 123436},
         {"Denver", 711463},
         {"Loveland", 110321}

     };
     
     map<string,double> MainCityList={
         {"Orlando", 123437},
         {"Key West", 711465},
         {"Tampa", 110322}

     };
     
     thread t(PrintCity,CityList);
     t.join();
     
     for(auto city:MainCityList){
         cout<<"City: "<<city.first<<" Population: "<<city.second<<"\n\n";
         this_thread::sleep_for(2s);
     }
     
 
 //for loop for array.
 int numbers[4]={0,1,2,3};
//    for(auto number:numbers)
//        cout<<"Number: "<<number<<endl;
//
 //Function Template
 //template<class T>
 //T AddNumbers (T x, T y){
 //
 //
 //    return x+y;
 //}

 */
//
