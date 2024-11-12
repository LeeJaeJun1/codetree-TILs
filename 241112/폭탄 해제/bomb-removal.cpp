#include<iostream>
using namespace std;

class bomb{
public:
    string code;
    string color;
    int sec;

    bomb(string c = "", string co = "", int s = 0) {
        this->code = c;
        this->color = co;
        this->sec = s;
    }
};

int main() {
    string c, co;
    int s;
    cin >> c >> co >> s;

    bomb b1 = bomb(c,co,s);

    cout << "code : " << b1.code << endl;
    cout << "color : " << b1.color << endl;
    cout << "second : " << b1.sec << endl;
}