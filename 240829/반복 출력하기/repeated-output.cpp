#include <iostream>
using namespace std;

void Print(int n) {
    for(int i = 0; i < n; i++) {
        cout << "12345^&*()_" << "\n";
    }
}



int main() {
    int count{0};
    cin >> count;
    Print(count);
    return 0;
}