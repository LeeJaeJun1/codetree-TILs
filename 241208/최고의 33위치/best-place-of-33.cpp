#include<iostream>
using namespace std;

int arr1[20][20] = {};

int GetNUmOfGold(int r, int c, int r1, int c1) {
    int num = 0;
    for(int i = r; i <= r1; i++) {
        for(int j = c; j <= c1; j++){
            num += arr1[i][j];
        }
    }
    return num;
}

int main() {
    int max_gold = 0;
    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> arr1[i][j];
        }
    }
    for(int a = 0; a < N; a++) {
        for(int b = 0; b < N; b++) {
            if(a+2 >= N || b+2 >= N) {
                continue;
            }
            int num_of_gold = GetNUmOfGold(a,b,a+2,b+2);
            max_gold = max(max_gold, num_of_gold);
        }
    }
    cout << max_gold;
}