#include <iostream>
using namespace std;

int gcd(int n, int m) {
    if(m == 0) {
        return n;
    }
    return gcd(m, n%m);
}

int main() {
    int n{0};
    int m{0};
    int common;
    cin >> n >> m;
    if(n>m)
      common = gcd(n,m);
    else
      common = gcd(m,n);
    cout << common;
    return 0;
}