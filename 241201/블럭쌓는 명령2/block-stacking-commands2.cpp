#include<iostream>
using namespace std;

int main() {
    int N,K,fi,la;
    int max = 0;
    cin >> N >> K;
    int arr1[100] = {};
    for(int i = 0; i < K; i++) {
        cin >> fi >> la;
        for(int j = fi; j <= la; j++) {
            arr1[j]++;
        }
    }
    for(int k = 1; k <= N; k++) {
        if(arr1[k] > max) {
            max = arr1[k];
        }
    }
    cout << max;
}
