#include <iostream>
using namespace std;

void first(int n) {
    if(n==0) {
        return;
    }

    first(n-1);
    cout << n << " ";

}

void second(int m) {
    if(m==0) {
        return;
    }

    cout << m << " ";
    second(m-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    first(N);
    cout << "\n";
    second(N);
    return 0;
}