#include <iostream>
using namespace std;

int gcd(int n, int m) {
    if(m==0) {
        return n;
    }
    else {
        return gcd(m, n%m);
    }
}

int lcd(int n, int m) {
    return (n*m) / gcd(n,m);
}

int main() {
    int n,m = 0;
    int count;
    cin >> n >> m;
    count = lcd(n,m);
    cout << count;
    return 0;
}