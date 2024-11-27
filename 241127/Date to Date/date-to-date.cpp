#include<iostream>
using namespace std;

int numofdays(int m, int n) {
    int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int total = 0;

    for(int i = 1; i < m; i++){
        total += days[i];
    }
    total += n;

    return total;
}

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << numofdays(c,d) - numofdays(a,b) + 1;
}