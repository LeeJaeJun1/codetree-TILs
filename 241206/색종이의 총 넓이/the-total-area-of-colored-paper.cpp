#include<iostream>
using namespace std;

int main() {
    int N,a,b;
    int total = 0;
    int arr1[200][200] = {};
    cin >> N;
    for(int i = 0; i < N; i++ ) {
        cin >> a >> b;
        for(int j = a; j < a + 8; j++) {
            for(int k = b; k < b + 8; k++) {
                if(arr1[j][k]) {
                    continue;
                }
                arr1[j][k] = 1;
                total++;
            }
        }
    }
    cout << total;
}