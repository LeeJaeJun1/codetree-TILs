#include <iostream>
using namespace std;

int sum(int N) {
    int co{0};
    for(int i = 1; i <= N; i++){
       co += i;
    }
    return co / 10;
}

int main() {
    int N{0};
    cin >> N;
    int count;
    count = sum(N);
    cout << count;
    return 0;
}