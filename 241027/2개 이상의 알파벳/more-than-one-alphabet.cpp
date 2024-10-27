#include <iostream>
using namespace std;

// 소문자 알파벳 문자열 A, 서로 다른 알파벳의 수가 2개 이상인

string A;

bool twoUp(string &s) {
    for(int i = 0; i < s.length(); i++) {
        for(int j = 1; j < s.length(); j++) {
            if(s[i] != s[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    cin >> A;
    if(twoUp(A)) {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}