#include<iostream>
using namespace std;

// 3,6,9 중 하나가 들어가 있거나 or 그 숫자 자체가 3의 배수
// num / 10 == 3,6,9 and num % 10 == 3,6,9 or num % 3 == 0

bool Game(int num) {
    while(num > 0) {
        if ((num / 10 == 3 || num / 10 == 6 || num / 10 == 9 || num % 10 == 3 || num % 10 == 6 || num % 10 == 9)
            || num % 3 == 0) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    int a,b;
    int count = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(Game(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}