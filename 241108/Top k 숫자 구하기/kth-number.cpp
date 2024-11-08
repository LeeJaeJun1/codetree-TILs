#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int arr1[100];

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    sort(arr1, arr1+n);

    cout << arr1[k-1];
}