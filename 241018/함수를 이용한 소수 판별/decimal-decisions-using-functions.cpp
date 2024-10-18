#include <iostream>
using namespace std;

bool prime(int n) {
    if(n==1) {  // n이 1일 때 소수 아니기 때문
        return false;
    }
    for(int i = 2; i < n; i++) {
        if(n%i == 0) { // 2부터 n까지 n을 나눴을 때 0이라는 것은 소수가 아니다.
            return false;
        }
    } 
    return true;
}

int main() {
    int a{0};
    int b{0};
    int count{0};
    cin >> a >> b;
    for(int j=a; j<=b; j++) {
        if(prime(j)) {
            count += j;
        }
    }
    cout << count;
    return 0;
}