/*
문제
For this problem, you will write a program that takes a string of characters, S, and creates a new string of characters, T, with each character repeated R times. That is, R copies of the first character of S, followed by R copies of the second character of S, and so on. Valid characters for S are the QR Code "alphanumeric" characters:

0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%*+-./:
입력
The first line of input contains a single integer P, ( 1 ≤ P ≤ 1000), which is the number of data sets that follow. Each data set is a single line of input consisting of the data set number N, followed by a space, followed by the repeat count R, ( 1 ≤ R ≤ 8), followed by a space, followed by the string S. The length of string S will always be at least one and no more than 20 characters. All the characters will be from the set of characters shown above.

출력
For each data set there is one line of output. It contains the data set number, N, followed by a single space which is then followed by the new string T, which is made of each character in S repeated R times.
*/

#include <iostream>
using namespace std;

int main(){
    int T;
    int a=0;
    string word;

    cin >> T;

    for(int i=0;i<T;i++){
        cin >> a >> word;

        for(int j=0;j<word.size();j++){
            for(int k=0;k<a;k++){
                cout << word[j] ;
            }
        }

        cout << "\n";
    }
}