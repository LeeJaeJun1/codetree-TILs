#include<iostream>
using namespace std;

// 3,6,9 중 하나가 들어가 있거나 or 그 숫자 자체가 3의 배수
// num / 10 == 3,6,9 and num % 10 == 3,6,9 or num % 3 == 0

// 3,6,9 숫자가 포함되었는지
bool Game(int num) {
    while(num > 0) {
        if ((num / 10 == 3 || num / 10 == 6 || num / 10 == 9 || num % 10 == 3 || num % 10 == 6 || num % 10 == 9)) {
            return true;
        }
        num /= 10;
    }
    return false;
}

bool trueGame(int n) { // 3,6,9가 들어있거나 3의 배수인지 판단.
    return Game(n) || (n%3==0);
}
int main() {
    int a,b;
    int count = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(trueGame(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}