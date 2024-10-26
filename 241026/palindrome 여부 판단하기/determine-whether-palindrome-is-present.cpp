#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char *s, int len) {
    for(int i = 0; i < len/2; i++) {
        if(s[i] != s[len-i-1]) {
            return 0;
        }
    }
    return 1;
}


int main() {
    // 여기에 코드를 작성해주세요.
    char str[100];
    cin >> str;
    int length = strlen(str);
    if(isPalindrome(str, length) == 1) {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}