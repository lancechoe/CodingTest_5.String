/*
Problem
Write a program that takes a word consisting only of alphabetic characters and prints its length.

Input
The first line contains a word consisting only of uppercase and lowercase English letters. The length of the word is at most 100.

Output
Print the length of the input word.
*/

#include <iostream>
using namespace std;

int main(){
    string word;

    cin >> word;

    cout << word.size();
}