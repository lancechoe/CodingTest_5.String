/*
Problem
Write a program that prints the ASCII code value of a given character, which is one of the following: a lowercase letter, an uppercase letter, or a digit (0-9).

Input
A single character (a lowercase letter, an uppercase letter, or a digit) is given on the first line.

Output
Print the ASCII code value of the given character.
*/

#include <iostream>
using namespace std;

int main(){
    char a;

    cin >> a;
    cout << (int)a;
}