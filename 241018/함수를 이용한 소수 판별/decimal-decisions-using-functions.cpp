#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
const int MAX = 1001;
bool isPrime[MAX];
int n, m;

void solve() {
    memset(isPrime, true, sizeof(isPrime));

    for (int i = 2; i <= sqrt(m); i++) {
        if (!isPrime[i])continue;

        for (int j = i*i; j <= m; j += i) {
            isPrime[j] = false;
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