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
            if(arr1[j] > max) {
                max = arr1[j];
            }
        }
    }
    cout << max;
}