#include<iostream>
using namespace std;

int Truecount(int a, int b) {
    int count;
    for(int i = a; i<=b; i++) {
        if (i % 2 != 0 && i % 10 != 5 && (i % 3 != 0 || i % 9 == 0)) {
                    count += 1;
                }
            }
    return count;
}


int main() {
    int a,b;
    int count = 0;
    cin >> a >> b;
    cout << Truecount(a,b);
    return 0;
}

// 온전수란 다음 조건 모두 만족하지 않는 수
// 2로 나누어 떨어지는 경우
// 일의 자리가 5인 경우
// 3으로 나누어 떨어지면서 9로 나누어 떨어지지 않는 수 3의 배수 and 9의 배수x

// 1. 2로 나누어 떨어지지 않고, 
// 2. 일의 자리가 5가 아니며
// 3. 3으로 나누어 떨어지지 않거나, 9로 나누어 떨어진다. 3의 배수x or 9의 배수