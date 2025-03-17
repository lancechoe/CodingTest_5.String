/*
Problem
Write a program that prints the input as it is.

Input
The input consists of up to 100 lines and contains only lowercase letters, uppercase letters, spaces, and numbers.
Each line does not exceed 100 characters, and there are no empty lines.
Additionally, each line does not start or end with a space.

Output
Print the input exactly as it is received.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    
    while (getline(cin, line)) {  // EOF까지 한 줄씩 입력 받기
        cout << line << endl;     // 입력받은 줄 그대로 출력
    }

    return 0;
}
