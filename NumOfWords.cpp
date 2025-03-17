/*
Problem
You are given a string consisting of uppercase and lowercase English letters and spaces. Write a program to count the number of words in the string. Each occurrence of a word should be counted.

Input
The first line contains a string consisting of uppercase and lowercase English letters and spaces. The length of the string does not exceed 1,000,000. Words are separated by a single space, and there are no consecutive spaces. The string may start or end with a space.

Output
Print the number of words in the string.
*/

#include <iostream>
using namespace std;

int main(){
    int n=1;
    string phrase;

    getline(cin, phrase);

    if(phrase.size() == 1 && phrase[0] == ' '){
        n = 0;
    }
    
    for(int j=0;j<phrase.size();j++){
        if(phrase[j] != ' '){
            for(int i=j;i<phrase.size();i++){
                if(phrase[i] == ' ' && i != phrase.size()-1){
                    n++;
                }
            }
        }
        else{
            continue;
        }
        break;
    }

    cout << n;
}