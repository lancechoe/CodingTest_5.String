/*
Problem
You are given a word 
𝑆
S consisting only of lowercase English letters. For each letter from 'a' to 'z', print the index of its first occurrence in the word. If a letter does not appear in the word, print -1.

Input
The first line contains the word 
𝑆
S. The length of 
𝑆
S does not exceed 100 and consists only of lowercase English letters.

Output
For each letter from 'a' to 'z', print the index of its first occurrence in 
𝑆
S, separated by spaces.
If a letter is not present in the word, print -1 for that letter.
The first character in the word has an index of 0, the second character has an index of 1, and so on.
*/

#include <iostream>
using namespace std;

int main(){
    string word;
    int num[26];
    int idx = 0;

    for(int i = 0 ; i<26 ; i++){
        num[i] = -1;
    }

    cin >> word;

    for(int i=0;i<word.size();i++){
       idx = word[i] - 97; // 1, 0, 4

       if(num[idx] == -1){
        num[idx] = i;
       }
    }

    for (int i = 0; i < 26; i++){
        cout << num[i] << " ";
    }

/*
baekjoon
a = 97
idx = 'b' - 97 = 1 (1번째)
      'a' - 97 = 0 (2번째)
      'e' - 97 = 4 (3번째)
      ...

num[idx] = i
*/

}