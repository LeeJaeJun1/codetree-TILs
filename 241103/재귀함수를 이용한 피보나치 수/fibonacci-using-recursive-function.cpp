#include<iostream>
using namespace std;

int Fibonaci(int n) {
    if(n==1) {
        return 1;
    }

    if(n==2) {
        return 1;
    }

    return Fibonaci(n-1) + Fibonaci(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << Fibonaci(n);
}