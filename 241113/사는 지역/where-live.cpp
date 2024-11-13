#include<iostream>
using namespace std;

class Data{
public:
    string name;
    string address;
    string local;

    Data(string n = "", string a = "", string l = "") {
        this->name = n;
        this->address = a;
        this->local = l;
    }
};

int main() {
    int n;
    cin >> n;
    Data d[n];
    string na, ad, lo;
    for(int i = 0; i < n; i++) {
        cin >> na >> ad >> lo;
        d[i] = Data(na,ad,lo);
    }

    int min = 0;
    for(int j = 1; j < n; j++) {
        if(d[j].name > d[min].name) {
            min = j;
        }
    }

    cout << "name " << d[min].name << endl;
    cout << "addr " << d[min].address << endl;
    cout << "city " << d[min].local << endl;
}