#include <iostream>
using namespace std;

void star(int n) {
    if(n==0) {
        return;
    }

    for(int j = n; j>=1; j--) {
        cout << "*" << " ";
    }
    cout << endl;

    star(n-1);

}

void star1(int n1) {
    if(n1==0) {
        return;
    }

    star1(n1-1);
    for(int i = 1; i <= n1; i++) {
        cout << "*" << " ";
    }
    cout << endl;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    star(N);
    star1(N);
    return 0;
}