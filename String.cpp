/*
Problem
Write a program that takes a string as input and prints its first and last character.

Input
The first line contains an integer T (1 ≤ T ≤ 10), the number of test cases.
Each test case consists of a single line containing a string.
The string consists of uppercase letters (A-Z) without spaces and has a length of less than 1000.

Output
For each test case, print the first and last character of the given string consecutively.
*/

#include <iostream>
using namespace std;

int main(){
    int N;

    cin >> N;
    
    string word;

    for(int i=0;i<N;i++){
        cin >> word;
        cout << word[0] << word[word.size()-1] << "\n";
    }
}