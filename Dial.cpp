/*
문제
Mirko's grandma still uses an ancient pulse dial telephone with a rotary dial as shown in the following picture:

For each digit that we want to dial, we need to turn the rotary dial clockwise until the chosen digit reaches the finger stop (metal fin). Then we let go of the dial and wait for it to return to its original position before we can dial another digit. In our modern, instant gratification world, the dial return often lasts much longer than our patience. More precisely, dialling the digit 1 takes a total of two seconds, while dialling any larger digit takes an additional second for each additional finger circle counting from 1 to the dialled digit (as shown in the picture).

Mirko's grandma remembers phone numbers by memorizing a corresponding word which, when dialled, results in the correct number being dialled. When dialling a word, for each letter, we dial the digit which has that letter written next to it on the dial (for example, the digit 7 for the letter S). For example, the word UNUCIC corresponds to the number 868242. Your task is determining, for a given word, the total time required to dial that word.

입력
The first and only line of input contains a single word consisting of between 2 and 15 (inclusive) uppercase English letters.

출력
The first and only line of output must contain the required dialling time.
*/

#include <iostream>
using namespace std;

int main(){
    string NUM;
    int sum = 0;

    cin >> NUM;

    for(int i=0;i<NUM.size();i++){
        if(65 <= (int)NUM[i] && (int)NUM[i] <= 67){
            sum += 3;
        }
        else if(68 <= (int)NUM[i] && (int)NUM[i] <= 70){
            sum += 4;
        }
        else if(71 <= (int)NUM[i] && (int)NUM[i] <= 73){
            sum += 5;
        }
        else if(74 <= (int)NUM[i] && (int)NUM[i] <= 76){
            sum += 6;
        }
        else if(77 <= (int)NUM[i] && (int)NUM[i] <= 79){
            sum += 7;
        }
        else if(80 <= (int)NUM[i] && (int)NUM[i] <= 83){
            sum += 8;
        }
        else if(84 <= (int)NUM[i] && (int)NUM[i] <= 86){
            sum += 9;
        }
        else if(87 <= (int)NUM[i] && (int)NUM[i] <= 90){
            sum += 10;
        }
    }

    cout << sum;
}