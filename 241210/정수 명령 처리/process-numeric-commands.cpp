#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
    int m,num;
    cin >> m;
    stack<int> s;
    string command;
    for(int i = 0; i < m; i++) {
        cin >> command;
        if(command == "push") {
            cin >> num;
            s.push(num);
        }
        else if(command == "size") {
            cout << s.size() << endl;
        }
        else if(command == "empty") {
            if(s.empty()) {
                cout << "1" << endl;
            }
            else{
                cout << "0" << endl;
            }
        }
        else if(command == "pop") {
            cout << s.top() << endl;
            s.pop();
        }
        else{
            cout << s.top() << endl;
        }
    }
}