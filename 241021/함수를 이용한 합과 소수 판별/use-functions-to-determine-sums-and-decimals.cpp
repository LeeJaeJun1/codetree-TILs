#include<iostream>
using namespace std;

// a이상 b이하 수 중 소수이면서 모든 자릿수의 합이 짝수인 수의 개수
// 소수 : 1과 자기 자신만을 약수로 갖는 수

int Prime(int a) { // 소수 판별하는 함수 Prime
    if(a==1) {
        return false;
    }
    for(int i = 2; i<a; i++) {
        if(a%i==0) {
            return false;
        }
    }
    return true;
}

bool Even(int b) { // 소수이면서 모든 자릿수의 합이 짝수인지를 판별하는 함수
    int count;
    if(Prime(b) == 1 && ((b/10+b%10)%2==0)) {
        return true;
    }
    return false;
}

bool Final(int c) { // 소수이면서 모든 자릿수의 합이 짝수인 숫자 개수를 카운트하는 함수
    if(Prime(c) && Even((c))) {
        return true;
    }
    return false;
}

int main() {
    int a,b;
    int number = 0;
    cin >> a >> b;
    for(int j = a; j<=b; j++) {
        if(Final(j)) {
            number++;
        }
    }
    cout << number;
    return 0;
}