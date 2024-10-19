#include <iostream>
#include<cmath>
using namespace std;

int Power(int n, int m) {
    int cnt = 1;
    for(int i = 1; i <= m; i++) {
        cnt *= n;
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int b;
    cin >> a >> b;
    cout << Power(a,b);
    return 0;
}