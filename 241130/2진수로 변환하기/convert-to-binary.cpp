#include<iostream>
#include<list>
using namespace std;

int main() {
    int n,cnt;
    cin >> n;
    int digits[100];

    while(true) {
        if(n<2) {
            digits[cnt++] = n;
            break;
        }
        digits[cnt++] = n % 2;
        n /= 2;
    }
    for(int i = cnt-1; i>=0; i--) {
        cout << digits[i];
    }
    return 0;
}
