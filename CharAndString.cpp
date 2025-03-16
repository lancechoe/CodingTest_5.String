/*
Problem
Given a word 
𝑆
S and an integer 
𝑖
i, write a program that prints the 
𝑖
ith character of 
𝑆
S.
*/

#include <iostream>
using namespace std;

int main(){
    string word;
    int N;

    cin >> word;
    cin >> N;
    cout << word[N-1];
}