#include<iostream>
using namespace std;

void Add(int &a, int &b) {
    if(a > b) {
        a += 25;
        b *= 2;
    }
    else{
        a *= 2;
        b += 25;
    }
}

int main() {
    int a,b;
    cin >>  a >> b;
    Add(a,b);
    cout << a << " " << b;
}