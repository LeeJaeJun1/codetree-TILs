#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main() {
    int n;
    string arr1[100];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    sort(arr1, arr1+n);

    for(int j = 0; j < n; j++) {
        cout << arr1[j] << endl;
    }
}