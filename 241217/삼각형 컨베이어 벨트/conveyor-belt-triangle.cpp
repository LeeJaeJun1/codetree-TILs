#include<iostream>
using namespace std;

int main() {
    int n,t,num; cin >> n >> t;
    int arr1[1000] = {}; int arr2[1000] = {}; int arr3[1000] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for(int j = 0; j < n; j++) {
        cin >> arr2[j];
    }

    for(int k = 0; k < n; k++) {
        cin >> arr3[k];
    }

    while(t--) {
        int temp = arr1[n-1]; int temp1 = arr2[n-1]; int temp2 = arr3[n-1];
        for(int a = n-1; a >= 1; a--) {
            arr1[a] = arr1[a-1];
        }
        arr1[0] = arr3[n-1];

        for(int b = n-1; b >= 1; b--) {
            arr2[b] = arr2[b-1];
        }
        arr2[0] = temp;

        for(int c = n - 1; c >= 1; c--) {
            arr3[c] = arr3[c-1];
        }
        arr3[0] = temp1;
    }

    for(int i = 0; i < n; i++) {
        cout <<  arr1[i] << " ";
    }
    cout << endl;
    for(int j = 0; j < n; j++) {
        cout << arr2[j] << " ";
    }
    cout << endl;
    for(int k = 0; k < n; k++) {
        cout << arr3[k] << " ";
    }
}