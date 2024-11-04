#include<iostream>
using namespace std;

// 정수 N이 홀수일 경우 1부터 N까지의 홀수 합
// 정수 n이 짝수일 경우 1부터 n까지의 짝수 합

int add(int n) {
    int total = 0;

    if(n % 2 == 0) {
        for(int i = 2; i <= n; i+=2) {
            total += i;
        }
    }

    else {
        for(int j = 1; j <= n; j+=2) {
            total += j;
        }
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    cout << add(n);
}