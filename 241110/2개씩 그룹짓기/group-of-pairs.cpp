#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    int max = 0;
    cin >> n;
    int arr1[100];

    for(int i = 0; i < 2 * n; i++) {
        cin >> arr1[i];
    }

    sort(arr1, arr1+2*n);

    for(int k = 0; k < n; k++) {
       int sum = arr1[k] + arr1[2 * n - 1 - k];
       if(sum > max) {
           max = sum;
       }
    }
    cout << max;
}