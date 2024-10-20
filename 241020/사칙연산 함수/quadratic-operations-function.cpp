#include <iostream>
using namespace std;

// +,-./,* 4개의 함수 작성, /의 결과는 정수 부분 출력

int Plus(int a, int c) {
    return a + c;
}

int Minus(int a, int c) {
    return a - c;
}

int Mutiple(int a, int c) {
    return a * c;
}

int Divide(int a, int c) {
    return a / c;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a,c; // 두 정수값
    string o; // 연산식(문자)
    cin >> a >> o >> c;

    if(o == "+") {
        cout << a << " + " << c << " = " << Plus(a,c);
    }

    else if(o == "-") {
        cout << a << " - " << c << " = " << Minus(a,c);
    }

    else if(o == "*") {
        cout << a << " * " << c << " = " << Mutiple(a,c);
    }

    else if(o == "/") {
        cout << a << " / " << c << " = " << Divide(a,c);
    }
    else{
        cout << "False";
    }
    return 0;
}