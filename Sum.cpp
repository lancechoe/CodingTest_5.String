/*
Problem
A sequence of 
𝑁
N digits is given without spaces. Write a program that calculates and prints the sum of these digits.

Input
The first line contains an integer 
𝑁
N (1 ≤ 
𝑁
N ≤ 100), representing the number of digits.
The second line contains 
𝑁
N digits written consecutively without spaces.

Output
Print the sum of the 
𝑁
N digits given in the input.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    string a;
    int sum = 0;

    cin >> n;

    cin >> a;

    for(int i=0;i<n;i++){
        sum += (int)a[i] - '0';
    }

    cout << sum;
}