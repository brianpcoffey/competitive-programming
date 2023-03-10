#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//Solution #1
int lengthOfLastWord(string s) {
    stringstream ss(s);
    string temp;
    while(ss>>temp) {}
    return temp.size();
}

//Solution #2
/*
int lengthOfLastWord(string s) {
    int i = s.size() - 1, cnt = 0;
    while (i >= 0 && s[i] == ' ') { i--; }
    while (i >= 0 && s[i] != ' ') { i--; cnt++; }
    return cnt;
}
*/

//compile with "g++ -std=c++11 LengthLastWord.cpp"
int main() {
    (lengthOfLastWord("The cat  flew out of the window") == 6) ? cout << "TEST #1 PASSED" << endl : cout << "TEST #1 FAILED" << endl;
    (lengthOfLastWord("hippos are      cool        ") == 4) ? cout << "TEST #2 PASSED" << endl : cout << "TEST #2 FAILED" << endl;
    (lengthOfLastWord("        sixteen              ") == 7) ? cout << "TEST #3 PASSED" << endl : cout << "TEST #3 FAILED" << endl;
    (lengthOfLastWord("bob") == 3) ? cout << "TEST #4 PASSED" << endl : cout << "TEST #4 FAILED" << endl;
    (lengthOfLastWord("i") == 1) ? cout << "TEST #5 PASSED" << endl : cout << "TEST #5 FAILED" << endl;
    return 0;
}
