#include<iostream>
using namespace std;

// n개 원소로 이루어진 수열 A
// m개의 두 숫자쌍 a1, a2
// m번에 걸쳐 수열 A의 a1번째 수부터 a2까지의 합을 구해 출력

int arrA[100];
int n,m;
int a1, a2;
int t;

void total() {
    for(int j = 1; j<=m; j++) {
        cin >> a1 >> a2;
        for(int k = a1; k <= a2; k++) {
            t+= arrA[k];
        }
        cout << t << endl;
        t = 0;
    }
}

int main() {
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        cin >> arrA[i];
    }
    total();
    return 0;
}