#include<iostream>
using namespace std;

class Meet {
public:
    string c,m;
    int t;
    Meet(string code, string meet, int time) {
        this->c = code;
        this->m = meet;
        this->t = time;
    }
};

int main() {
    string c,m;
    int t;
    cin >> c >> m >> t;
    Meet m1 = Meet(c,m,t);

    cout << "secret code : " << m1.c << endl;
    cout << "meeting point : " << m1.m << endl;
    cout << "time : " << m1.t;
}