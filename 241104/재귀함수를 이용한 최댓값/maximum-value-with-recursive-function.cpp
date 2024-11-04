#include<iostream>
using namespace std;

int arr1[100];

int maxValue(int a) {
    if(a==0) {
        return arr1[0];
    }

    return max(maxValue(a-1), arr1[a]);
}


int main() {
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++) {
        cin >> arr1[i];
    }
    cout << maxValue(n);
}