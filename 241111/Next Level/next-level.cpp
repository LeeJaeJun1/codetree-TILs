#include<iostream>
using namespace std;

class Meet {
public:
    string u;
    int i;
    Meet(string user = "codetree", int id = 10) {
        this->u = user;
        this->i = id;
    }
};

int main() {
    string u1;
    int i1;
    cin >> u1 >> i1;
    Meet m1 = Meet();
    cout << "user " << m1.u << " lv " << m1.i << endl;

    m1.u = u1;
    m1.i = i1;

    cout << "user " << m1.u << " lv " << m1.i;
}