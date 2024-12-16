#include<iostream>
using namespace std;

int main() {
    int n,t;
    cin >> n >> t;
    int arr1[1000] = {}; int arr2[1000] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for(int j = 0; j < n; j++) {
        cin >> arr2[j];
    }

    while(t--) {
        int temp1 = arr2[n-1];
        int temp2 = arr1[n-1];

        for(int a = n-1; a>=1; a--) {
            arr1[a] = arr1[a-1];
            arr2[a] = arr2[a-1];
        }
        arr1[0] = temp1;
        arr2[0] = temp2;
    }

    for(int b = 0; b < n; b++) {
        cout << arr1[b] << " ";
    }
    cout << endl;
    for(int c = 0; c < n; c++) {
        cout << arr2[c] << " ";
    }
}