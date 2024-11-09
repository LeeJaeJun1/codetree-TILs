#include<iostream>
#include<algorithm>
using namespace std;

string s1,s2;

bool equal() {
    if(s1.length() != s2.length()) {
        return false;
    }

    for(int i = 0; i < s1.length(); i++) {
        if(s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> s1 >> s2;

    sort(s1.begin(),s1.end());
    sort(s2.begin(), s2.end());

    if(equal()) {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}