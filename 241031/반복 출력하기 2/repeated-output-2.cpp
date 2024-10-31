#include <iostream>
using namespace std;

void Print(int N) {
    if(N==0) {
        return;
    }

    Print(N-1);
    for(int i = 0; i < 1; i++) {
        cout << "HelloWorld";
        cout << "\n";
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Print(n);
    return 0;
}