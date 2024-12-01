#include<iostream>
using namespace std;

int main() {
    int N,x1,x2;
    int max = 0;
    int arr1[100] = {};
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> x1 >> x2;
        for(int j = x1; j < x2; j++) {
            arr1[j]++;
            if(max < arr1[j]) {
                max = arr1[j];
            }
        }
    }
    cout << max;
}

