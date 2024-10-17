#include <iostream>
using namespace std;

int True(int n) {

    if(n % 2 == 0 && ((n / 10 + n % 10) % 5 == 0 )) {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    True(n);
    return 0;
}