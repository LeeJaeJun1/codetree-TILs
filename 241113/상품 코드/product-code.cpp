#include<iostream>
using namespace std;

class product{
public:
    string name;
    int code;

    product(string s = "codetree", int c = 50) {
        this->name = s;
        this->code = c;
    }
};

int main() {
    string na;
    int co;
    cin >> na >> co;

    product p1 = product();
    cout << "product " << p1.code << " is " << p1.name << endl;

    product p2 = product(na,co);
    cout << "product " << p2.code << " is " << p2.name;
}