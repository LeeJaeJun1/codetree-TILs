#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
const int MAX = 1001;
bool isPrime[MAX];
int n, m;

void solve() {
    memset(isPrime, true, sizeof(isPrime));

    for(int i = 2; i<=m; i++) {
        if(isPrime[i]) {
            for(int j = 2; j * i <= m; j++) {
                isPrime[j*i] = false;
            }
        }
        else{
            continue;
        }
    }
}
int main() {
    cin >> n >> m;
    solve();
    int sum = 0;
    for (int i = n; i <= m; i++) {
        if (isPrime[i])sum += i;
    }
    cout << sum;
}