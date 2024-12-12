#include<iostream>
#include<stack>
using namespace std;

int main() {
    string ch;
    stack<string> st;
    cin >> ch;
    bool b = true;
    for(int i = 0; i < ch.size(); i++) {
        if(ch[i] == '(') {
            st.push("(");
        }
        else{
            if(st.empty()) {
                cout << "No";
                return 0;
            }
            st.pop();
        }
    }
    if(st.empty()) {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}