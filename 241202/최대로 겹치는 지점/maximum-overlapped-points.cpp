#include<iostream>
using namespace std;

int main() {
    int n,a,b;
    int max = 0;
    cin >> n;
    int arr1[100] = {};
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        for(int j = a; j <= b; j++) {
            arr1[j]++;
            if(max < arr1[j]) {
                max = arr1[j];
            }
        }
    }
    cout << max;
    return 0;
}